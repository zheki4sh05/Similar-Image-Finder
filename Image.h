#pragma once
#include <string>
using namespace std;
namespace img{
	class Picture
	{
	private:
		std::string path;
		std::string hash;
		std::string fileName;
		int height = 0;
		int width = 0;
	public:
		Picture(string path,string fileName);
		Picture(string path,string hash,int height,int width);
		string getPath();
		string getHash();
		string getFileName();
		void setHash(string hash);
		void setPath(string path);
		void setHeight(int h);
		void setWidth(int h);
		int getHeight();
		int getWidth();
	};
}


