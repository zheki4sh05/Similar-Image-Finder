#pragma once
#include "ProjectNotOpenExeption.h"
using namespace System;
using namespace System::Collections::Generic;
using namespace System::Runtime::Serialization;

using namespace System::Runtime::Serialization::Formatters;
[Serializable]
public ref class DataStorage
{
private:
	int static similarity = 80;
	int static minHeight = 100;
	int static minWidth = 100;
	bool static delWithConfirm = true;
	bool static png = true;
	bool static jpg = true;
	bool static jpeg = true;
	bool static webp = true;
	bool static tiff = true;
	static System::String^ activeDirectory = "";
	
public :
	[Serializable]
	ref struct Img {
		Img(System::String^ p, System::String^ fl, int w, int h) {
			fileName = fl;
			filePath = p;
			width = w;
			height = h;
		}
		System::String^ fileName = nullptr;
		System::String^ filePath = nullptr;
		int width = 0;
		int height = 0;
	};
	[Serializable]
	ref struct GridRow {
		GridRow(System::String^ f1, System::String^ f2, int sim) {
			fileName1 = f1;
			fileName2 = f2;
			this->sim = sim;
		}
		System::String^ fileName1 = nullptr;
		System::String^ fileName2 = nullptr;
		int sim = 0;
	};
private: static List<Img^>^ list = gcnew List<Img^>;
private:	static List<GridRow^>^ grid = gcnew List<GridRow^>;
public:
	void static SetSimilarity(int val);
	void static SetSize(int height, int width);
	void static SetDelCondition(bool d);
	int static GetSimilarity();
	int static GetMinWidth();
	int static GetMinHeight();
	bool static GetDelOption();
	void static SetExtension(bool png, bool jpg, bool jpeg, bool webp, bool tiff);
	bool static PNG();
	bool static JPG();
	bool static JPEG();
	bool static WEBP();
	bool static TIFF();
	void static SetActiveDirectory(System::String^);
	static System::String^ GetActiveDirectory();
	void static addToList(System::String^ path, System::String^ fileName, int height, int width);
	void static addGridToList(System::String^ fileName1, System::String^ fileName2, int sim);
	static System::String^ getFilePath(System::String^);
	static void GetImageSize(System::String^ p, int& h, int& w);
	static void DeleteRows(System::String^ fileName);
	static void DataStorage::FillDataGrid(System::Windows::Forms::DataGridView^ table);
	static void Save();
	static void Load();
	static void ClearListImg();
	static void ClearGrid();

};




