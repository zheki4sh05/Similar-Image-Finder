#pragma once
#include <iostream>
#include <filesystem>
#include "DataStorage.h"
#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;
using namespace std::filesystem;
namespace imc {
	class ImagesCollection {
	private:
		vector <path> imagesList;
		int height;
		int width;
	public:
		int FindImages(string path);
		string GetPathByIndex(int index);
		int getSize();
		string getFileName(string);
		bool RightSize(int &height,int &width,string path);

	};
}


