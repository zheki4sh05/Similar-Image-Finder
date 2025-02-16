#pragma once
#include "Windows.h"
#include "Image.h";
#include "ImageProcessing.h";
#include "ImagesCollection.h";
#include <string>;
#include <msclr/marshal_cppstd.h>;
#include "SettingsForm.h"
#include <fstream>
namespace form {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;
	using namespace System::Diagnostics;
	using namespace img;
	using namespace System::Collections::Generic;
	using namespace System::Runtime::InteropServices;
	using namespace System::IO;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:


	private: System::Windows::Forms::ToolStripMenuItem^ settingsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripTextBox1;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripTextBox2;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripTextBox3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::ListView^ foldersPathList;

	private: System::Windows::Forms::Button^ StartSearchBtn;







	private: System::Windows::Forms::Splitter^ splitter1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ flScnLbCt;
	private: System::Windows::Forms::Label^ flScnLabel;
	private: System::Windows::Forms::Label^ simLabel;
	private: System::Windows::Forms::Label^ simPercentLabel;





	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ browse1img;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ browse2img;

	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ AddFolderBtn;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::Button^ ClearAllFoldersBtn;

	private: System::Windows::Forms::Button^ RemoveFolderBtn;


	private: System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog1;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;



	private: System::Windows::Forms::Button^ moveToBottomBtn;
	private: System::Windows::Forms::Button^ moveToTopBtn;
	private: System::Windows::Forms::Label^ Img1name;
	private: System::Windows::Forms::Label^ Img2name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ origList;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dublicatesList;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ similarity;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ clearList;
	private: System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog2;
	private: System::Windows::Forms::Label^ img1Size;
	private: System::Windows::Forms::Label^ img2Size;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ delMsg;
	private: System::Windows::Forms::Panel^ panel2;








private: System::Windows::Forms::ToolStripMenuItem^ открытьToolStripMenuItem;



private: System::Windows::Forms::Timer^ timer2;


private: System::Windows::Forms::ToolTip^ toolTip2;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
private: System::Windows::Forms::Panel^ panel4;





