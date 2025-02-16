#pragma once

namespace form {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для HelpForm
	/// </summary>
	public ref class HelpForm : public System::Windows::Forms::Form
	{
	public:
		HelpForm(void)
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
		~HelpForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::RichTextBox^ richTextBox4;
	private: System::Windows::Forms::RichTextBox^ richTextBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox6;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::RichTextBox^ richTextBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::RichTextBox^ richTextBox6;
	private: System::Windows::Forms::RichTextBox^ richTextBox9;
	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::RichTextBox^ richTextBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::RichTextBox^ richTextBox7;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::RichTextBox^ richTextBox11;
	private: System::Windows::Forms::PictureBox^ pictureBox13;
	private: System::Windows::Forms::RichTextBox^ richTextBox10;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(HelpForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->richTextBox11 = (gcnew System::Windows::Forms::RichTextBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->richTextBox10 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox9 = (gcnew System::Windows::Forms::RichTextBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->richTextBox8 = (gcnew System::Windows::Forms::RichTextBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->richTextBox7 = (gcnew System::Windows::Forms::RichTextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->richTextBox6 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox5 = (gcnew System::Windows::Forms::RichTextBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->richTextBox4 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->Controls->Add(this->richTextBox11);
			this->panel1->Controls->Add(this->pictureBox13);
			this->panel1->Controls->Add(this->richTextBox10);
			this->panel1->Controls->Add(this->richTextBox9);
			this->panel1->Controls->Add(this->pictureBox12);
			this->panel1->Controls->Add(this->pictureBox11);
			this->panel1->Controls->Add(this->richTextBox8);
			this->panel1->Controls->Add(this->pictureBox10);
			this->panel1->Controls->Add(this->richTextBox7);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->pictureBox9);
			this->panel1->Controls->Add(this->richTextBox6);
			this->panel1->Controls->Add(this->richTextBox5);
			this->panel1->Controls->Add(this->pictureBox8);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->pictureBox7);
			this->panel1->Controls->Add(this->richTextBox4);
			this->panel1->Controls->Add(this->richTextBox3);
			this->panel1->Controls->Add(this->pictureBox6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->richTextBox2);
			this->panel1->Controls->Add(this->pictureBox4);
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->richTextBox1);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(4, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(601, 440);
			this->panel1->TabIndex = 1;
			// 
			// richTextBox11
			// 
			this->richTextBox11->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox11->HideSelection = false;
			this->richTextBox11->Location = System::Drawing::Point(28, 3031);
			this->richTextBox11->Name = L"richTextBox11";
			this->richTextBox11->ReadOnly = true;
			this->richTextBox11->Size = System::Drawing::Size(537, 97);
			this->richTextBox11->TabIndex = 33;
			this->richTextBox11->Text = L"Вот и все!                                                          Вы научились "
				L"пользоваться приложением Image finder!";
			// 
			// pictureBox13
			// 
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(28, 2734);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(286, 245);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox13->TabIndex = 32;
			this->pictureBox13->TabStop = false;
			// 
			// richTextBox10
			// 
			this->richTextBox10->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox10->Location = System::Drawing::Point(8, 2673);
			this->richTextBox10->Name = L"richTextBox10";
			this->richTextBox10->ReadOnly = true;
			this->richTextBox10->Size = System::Drawing::Size(569, 46);
			this->richTextBox10->TabIndex = 31;
			this->richTextBox10->Text = L"4) В дальнейшем вы можете загрузить сохраненные результаты сканирования:";
			// 
			// richTextBox9
			// 
			this->richTextBox9->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox9->Location = System::Drawing::Point(28, 2405);
			this->richTextBox9->Name = L"richTextBox9";
			this->richTextBox9->ReadOnly = true;
			this->richTextBox9->Size = System::Drawing::Size(549, 32);
			this->richTextBox9->TabIndex = 30;
			this->richTextBox9->Text = L"3) После появится такое всплывающее окно:";
			// 
			// pictureBox12
			// 
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(28, 2443);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(231, 201);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox12->TabIndex = 29;
			this->pictureBox12->TabStop = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(28, 2101);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(355, 284);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox11->TabIndex = 28;
			this->pictureBox11->TabStop = false;
			// 
			// richTextBox8
			// 
			this->richTextBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox8->Location = System::Drawing::Point(28, 2027);
			this->richTextBox8->Name = L"richTextBox8";
			this->richTextBox8->ReadOnly = true;
			this->richTextBox8->Size = System::Drawing::Size(549, 68);
			this->richTextBox8->TabIndex = 27;
			this->richTextBox8->Text = L"2) Далее выберите папку куда сохранить данные либо создайте новую папку и введите"
				L" название и нажмите кнопку OK:";
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(28, 1802);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(231, 201);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox10->TabIndex = 26;
			this->pictureBox10->TabStop = false;
			// 
			// richTextBox7
			// 
			this->richTextBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox7->Location = System::Drawing::Point(28, 1748);
			this->richTextBox7->Name = L"richTextBox7";
			this->richTextBox7->ReadOnly = true;
			this->richTextBox7->Size = System::Drawing::Size(522, 48);
			this->richTextBox7->TabIndex = 25;
			this->richTextBox7->Text = L"1) Для сохранения данных в файл выберите в пункте меню \"Файл\" подпункт \"Сохранить"
				L" как\"";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(8, 1705);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(237, 29);
			this->label7->TabIndex = 24;
			this->label7->Text = L"Сохранение в файл";
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(28, 1479);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(522, 201);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 23;
			this->pictureBox9->TabStop = false;
			// 
			// richTextBox6
			// 
			this->richTextBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox6->Location = System::Drawing::Point(28, 1425);
			this->richTextBox6->Name = L"richTextBox6";
			this->richTextBox6->ReadOnly = true;
			this->richTextBox6->Size = System::Drawing::Size(522, 48);
			this->richTextBox6->TabIndex = 22;
			this->richTextBox6->Text = L"2) Чтобы отобразить пару изображений нажмите на название одного из изображений в "
				L"таблице";
			// 
			// richTextBox5
			// 
			this->richTextBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox5->Location = System::Drawing::Point(28, 1226);
			this->richTextBox5->Name = L"richTextBox5";
			this->richTextBox5->ReadOnly = true;
			this->richTextBox5->Size = System::Drawing::Size(522, 64);
			this->richTextBox5->TabIndex = 21;
			this->richTextBox5->Text = L"1) Для работы с файлами изображений имееются следующие функции: перемещение, откр"
				L"ыть в проводнике, удалить ";
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(44, 1296);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(336, 107);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 20;
			this->pictureBox8->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(8, 1194);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(225, 29);
			this->label6->TabIndex = 19;
			this->label6->Text = L"Работы с данными";
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(28, 1033);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(246, 147);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 18;
			this->pictureBox7->TabStop = false;
			// 
			// richTextBox4
			// 
			this->richTextBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox4->Location = System::Drawing::Point(28, 986);
			this->richTextBox4->Name = L"richTextBox4";
			this->richTextBox4->ReadOnly = true;
			this->richTextBox4->Size = System::Drawing::Size(522, 41);
			this->richTextBox4->TabIndex = 17;
			this->richTextBox4->Text = L"2) Когда сканирование закончится, появится всплывающее окно:";
			// 
			// richTextBox3
			// 
			this->richTextBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox3->Location = System::Drawing::Point(262, 908);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->ReadOnly = true;
			this->richTextBox3->Size = System::Drawing::Size(313, 41);
			this->richTextBox3->TabIndex = 15;
			this->richTextBox3->Text = L"! Сканивароние может занять необходимое время!";
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(46, 897);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(210, 70);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 14;
			this->pictureBox6->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(24, 874);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(283, 20);
			this->label5->TabIndex = 12;
			this->label5->Text = L"1) Можно нажав кнопку \"Начать\"";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(8, 829);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(258, 29);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Начать сканивароние";
			// 
			// richTextBox2
			// 
			this->richTextBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox2->Location = System::Drawing::Point(47, 477);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->ReadOnly = true;
			this->richTextBox2->Size = System::Drawing::Size(516, 41);
			this->richTextBox2->TabIndex = 10;
			this->richTextBox2->Text = L"2.1) Появится окно с настройками, настройки необходимо сохранить, нажав OK либо о"
				L"тменить нажав кнопку \"Закрыть\"";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(56, 524);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(383, 284);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 9;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(47, 369);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(316, 102);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 8;
			this->pictureBox3->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(20, 337);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(343, 20);
			this->label3->TabIndex = 7;
			this->label3->Text = L"2) Настроить поиск, нажав \"Настройки\"";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(42, 169);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(369, 138);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 6;
			this->pictureBox2->TabStop = false;
			// 
			// richTextBox1
			// 
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox1->Location = System::Drawing::Point(42, 122);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(516, 41);
			this->richTextBox1->TabIndex = 5;
			this->richTextBox1->Text = L"1.1) Для управления спиcком директорий имеется следующий функционал: ";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(42, 67);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(136, 49);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(20, 44);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(370, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"1) Выбрать директорию, нажав на крестик";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(8, 5);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(280, 29);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Перед началом работы";
			// 
			// HelpForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(609, 445);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"HelpForm";
			this->Text = L"Помощь";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	
};
}
