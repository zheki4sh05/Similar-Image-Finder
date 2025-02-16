#pragma once

namespace form {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для SettingsForm
	/// </summary>
	public ref class SettingsForm : public System::Windows::Forms::Form
	{
	public:
		SettingsForm(void)
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
		~SettingsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;

	private: System::Windows::Forms::TrackBar^ trackBar1;






	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Button^ Ok_Btn;
	private: System::Windows::Forms::Button^ Close_Btn;
	private: System::Windows::Forms::CheckBox^ checkBox6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ minWidthTextBox;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ minHeightTextBox;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::CheckBox^ delOptionCheckBox;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SettingsForm::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->minWidthTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->minHeightTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->delOptionCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->Ok_Btn = (gcnew System::Windows::Forms::Button());
			this->Close_Btn = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->checkBox6);
			this->groupBox1->Controls->Add(this->checkBox4);
			this->groupBox1->Controls->Add(this->checkBox3);
			this->groupBox1->Controls->Add(this->checkBox2);
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->Location = System::Drawing::Point(28, 30);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(181, 178);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Расширение";
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Checked = true;
			this->checkBox6->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox6->Location = System::Drawing::Point(28, 82);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(64, 20);
			this->checkBox6->TabIndex = 4;
			this->checkBox6->Text = L"JPEG";
			this->checkBox6->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Checked = true;
			this->checkBox4->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox4->Location = System::Drawing::Point(28, 134);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(57, 20);
			this->checkBox4->TabIndex = 3;
			this->checkBox4->Text = L"TIFF";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Checked = true;
			this->checkBox3->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox3->Location = System::Drawing::Point(28, 108);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(69, 20);
			this->checkBox3->TabIndex = 2;
			this->checkBox3->Text = L"WEBP";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Checked = true;
			this->checkBox2->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox2->Location = System::Drawing::Point(28, 56);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(55, 20);
			this->checkBox2->TabIndex = 1;
			this->checkBox2->Text = L"JPG";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Location = System::Drawing::Point(28, 30);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(58, 20);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"PNG";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->minWidthTextBox);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->minHeightTextBox);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->numericUpDown1);
			this->groupBox2->Controls->Add(this->trackBar1);
			this->groupBox2->Location = System::Drawing::Point(245, 32);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(239, 176);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Критери поиска";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(168, 126);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(21, 16);
			this->label5->TabIndex = 13;
			this->label5->Text = L"px";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(168, 94);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(21, 16);
			this->label4->TabIndex = 12;
			this->label4->Text = L"px";
			// 
			// minWidthTextBox
			// 
			this->minWidthTextBox->Location = System::Drawing::Point(100, 123);
			this->minWidthTextBox->Name = L"minWidthTextBox";
			this->minWidthTextBox->Size = System::Drawing::Size(62, 22);
			this->minWidthTextBox->TabIndex = 11;
			this->minWidthTextBox->Text = L"100";
			this->minWidthTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(7, 123);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(89, 16);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Мин. ширина";
			// 
			// minHeightTextBox
			// 
			this->minHeightTextBox->Location = System::Drawing::Point(100, 91);
			this->minHeightTextBox->Name = L"minHeightTextBox";
			this->minHeightTextBox->Size = System::Drawing::Size(62, 22);
			this->minHeightTextBox->TabIndex = 9;
			this->minHeightTextBox->Text = L"100";
			this->minHeightTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(7, 94);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(87, 16);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Мин. высота";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(82, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(68, 16);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Сходство";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(145, 52);
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(52, 22);
			this->numericUpDown1->TabIndex = 6;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 0 });
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(6, 44);
			this->trackBar1->Maximum = 100;
			this->trackBar1->Minimum = 50;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(133, 56);
			this->trackBar1->SmallChange = 5;
			this->trackBar1->TabIndex = 0;
			this->trackBar1->Value = 50;
			this->trackBar1->ValueChanged += gcnew System::EventHandler(this, &SettingsForm::trackBar1_ValueChanged);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->delOptionCheckBox);
			this->groupBox3->Location = System::Drawing::Point(28, 234);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(456, 66);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Настройки удаления";
			// 
			// delOptionCheckBox
			// 
			this->delOptionCheckBox->AutoSize = true;
			this->delOptionCheckBox->Location = System::Drawing::Point(28, 33);
			this->delOptionCheckBox->Name = L"delOptionCheckBox";
			this->delOptionCheckBox->Size = System::Drawing::Size(216, 20);
			this->delOptionCheckBox->TabIndex = 0;
			this->delOptionCheckBox->Text = L"Удалять без подтверждения";
			this->delOptionCheckBox->UseVisualStyleBackColor = true;
			// 
			// Ok_Btn
			// 
			this->Ok_Btn->Location = System::Drawing::Point(154, 357);
			this->Ok_Btn->Name = L"Ok_Btn";
			this->Ok_Btn->Size = System::Drawing::Size(85, 34);
			this->Ok_Btn->TabIndex = 3;
			this->Ok_Btn->Text = L"ОК";
			this->Ok_Btn->UseVisualStyleBackColor = true;
			this->Ok_Btn->Click += gcnew System::EventHandler(this, &SettingsForm::Ok_Btn_Click);
			// 
			// Close_Btn
			// 
			this->Close_Btn->Location = System::Drawing::Point(245, 357);
			this->Close_Btn->Name = L"Close_Btn";
			this->Close_Btn->Size = System::Drawing::Size(92, 34);
			this->Close_Btn->TabIndex = 4;
			this->Close_Btn->Text = L"Закрыть";
			this->Close_Btn->UseVisualStyleBackColor = true;
			this->Close_Btn->Click += gcnew System::EventHandler(this, &SettingsForm::Close_Btn_Click);
			// 
			// SettingsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(515, 403);
			this->Controls->Add(this->Close_Btn);
			this->Controls->Add(this->Ok_Btn);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"SettingsForm";
			this->Text = L"Настройки";
			this->Load += gcnew System::EventHandler(this, &SettingsForm::SettingsForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void trackBar1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	numericUpDown1-> Value= trackBar1->Value;
}
private: System::Void Close_Btn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Ok_Btn_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void SettingsForm_Load(System::Object^ sender, System::EventArgs^ e);
};
}