	protected:
	protected:
	private: System::ComponentModel::IContainer^ components;

	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripTextBox1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->открытьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripTextBox2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripTextBox3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->settingsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->delMsg = (gcnew System::Windows::Forms::Label());
			this->moveToBottomBtn = (gcnew System::Windows::Forms::Button());
			this->moveToTopBtn = (gcnew System::Windows::Forms::Button());
			this->ClearAllFoldersBtn = (gcnew System::Windows::Forms::Button());
			this->RemoveFolderBtn = (gcnew System::Windows::Forms::Button());
			this->AddFolderBtn = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->StartSearchBtn = (gcnew System::Windows::Forms::Button());
			this->foldersPathList = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->splitter1 = (gcnew System::Windows::Forms::Splitter());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->clearList = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->flScnLbCt = (gcnew System::Windows::Forms::Label());
			this->flScnLabel = (gcnew System::Windows::Forms::Label());
			this->simLabel = (gcnew System::Windows::Forms::Label());
			this->simPercentLabel = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->browse1img = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->browse2img = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->origList = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dublicatesList = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->similarity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Img1name = (gcnew System::Windows::Forms::Label());
			this->Img2name = (gcnew System::Windows::Forms::Label());
			this->folderBrowserDialog2 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->img1Size = (gcnew System::Windows::Forms::Label());
			this->img2Size = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->toolTip2 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fileToolStripMenuItem,
					this->settingsToolStripMenuItem, this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1114, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->toolStripTextBox1,
					this->открытьToolStripMenuItem, this->toolStripTextBox2, this->toolStripMenuItem1, this->toolStripTextBox3
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			this->fileToolStripMenuItem->Text = L"Файл";
			this->toolStripTextBox1->Name = L"toolStripTextBox1";
			this->toolStripTextBox1->Size = System::Drawing::Size(192, 26);
			this->toolStripTextBox1->Text = L"Начать поиск";
			this->toolStripTextBox1->Click += gcnew System::EventHandler(this, &MyForm::StartSearchBtn_Click);
			this->открытьToolStripMenuItem->Name = L"открытьToolStripMenuItem";
			this->открытьToolStripMenuItem->Size = System::Drawing::Size(192, 26);
			this->открытьToolStripMenuItem->Text = L"Открыть";
			this->открытьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::LoadFromFile);
			this->toolStripTextBox2->Name = L"toolStripTextBox2";
			this->toolStripTextBox2->Size = System::Drawing::Size(192, 26);
			this->toolStripTextBox2->Text = L"Сохранить";
			this->toolStripTextBox2->Click += gcnew System::EventHandler(this, &MyForm::SaveToFile);
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(192, 26);
			this->toolStripMenuItem1->Text = L"Сохранить как";
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::SaveAsToFile);
			this->toolStripTextBox3->Name = L"toolStripTextBox3";
			this->toolStripTextBox3->Size = System::Drawing::Size(192, 26);
			this->toolStripTextBox3->Text = L"Выход";
			this->toolStripTextBox3->Click += gcnew System::EventHandler(this, &MyForm::Exit);
			this->settingsToolStripMenuItem->Name = L"settingsToolStripMenuItem";
			this->settingsToolStripMenuItem->Size = System::Drawing::Size(98, 24);
			this->settingsToolStripMenuItem->Text = L"Настройки";
			this->settingsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::SettingsToolStripMenuItem_Click);
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(83, 24);
			this->helpToolStripMenuItem->Text = L"Помощь";
			this->helpToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::OpenHelpForm);
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->delMsg);
			this->panel1->Controls->Add(this->moveToBottomBtn);
			this->panel1->Controls->Add(this->moveToTopBtn);
			this->panel1->Controls->Add(this->ClearAllFoldersBtn);
			this->panel1->Controls->Add(this->RemoveFolderBtn);
			this->panel1->Controls->Add(this->AddFolderBtn);
			this->panel1->Controls->Add(this->label14);
			this->panel1->Controls->Add(this->StartSearchBtn);
			this->panel1->Location = System::Drawing::Point(8, 139);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1101, 68);
			this->panel1->TabIndex = 1;
			this->delMsg->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->delMsg->AutoSize = true;
			this->delMsg->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->delMsg->Location = System::Drawing::Point(930, 26);
			this->delMsg->Name = L"delMsg";
			this->delMsg->Size = System::Drawing::Size(24, 21);
			this->delMsg->TabIndex = 22;
			this->delMsg->Text = L"\"\"";
			this->delMsg->Visible = false;
			this->moveToBottomBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"moveToBottomBtn.BackgroundImage")));
			this->moveToBottomBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->moveToBottomBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->moveToBottomBtn->Location = System::Drawing::Point(359, 8);
			this->moveToBottomBtn->Name = L"moveToBottomBtn";
			this->moveToBottomBtn->Size = System::Drawing::Size(50, 50);
			this->moveToBottomBtn->TabIndex = 21;
			this->toolTip2->SetToolTip(this->moveToBottomBtn, L"Переместить ниже");
			this->moveToBottomBtn->UseVisualStyleBackColor = true;
			this->moveToBottomBtn->Click += gcnew System::EventHandler(this, &MyForm::MoveToBottomBtn_Click);
			this->moveToTopBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"moveToTopBtn.BackgroundImage")));
			this->moveToTopBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->moveToTopBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->moveToTopBtn->Location = System::Drawing::Point(303, 8);
			this->moveToTopBtn->Name = L"moveToTopBtn";
			this->moveToTopBtn->Size = System::Drawing::Size(50, 50);
			this->moveToTopBtn->TabIndex = 20;
			this->toolTip2->SetToolTip(this->moveToTopBtn, L"Переместить выше");
			this->moveToTopBtn->UseVisualStyleBackColor = true;
			this->moveToTopBtn->Click += gcnew System::EventHandler(this, &MyForm::MoveToTopBtn_Click);
			this->ClearAllFoldersBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ClearAllFoldersBtn.BackgroundImage")));
			this->ClearAllFoldersBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClearAllFoldersBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ClearAllFoldersBtn->Location = System::Drawing::Point(247, 8);
			this->ClearAllFoldersBtn->Name = L"ClearAllFoldersBtn";
			this->ClearAllFoldersBtn->Size = System::Drawing::Size(50, 50);
			this->ClearAllFoldersBtn->TabIndex = 19;
			this->toolTip2->SetToolTip(this->ClearAllFoldersBtn, L"Очистить список");
			this->ClearAllFoldersBtn->UseVisualStyleBackColor = true;
			this->ClearAllFoldersBtn->Click += gcnew System::EventHandler(this, &MyForm::ClearAllFoldersBtn_Click);
			this->RemoveFolderBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"RemoveFolderBtn.BackgroundImage")));
			this->RemoveFolderBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->RemoveFolderBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->RemoveFolderBtn->Location = System::Drawing::Point(191, 8);
			this->RemoveFolderBtn->Name = L"RemoveFolderBtn";
			this->RemoveFolderBtn->Size = System::Drawing::Size(50, 50);
			this->RemoveFolderBtn->TabIndex = 18;
			this->toolTip2->SetToolTip(this->RemoveFolderBtn, L"Удалить директорию");
			this->RemoveFolderBtn->UseVisualStyleBackColor = true;
			this->RemoveFolderBtn->Click += gcnew System::EventHandler(this, &MyForm::RemoveFolderBtn_Click);
			this->AddFolderBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AddFolderBtn.BackgroundImage")));
			this->AddFolderBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->AddFolderBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->AddFolderBtn->Location = System::Drawing::Point(134, 8);
			this->AddFolderBtn->Name = L"AddFolderBtn";
			this->AddFolderBtn->Size = System::Drawing::Size(51, 50);
			this->AddFolderBtn->TabIndex = 16;
			this->toolTip2->SetToolTip(this->AddFolderBtn, L"Выбрать директорию");
			this->AddFolderBtn->UseVisualStyleBackColor = true;
			this->AddFolderBtn->Click += gcnew System::EventHandler(this, &MyForm::AddFolderBtn_Click);
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label14->Location = System::Drawing::Point(19, 19);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(87, 29);
			this->label14->TabIndex = 1;
			this->label14->Text = L"Папки";
			this->StartSearchBtn->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->StartSearchBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->StartSearchBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->StartSearchBtn->Location = System::Drawing::Point(490, 13);
			this->StartSearchBtn->Name = L"StartSearchBtn";
			this->StartSearchBtn->Size = System::Drawing::Size(121, 41);
			this->StartSearchBtn->TabIndex = 0;
			this->StartSearchBtn->Text = L"Начать";
			this->StartSearchBtn->UseVisualStyleBackColor = true;
			this->StartSearchBtn->Click += gcnew System::EventHandler(this, &MyForm::StartSearchBtn_Click);
			this->foldersPathList->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->foldersPathList->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(1) { this->columnHeader1 });
			this->foldersPathList->HideSelection = false;
			this->foldersPathList->LabelWrap = false;
			this->foldersPathList->Location = System::Drawing::Point(8, 31);
			this->foldersPathList->MultiSelect = false;
			this->foldersPathList->Name = L"foldersPathList";
			this->foldersPathList->Size = System::Drawing::Size(1101, 102);
			this->foldersPathList->TabIndex = 2;
			this->foldersPathList->UseCompatibleStateImageBehavior = false;
			this->foldersPathList->View = System::Windows::Forms::View::List;
			this->columnHeader1->Text = L"";
			this->columnHeader1->Width = 500;
			this->splitter1->Location = System::Drawing::Point(0, 28);
			this->splitter1->Name = L"splitter1";
			this->splitter1->Size = System::Drawing::Size(3, 822);
			this->splitter1->TabIndex = 8;
			this->splitter1->TabStop = false;
			this->panel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->label3);
			this->panel3->Controls->Add(this->clearList);
			this->panel3->Controls->Add(this->label1);
			this->panel3->Controls->Add(this->label2);
			this->panel3->Controls->Add(this->flScnLbCt);
			this->panel3->Controls->Add(this->flScnLabel);
			this->panel3->Location = System::Drawing::Point(7, 633);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1101, 42);
			this->panel3->TabIndex = 9;
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(912, 12);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(117, 16);
			this->label3->TabIndex = 33;
			this->label3->Text = L"Очистить список";
			this->clearList->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->clearList->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"clearList.BackgroundImage")));
			this->clearList->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->clearList->Cursor = System::Windows::Forms::Cursors::Hand;
			this->clearList->Location = System::Drawing::Point(1035, 0);
			this->clearList->Name = L"clearList";
			this->clearList->Size = System::Drawing::Size(39, 37);
			this->clearList->TabIndex = 32;
			this->clearList->UseVisualStyleBackColor = true;
			this->clearList->Click += gcnew System::EventHandler(this, &MyForm::ClearList_Click);
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(356, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(19, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"0";
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(224, 11);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(125, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Дубликатов:";
			this->flScnLbCt->AutoSize = true;
			this->flScnLbCt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->flScnLbCt->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->flScnLbCt->Location = System::Drawing::Point(163, 11);
			this->flScnLbCt->Name = L"flScnLbCt";
			this->flScnLbCt->Size = System::Drawing::Size(19, 20);
			this->flScnLbCt->TabIndex = 1;
			this->flScnLbCt->Text = L"0";
			this->flScnLabel->AutoSize = true;
			this->flScnLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->flScnLabel->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->flScnLabel->Location = System::Drawing::Point(20, 11);
			this->flScnLabel->Name = L"flScnLabel";
			this->flScnLabel->Size = System::Drawing::Size(137, 20);
			this->flScnLabel->TabIndex = 0;
			this->flScnLabel->Text = L"Сканировано:";
			this->simLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->simLabel->AutoSize = true;
			this->simLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->simLabel->Location = System::Drawing::Point(511, 240);
			this->simLabel->Name = L"simLabel";
			this->simLabel->Size = System::Drawing::Size(101, 25);
			this->simLabel->TabIndex = 13;
			this->simLabel->Text = L"Сходство";
			this->simPercentLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->simPercentLabel->AutoSize = true;
			this->simPercentLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->simPercentLabel->Location = System::Drawing::Point(536, 265);
			this->simPercentLabel->Name = L"simPercentLabel";
			this->simPercentLabel->Size = System::Drawing::Size(52, 25);
			this->simPercentLabel->TabIndex = 14;
			this->simPercentLabel->Text = L"89%";
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Location = System::Drawing::Point(17, 7);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(51, 50);
			this->button1->TabIndex = 15;
			this->toolTip2->SetToolTip(this->button1, L"Переместить в другую директорию");
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::MoveImgBtn1);
			this->browse1img->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->browse1img->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"browse1img.BackgroundImage")));
			this->browse1img->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->browse1img->Cursor = System::Windows::Forms::Cursors::Hand;
			this->browse1img->Location = System::Drawing::Point(99, 7);
			this->browse1img->Name = L"browse1img";
			this->browse1img->Size = System::Drawing::Size(50, 50);
			this->browse1img->TabIndex = 16;
			this->browse1img->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			this->toolTip2->SetToolTip(this->browse1img, L"Открыть в проводнике");
			this->browse1img->UseVisualStyleBackColor = true;
			this->browse1img->Click += gcnew System::EventHandler(this, &MyForm::Browse1img_Click);
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Location = System::Drawing::Point(167, 7);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(50, 50);
			this->button3->TabIndex = 17;
			this->toolTip2->SetToolTip(this->button3, L"Удалить из директории");
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::DelImageBtn1);
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(0, 57);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(94, 16);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Переместить";
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(96, 57);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(62, 16);
			this->label9->TabIndex = 19;
			this->label9->Text = L"Открыть";
			this->label10->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(164, 57);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(62, 16);
			this->label10->TabIndex = 20;
			this->label10->Text = L"Удалить";
			this->label11->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(855, 57);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(62, 16);
			this->label11->TabIndex = 26;
			this->label11->Text = L"Удалить";
			this->label12->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(929, 57);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(62, 16);
			this->label12->TabIndex = 25;
			this->label12->Text = L"Открыть";
			this->label13->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(995, 57);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(94, 16);
			this->label13->TabIndex = 24;
			this->label13->Text = L"Переместить";
			this->button4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Location = System::Drawing::Point(858, 7);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(50, 50);
			this->button4->TabIndex = 23;
			this->toolTip2->SetToolTip(this->button4, L"Удалить из директории");
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::delImageBtn2);
			this->browse2img->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->browse2img->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"browse2img.BackgroundImage")));
			this->browse2img->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->browse2img->Cursor = System::Windows::Forms::Cursors::Hand;
			this->browse2img->Location = System::Drawing::Point(930, 7);
			this->browse2img->Name = L"browse2img";
			this->browse2img->Size = System::Drawing::Size(50, 50);
			this->browse2img->TabIndex = 22;
			this->toolTip2->SetToolTip(this->browse2img, L"Открыть в проводнике");
			this->browse2img->UseVisualStyleBackColor = true;
			this->browse2img->Click += gcnew System::EventHandler(this, &MyForm::Browse2img_Click);
			this->button6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->Location = System::Drawing::Point(1012, 7);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(51, 50);
			this->button6->TabIndex = 21;
			this->toolTip2->SetToolTip(this->button6, L"Переместить в другую директорию");
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::MoveImg2Btn);
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(18, 226);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Padding = System::Windows::Forms::Padding(10);
			this->pictureBox1->Size = System::Drawing::Size(480, 326);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 27;
			this->pictureBox1->TabStop = false;
			this->pictureBox2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->pictureBox2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(620, 226);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Padding = System::Windows::Forms::Padding(10);
			this->pictureBox2->Size = System::Drawing::Size(480, 326);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 28;
			this->pictureBox2->TabStop = false;
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->origList, this->dublicatesList,
					this->similarity
			});
			this->dataGridView1->Location = System::Drawing::Point(9, 688);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1101, 150);
			this->dataGridView1->TabIndex = 29;
			this->dataGridView1->SelectionChanged += gcnew System::EventHandler(this, &MyForm::DataGridView1_SelectionChanged);
			this->origList->HeaderText = L"Оригинал";
			this->origList->MinimumWidth = 6;
			this->origList->Name = L"origList";
			this->origList->ReadOnly = true;
			this->dublicatesList->HeaderText = L"Дубликаты";
			this->dublicatesList->MinimumWidth = 6;
			this->dublicatesList->Name = L"dublicatesList";
			this->dublicatesList->ReadOnly = true;
			this->similarity->HeaderText = L"Сходство";
			this->similarity->MinimumWidth = 6;
			this->similarity->Name = L"similarity";
			this->similarity->ReadOnly = true;
			this->Img1name->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Img1name->AutoSize = true;
			this->Img1name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Img1name->Location = System::Drawing::Point(250, 17);
			this->Img1name->Name = L"Img1name";
			this->Img1name->Size = System::Drawing::Size(94, 20);
			this->Img1name->TabIndex = 30;
			this->Img1name->Text = L"image1.png";
			this->Img2name->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Img2name->AutoSize = true;
			this->Img2name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Img2name->Location = System::Drawing::Point(615, 17);
			this->Img2name->Name = L"Img2name";
			this->Img2name->Size = System::Drawing::Size(94, 20);
			this->Img2name->TabIndex = 31;
			this->Img2name->Text = L"image2.png";
			this->img1Size->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->img1Size->AutoSize = true;
			this->img1Size->Location = System::Drawing::Point(315, 53);
			this->img1Size->Name = L"img1Size";
			this->img1Size->Size = System::Drawing::Size(46, 16);
			this->img1Size->TabIndex = 32;
			this->img1Size->Text = L"0X0 px";
			this->img2Size->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->img2Size->AutoSize = true;
			this->img2Size->Location = System::Drawing::Point(699, 53);
			this->img2Size->Name = L"img2Size";
			this->img2Size->Size = System::Drawing::Size(46, 16);
			this->img2Size->TabIndex = 33;
			this->img2Size->Text = L"0X0 px";
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::Timer1_Tick);
			this->panel2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->panel2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Location = System::Drawing::Point(7, 213);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1101, 421);
			this->panel2->TabIndex = 34;
			this->panel4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel4->Controls->Add(this->img2Size);
			this->panel4->Controls->Add(this->button4);
			this->panel4->Controls->Add(this->label11);
			this->panel4->Controls->Add(this->button3);
			this->panel4->Controls->Add(this->button6);
			this->panel4->Controls->Add(this->img1Size);
			this->panel4->Controls->Add(this->label12);
			this->panel4->Controls->Add(this->Img2name);
			this->panel4->Controls->Add(this->browse2img);
			this->panel4->Controls->Add(this->button1);
			this->panel4->Controls->Add(this->label13);
			this->panel4->Controls->Add(this->Img1name);
			this->panel4->Controls->Add(this->browse1img);
			this->panel4->Controls->Add(this->label10);
			this->panel4->Controls->Add(this->label8);
			this->panel4->Controls->Add(this->label9);
			this->panel4->Location = System::Drawing::Point(9, 338);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1092, 77);
			this->panel4->TabIndex = 34;
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1114, 850);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->splitter1);
			this->Controls->Add(this->foldersPathList);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->simLabel);
			this->Controls->Add(this->simPercentLabel);
			this->Controls->Add(this->panel2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Image finder";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
		bool ignoreSelection = false;
		bool stopSearching = false;
		bool saved = false;
	    System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e);
	    System::Void AddFolderBtn_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void RemoveFolderBtn_Click(System::Object^ sender, System::EventArgs^ e);
	    System::Void ClearAllFoldersBtn_Click(System::Object^ sender, System::EventArgs^ e);
	    System::Void StartSearchBtn_Click(System::Object^ sender, System::EventArgs^ e);
	    System::Void MoveToTopBtn_Click(System::Object^ sender, System::EventArgs^ e);
	    System::Void MoveToBottomBtn_Click(System::Object^ sender, System::EventArgs^ e);
	    System::Void DataGridView1_SelectionChanged(System::Object^ sender, System::EventArgs^ e);
        System::Void Browse1img_Click(System::Object^ sender, System::EventArgs^ e);
        System::Void Browse2img_Click(System::Object^ sender, System::EventArgs^ e);
	    System::Void OpenExplorer(System::String^ filepath);
	    System::String^ GetDataFromGrid(int type);
	    System::Void SettingsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	    System::Void ClearList_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void Exit(System::Object^ sender, System::EventArgs^ e);
		System::Void MyForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);
		System::Void DelImageBtn1(System::Object^ sender, System::EventArgs^ e);
		System::Void MoveImgBtn1(System::Object^ sender, System::EventArgs^ e);
		System::Void Timer1_Tick(System::Object^ sender, System::EventArgs^ e);
		bool DeleteFile(System::String^ s);
		bool MoveFile(System::String^ oldPath, System::String^ newPath);
		System::Void MoveImg2Btn(System::Object^ sender, System::EventArgs^ e);
		System::Void ShowDialog(int index);
		System::Void ClearPictureBox();
		System::Void RefreshDataGrid(System::String^ path);
		System::Void DeleteImg(int index);
		System::Void delImageBtn2(System::Object^ sender, System::EventArgs^ e);
		System::Void ClearGrid();
		System::Void SaveToFile(System::Object^ sender, System::EventArgs^ e);
		System::Void LoadFromFile(System::Object^ sender, System::EventArgs^ e);
	    System::Void SaveAsToFile(System::Object^ sender, System::EventArgs^ e);
		System::Void OpenHelpForm(System::Object^ sender, System::EventArgs^ e);
		System::Void ClearDataLists();
};
}
