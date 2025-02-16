
#include "ImagesCollection.h"
using namespace imc;
using namespace std::filesystem;
bool imc::ImagesCollection::RightSize(int &height,int &width,string path)
{
	cv::Mat image = cv::imread(path, cv::IMREAD_COLOR);
	width = image.cols;
	height = image.rows;
	if (width >= DataStorage::GetMinWidth() && height >= DataStorage::GetMinHeight())
		return true;
	return false;
}

int ImagesCollection::FindImages(string path)
{
	int heght = 0;
	int width = 0;
	for (auto& file : filesystem::directory_iterator(path)) {
		if (((file.path().extension() == ".png"  && DataStorage::PNG()==1)
			|| (file.path().extension() == ".jpg" && DataStorage::JPG() == 1)
			|| (file.path().extension() == ".jpeg" && DataStorage::JPEG() == 1)
			|| (file.path().extension() == ".webp" && DataStorage::WEBP() == 1)
			|| (file.path().extension() == ".tiff" && DataStorage::TIFF() == 1)) && RightSize(height,width,file.path().string()))
			imagesList.push_back(file.path());
	}
}
string ImagesCollection::GetPathByIndex(int index)
{
	return imagesList[index].string();
}

int imc::ImagesCollection::getSize()
{
	return imagesList.size();
}
string imc::ImagesCollection::getFileName(string path)
{
	for (int i = 0; i < imagesList.size(); i++) {
		if (path == imagesList[i].string())
			return imagesList[i].filename().string();
	}
	return "";
}



