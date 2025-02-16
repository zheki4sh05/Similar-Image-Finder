#include "MyForm.h"
#include "DataStorage.h"
#include "FileDataManager.h"
#include <msclr/marshal.h>
#include <filesystem>
#include "HelpForm.h"
#include "ProjectNotOpenExeption.h"
using namespace System::IO;
using namespace std::filesystem;
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Runtime::InteropServices;
//using namespace Microsoft::VisualBasic::FileIO;
[STAThreadAttribute] //запуск функции main в отдельном потоке
int main(cli::array < System::String^>^ args) { //^>^ автоматическая очистка памяти
	Application::SetCompatibleTextRenderingDefault(false);//корректная обработка текста
	Application::EnableVisualStyles();//подключение визуальных стилей
	form::MyForm Form;//инициализаируем форму
	Application::Run(% Form);//передаем ref класс по ссылке %
}

System::Void form::MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	DataStorage::SetDelCondition(true);
	DataStorage::SetSimilarity(80);
	DataStorage::SetExtension(true, true, true, true, true);
	DataStorage::SetSize(100, 100);
}

System::Void form::MyForm::AddFolderBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (folderBrowserDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		// Получить адрес выбранной папки
		System::String^ folderPath = folderBrowserDialog1->SelectedPath;
		DataStorage::SetActiveDirectory(folderPath);

		// Создать новый элемент ListView
		ListViewItem^ item = gcnew ListViewItem(folderPath);

		// Добавить элемент в ListView
		foldersPathList->Items->Add(item);
	}
}

System::Void form::MyForm::RemoveFolderBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	try {
		ListViewItem^ selectedPath = foldersPathList->SelectedItems[0];
		foldersPathList->Items->Remove(selectedPath);
	}
	catch (form::Exception^) {
		MessageBox::Show("Список пуст!");
	}
}

System::Void form::MyForm::ClearAllFoldersBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	try {
		foldersPathList->Items->Clear();
	}
	catch (form::Exception^) {
		MessageBox::Show("Список пуст!");
	}
}

System::Void form::MyForm::StartSearchBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (foldersPathList->Items->Count > 0) {
			imc::ImagesCollection imageList;
			ListViewItem^ selectedPath = foldersPathList->Items[0];
			std::string path = msclr::interop::marshal_as<std::string>(selectedPath->Text);
			imageList.FindImages(path);
			this->flScnLbCt->Text = gcnew System::String((imageList.getSize()).ToString());
			System::String^ img1 = nullptr;
			System::String^ img2 = nullptr;
			System::String^ path1 = nullptr;
			System::String^ path2 = nullptr;
			vector < img::Picture > images;
			imp::ImageProcessing imgPr;
			int height;
			int width;
			for (int i = 0; i < imageList.getSize(); i++) {
				std::string path = imageList.GetPathByIndex(i);
				std::string fileName = imageList.getFileName(path);
				Picture pic(path, fileName);
				imgPr.CalcImageHash(pic);
				images.push_back(pic);
				img1 = gcnew System::String(fileName.c_str());
				path1 = gcnew System::String(path.c_str());
				imageList.RightSize(height, width, path);
				DataStorage::addToList(path1, img1, height, width);
			}
			int count = 0;
			for (int i = 0; i < images.size(); i++) {
				for (int y = i + 1; y < images.size(); y++) {
					int dist = imgPr.CalcSimularity(images[i].getHash(), images[y].getHash());
					if (dist >= DataStorage::GetSimilarity()) {
						img1 = gcnew System::String(images[i].getFileName().c_str());
						img2 = gcnew System::String(images[y].getFileName().c_str());
						DataStorage::addGridToList(img1, img2, dist);
						++count;
						label1->Text = count.ToString();
					}
				};
				flScnLbCt->Text = images.size().ToString();
			}
			DataStorage::FillDataGrid(this->dataGridView1);
			this->label1->Text = count.ToString();

			MessageBox::Show("Фйлов сканировано: " + images.size() + "\nДубликатов найдено: " + count, "Результат сканирования", MessageBoxButtons::OK, MessageBoxIcon::Information);
		

	}
	else {
		MessageBox::Show("Не выбран путь!");
	}
}
System::Void form::MyForm::MoveToTopBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (foldersPathList->Items->Count > 1) {
		if (foldersPathList->SelectedItems->Count > 0) {
			int index = foldersPathList->SelectedItems[0]->Index;
			if (index > 0) {
				System::String^ path1 = foldersPathList->Items[index]->Text;
				System::String^ path2 = foldersPathList->Items[index - 1]->Text;
				foldersPathList->Items[index - 1]->Text = path1;
				foldersPathList->Items[index]->Text = path2;
				foldersPathList->Items[index]->Selected = false;
				foldersPathList->Items[index - 1]->Selected = true;
			}
		}
	}
}

