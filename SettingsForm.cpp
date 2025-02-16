#include "SettingsForm.h"
#include "DataStorage.h"
System::Void form::SettingsForm::Close_Btn_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Close();
}

System::Void form::SettingsForm::Ok_Btn_Click(System::Object^ sender, System::EventArgs^ e)
{
    DataStorage::SetSimilarity((int)numericUpDown1->Value);
    int height = Int32::Parse(minHeightTextBox->Text);
    int width = Int32::Parse(minWidthTextBox->Text);
    DataStorage::SetSize(height,width);
    DataStorage::SetDelCondition(!delOptionCheckBox->Checked);
    DataStorage::SetExtension(
        checkBox1->Checked,
        checkBox2->Checked,
        checkBox6->Checked,
        checkBox3->Checked,
        checkBox4->Checked
    );
    this->Close();
}

System::Void form::SettingsForm::SettingsForm_Load(System::Object^ sender, System::EventArgs^ e)
{

    
    checkBox1->Checked = DataStorage::PNG();
    checkBox2->Checked = DataStorage::JPG();
    checkBox6->Checked = DataStorage::JPEG();
    checkBox3->Checked = DataStorage::WEBP();
    checkBox4->Checked = DataStorage::TIFF();
    numericUpDown1->Value = DataStorage::GetSimilarity();
    minHeightTextBox->Text = DataStorage::GetMinHeight().ToString();
    minWidthTextBox->Text = DataStorage::GetMinWidth().ToString();
    trackBar1->Value = DataStorage::GetSimilarity();
    delOptionCheckBox->Checked = !DataStorage::GetDelOption();

}
