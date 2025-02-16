#include "Image.h"
using namespace img;
Picture::Picture(string path,string fileName)
{
	this->path = path;
	this->fileName = fileName;
}
img::Picture::Picture(string path, string hash,int height,int width)
{
	this->path = path;
	this->hash = hash;
	this->height = height;
	this->width = width;
}

string Picture::getPath()
{

	return this->path;
}

string Picture::getHash()
{
	return this->hash;
}

void Picture::setHash(string hash)
{
	this->hash = hash;
}

void Picture::setPath(string path)
{
	this->path = path;
}

string img::Picture::getFileName()
{
	return fileName;
}

void img::Picture::setHeight(int h)
{
	this->height = h;
}
int img::Picture::getHeight()
{
	return height;
}
int img::Picture::getWidth()
{
	return width;
}
void img::Picture::setWidth(int w)
{
	this->width = w;
}
