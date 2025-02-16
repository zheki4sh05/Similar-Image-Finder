#include "DataStorage.h"
#include "FileDataManager.h"

void DataStorage::SetSimilarity(int val)
{
	similarity = val;
}

void DataStorage::SetSize(int height, int width)
{
	minHeight = height;
	minWidth = width;
}

void DataStorage::SetDelCondition(bool d)
{
	delWithConfirm = d;
}

int DataStorage::GetSimilarity()
{
	return similarity;
}

int DataStorage::GetMinWidth()
{
	return minWidth;
}

int DataStorage::GetMinHeight()
{
	return minHeight;
}

bool DataStorage::GetDelOption()
{
	return delWithConfirm;
}

void DataStorage::SetExtension(bool PNG, bool JPG, bool JPEG, bool WEBP, bool TIFF)
{
	png = PNG;
	jpg = JPG;
	jpeg = JPEG;
	webp = WEBP;
	tiff = TIFF;

}

bool DataStorage::PNG()
{
	return png;
}

bool DataStorage::JPG()
{
	return jpg;
}

bool DataStorage::JPEG()
{
	return jpeg;
}

bool DataStorage::WEBP()
{
	return webp;
}

bool DataStorage::TIFF()
{
	return tiff;
}

void DataStorage::SetActiveDirectory(System::String^ path)
{
	activeDirectory = path;
}

System::String^ DataStorage::GetActiveDirectory()
{
	return activeDirectory;
}

void DataStorage::addToList(System::String^ path, System::String^ fileName, int height, int width)
{
	Img^ img = gcnew Img(path, fileName, width, height);
	list->Add(img);
}

void DataStorage::addGridToList(System::String^ fileName1, System::String^ fileName2, int sim)
{
	GridRow^ row = gcnew GridRow(fileName1, fileName2, sim);
	grid->Add(row);
}

System::String^ DataStorage::getFilePath(System::String^ fileName)
{

	for each (Img ^ var in list)
	{
		if (var->fileName == fileName)
			return var->filePath;
	}
	return "";
}

void DataStorage::GetImageSize(System::String^ p, int& h, int& w)
{
	for each (Img ^ var in list)
	{
		if (var->fileName == p) {
			h = var->height;
			w = var->width;
		}
	}
}

void DataStorage::DeleteRows(System::String^ fileName)
{
	int count = 0,index=0;
	bool find = false;
	for (int i = 0; i < list->Count;i++) {
		if (list[i]->fileName->Equals(fileName))
			list->RemoveAt(i);
		
	}
	while (true) {
		if (index == grid->Count)
			break;
		if (grid[index]->fileName1->Equals(fileName) || grid[index]->fileName2->Equals(fileName)) {
			grid->RemoveAt(index);
			index = 0;
		}
		else {
			index++;
		}

	}
}
void DataStorage::FillDataGrid(System::Windows::Forms::DataGridView^ table)
{
	for (int i = 0; i < grid->Count; i++) {
		table->Rows->Add(grid[i]->fileName1, grid[i]->fileName2, grid[i]->sim + "%");
	}
}

void DataStorage::Save()
{
	if (FileDataManager::GetPrjectFolder() != nullptr) {
		FileDataManager::SaveToFile(list, FileDataManager::GetListPath());
		FileDataManager::SaveToFile(grid, FileDataManager::GetDataGridPath());
	}
	else {
		throw gcnew ProjectNotOpenExeption();
	}
}

void DataStorage::Load()
{
	list = FileDataManager::LoadFromFile<Img^>(FileDataManager::GetListPath());
	grid = FileDataManager::LoadFromFile<GridRow^>(FileDataManager::GetDataGridPath());
}
void DataStorage::ClearListImg()
{
	list->Clear();
}

void DataStorage::ClearGrid()
{
	grid->Clear();
}
