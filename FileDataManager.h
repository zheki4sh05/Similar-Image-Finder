#pragma once
#include "DataStorage.h"
#include <fstream>
using namespace std;
using namespace System::IO;
using namespace System::Runtime::Serialization::Formatters::Binary;
public ref class FileDataManager
{
private:
	static System::String^ listPath = "list.dat";
	static System::String^ settingsPath = "settings.dat";
	static System::String^ dataGridPath="grid.dat";
	static System::String^ ptojectFolder = nullptr;
public:
	 FileDataManager(System::String^ listPath, System::String^ settingsPath, System::String^ dataGridPath) {
		 this->dataGridPath = dataGridPath;
		 this->listPath = listPath;
		 this->settingsPath = settingsPath;
	}
	 template<typename T>
	 static System::Void SaveToFile(List<T>^ list, System::String^ path) {
		 System::String^ fullPath = ptojectFolder + "\\" + path;
		 auto formatter = gcnew BinaryFormatter();
		 {
			 auto fs = gcnew FileStream(fullPath, FileMode::OpenOrCreate);
			 formatter->Serialize(fs, list);
			 fs->Close();
		 }
	 }
	 template<typename T>
	 static List<T>^ LoadFromFile(System::String^ path) {
		 // FileStream^ st = gcnew FileStream(path,FileMode::Open);
		// BinaryFormatter bfmSt = gcnew BinaryFormatter();
		 //list = dynamic_cast<List<T>^>(bfmSt->Deserialize(st));
		 List<T>^ list=nullptr;
		 System::String^ fullPath = ptojectFolder + "\\" + path;
		 FileStream^ FileStream1 = File::OpenRead(fullPath);
		 BinaryFormatter^ BinaryFormatter1 = gcnew BinaryFormatter();
		 list = (List<T>^)(BinaryFormatter1->Deserialize(FileStream1));
		 FileStream1->Close();
		 return list;
	 }
	 static System::String^ GetListPath();
	 static System::String^ GetSettingsPath();
	 static System::String^ GetDataGridPath();
	 static System::String^ GetPrjectFolder();
	 static System::Void SetProjectFolder(System::String^ path);
	

};