System::Void form::MyForm::MoveToBottomBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (foldersPathList->Items->Count > 1) {
		if (foldersPathList->SelectedItems->Count > 0) {
			int index = foldersPathList->SelectedItems[0]->Index;
			if (index < foldersPathList->Items->Count - 1) {
				System::String^ path1 = foldersPathList->Items[index]->Text;
				System::String^ path2 = foldersPathList->Items[index + 1]->Text;
				foldersPathList->Items[index + 1]->Text = path1;
				foldersPathList->Items[index]->Text = path2;
				foldersPathList->Items[index]->Selected = false;
				foldersPathList->Items[index + 1]->Selected = true;
			}
		}
	}
}




System::Void form::MyForm::DataGridView1_SelectionChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (ignoreSelection) {
		return;
	}
	else {
		int height = 0;
		int width = 0;
		System::String^ path1 = GetDataFromGrid(1);
		System::String^ path2 = GetDataFromGrid(2);
		try {
			pictureBox1->Image = Image::FromFile(DataStorage::getFilePath(path1)); //return path1 original image
			pictureBox2->Image = Image::FromFile(DataStorage::getFilePath(path2)); //return path2 similar image
			simPercentLabel->Text = GetDataFromGrid(3); // return sim 
			Img1name->Text = path1;
			Img2name->Text = path2;
			int height = 0;
			int width = 0;
			DataStorage::GetImageSize(path1, height, width);
			img1Size->Text = height + "X" + width + " px";
			DataStorage::GetImageSize(path2, height, width);
			img2Size->Text = height + "X" + width + " px";
		}
		catch (FileNotFoundException^ e) {

			MessageBox::Show("Возможно оно было удалено или перемещено!", "Одно из изображений не найдено!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	
}

System::Void form::MyForm::Browse1img_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (dataGridView1->Rows->Count > 0) {
		System::String^ str = DataStorage::getFilePath(GetDataFromGrid(1));
		OpenExplorer(str);
	}
	else {
		MessageBox::Show("Картинка не выбрана!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}

System::Void form::MyForm::Browse2img_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (dataGridView1->Rows->Count > 0) {
		OpenExplorer(GetDataFromGrid(2));
	}
	else {
		MessageBox::Show("Картинка не выбрана!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}

System::Void form::MyForm::OpenExplorer(System::String^ filepath)
{

	ProcessStartInfo^ psi = gcnew ProcessStartInfo("explorer.exe");
	psi->Arguments = "/select," + filepath;
	Process::Start(psi);
}

System::String^ form::MyForm::GetDataFromGrid(int type)
{
	int rowIndex = dataGridView1->CurrentRow->Index;
	System::String^ data;
	switch (type) {
	case 1:
		data = dataGridView1->Rows[rowIndex]->Cells[0]->Value->ToString();
		break;
	case 2:
		data = dataGridView1->Rows[rowIndex]->Cells[1]->Value->ToString();
		break;
	case 3:
		data = dataGridView1->Rows[rowIndex]->Cells[2]->Value->ToString();
		break;
	}
	return data;
}

System::Void form::MyForm::SettingsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	SettingsForm^ form = gcnew SettingsForm();
	form->Show();
}

System::Void form::MyForm::ClearList_Click(System::Object^ sender, System::EventArgs^ e)
{
	ClearGrid();
	ClearDataLists();
}

System::Void form::MyForm::Exit(System::Object^ sender, System::EventArgs^ e)
{
	System::Windows::Forms::DialogResult result;
	if (!saved) {
		result = MessageBox::Show("Выйти?", "Данные не сохранены!", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
	}
	else {
		result = MessageBox::Show("Выйти?", "Внимание!", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
	}
	if (result == ::DialogResult::Yes)
		return;
	else
		this->Close();
	
}

System::Void form::MyForm::MyForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
{
	System::Windows::Forms::DialogResult result;
	if (!saved) {
		result = MessageBox::Show("Выйти?", "Данные не сохранены!", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
	}
	else {
		result = MessageBox::Show("Выйти?", "Внимание!", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
	}
	if (result == ::DialogResult::Yes)
		return;
	else
		e->Cancel = true;
}

System::Void form::MyForm::DelImageBtn1(System::Object^ sender, System::EventArgs^ e)
{
	DeleteImg(1);
}

System::Void form::MyForm::MoveImgBtn1(System::Object^ sender, System::EventArgs^ e)
{

	ShowDialog(1);
}
System::Void form::MyForm::Timer1_Tick(System::Object^ sender, System::EventArgs^ e)
{
	delMsg->Visible = false;
}
bool form::MyForm::DeleteFile(System::String^ s)
{

	delMsg->Visible = true;
	try {
		//Удаление файла с изображением
		//FileInfo ^fileInf = gcnew FileInfo(s);
		//fileInf->Delete();
		System::IO::File::Delete(s);
		delMsg->Text = "Удалено!";
		return true;
	}
	catch (UnauthorizedAccessException^ e) {
		MessageBox::Show("Нет доступа!", "Ошибка удаления", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return false;
	}
	catch (IOException^ e) {
		MessageBox::Show("Ошибка удаления!", "Ошибка удаления", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return false;
	}

}

bool form::MyForm::MoveFile(System::String^ path1, System::String^ newPath)
{
	delMsg->Visible = true;
	System::String^ oldPath = DataStorage::getFilePath(path1);
	try {
		File::Move(oldPath, newPath);
		delMsg->Text = "Перемещено!";
		return true;
	}
	catch (DirectoryNotFoundException^ e) {
		MessageBox::Show("Директория не найдена!", "Ошибка перемещения", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	catch (UnauthorizedAccessException^ e) {
		MessageBox::Show("Нет доступа к файлу!", "Ошибка перемещения", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	catch (IOException^ e) {
		MessageBox::Show("Не удалось переместить!", "Ошибка перемещения", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	
	return false;
}

System::Void form::MyForm::MoveImg2Btn(System::Object^ sender, System::EventArgs^ e)
{
	ShowDialog(2);
}
System::Void form::MyForm::ShowDialog(int index)
{
	if (dataGridView1->Rows->Count>0) {
		System::Windows::Forms::DialogResult result = folderBrowserDialog1->ShowDialog();
		if (result == System::Windows::Forms::DialogResult::OK) {
			System::String^ selectedPath = folderBrowserDialog1->SelectedPath;
			ClearPictureBox();
			System::String^ name = GetDataFromGrid(index);
			if (MoveFile(name, selectedPath + "/" + name))
				RefreshDataGrid(name);
			timer1->Interval = 3500;
			timer1->Start();
			timer1->Tick += gcnew EventHandler(this, &MyForm::Timer1_Tick);
		}
	}
	else {
		MessageBox::Show("Картинка не выбрана!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	
}
System::Void form::MyForm::ClearPictureBox()
{
		delete pictureBox1->Image;
		pictureBox1->Image = nullptr;
		pictureBox1->Invalidate();
		pictureBox1->Refresh();
		delete pictureBox2->Image;
		pictureBox2->Image = nullptr;
		pictureBox2->Invalidate();
		pictureBox2->Refresh();
}
System::Void form::MyForm::RefreshDataGrid(System::String^ path)
{
	ignoreSelection = true;
	ClearGrid();
	DataStorage::DeleteRows(path);
	ignoreSelection = false;
	DataStorage::FillDataGrid(this->dataGridView1);

}
System::Void form::MyForm::DeleteImg(int index)
{
	if (dataGridView1->Rows->Count > 0) {
		if (DataStorage::GetDelOption()) {
			System::Windows::Forms::DialogResult result;
			result = MessageBox::Show("Вы уверены, что хотите удалить?", "Внимание", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
			if (result == ::DialogResult::No)
				return;
		}
		System::String^ path = DataStorage::getFilePath(GetDataFromGrid(index));
		path->Replace("\\", "/");
		ClearPictureBox();
		if (DeleteFile(path)) {
			RefreshDataGrid(GetDataFromGrid(index));
			label1->Text = dataGridView1->Rows->Count.ToString();
		}
			
		timer1->Interval = 3500;
		timer1->Start();
		timer1->Tick += gcnew EventHandler(this, &MyForm::Timer1_Tick);
	}
	else {
		MessageBox::Show("Картинка не выбрана!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}
System::Void form::MyForm::delImageBtn2(System::Object^ sender, System::EventArgs^ e)
{
	DeleteImg(2);
}
System::Void form::MyForm::ClearGrid()
{
	dataGridView1->Rows->Clear();
	
}


System::Void form::MyForm::SaveToFile(System::Object^ sender, System::EventArgs^ e)
{
	try {
		DataStorage::Save();
		saved = true;
		MessageBox::Show("Сохранено!", "", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (ProjectNotOpenExeption^ e) {
		MessageBox::Show("Проект не открыт!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	catch (DirectoryNotFoundException^ e) {
		MessageBox::Show("Директория не найдена!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	catch (IOException^ e) {
		MessageBox::Show("Ошибка сохранения!\n"+"Попробуйте еще раз!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	
}
System::Void form::MyForm::LoadFromFile(System::Object^ sender, System::EventArgs^ e)
{

	if (folderBrowserDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{

		// Получить адрес выбранной папки
		System::String^ folderPath = folderBrowserDialog1->SelectedPath;
		FileDataManager::SetProjectFolder(folderPath);
		
		try {
			DataStorage::Load();
			DataStorage::FillDataGrid(this->dataGridView1);
			saved = false;
		}
		catch (FileNotFoundException^ e) {
			MessageBox::Show("Файлы сохранения не найдены!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		
	}
	else {
		return;
	}
} 
System::Void form::MyForm::SaveAsToFile(System::Object^ sender, System::EventArgs^ e)
{
	if (folderBrowserDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		// Получить адрес выбранной папки
		System::String^ folderPath = folderBrowserDialog1->SelectedPath;
		FileDataManager::SetProjectFolder(folderPath);
		DataStorage::Save();
		saved = true;
		MessageBox::Show("Сохранено!", "", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else {
		return;
	}
}
System::Void form::MyForm::OpenHelpForm(System::Object^ sender, System::EventArgs^ e)
{
	HelpForm^ form = gcnew HelpForm();
	form->Show();
}
System::Void form::MyForm::ClearDataLists()
{
	DataStorage::ClearGrid();
	DataStorage::ClearListImg();
}
;


