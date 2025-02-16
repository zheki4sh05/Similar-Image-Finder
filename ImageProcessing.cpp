#include "Image.h"
#include "ImageProcessing.h"
using namespace img;
using namespace std;
using namespace imp;
void ImageProcessing::CalcImageHash(img::Picture& img)
{
    Mat image = imread(img.getPath(), 1);
    if (image.empty()) {
        return ;
    }
    img.setHeight(image.size().height);
    img.setWidth(image.size().width);
    Mat resized;
    Mat grayColor;
    resize(image, resized, Size(size, size), 0, 0, INTER_AREA);
    cvtColor(resized, grayColor, COLOR_BGR2GRAY, 1);
    double avg = mean(grayColor)[0];
    Mat threshold_image;
    threshold(grayColor, threshold_image, avg, 255, 0); // Бинаризация по порогу
    string hash = "";
    int count = 0;
    for (int x = 0; x < size; x++)
    {

        for (int y = 0; y < size; y++)
        {
            count++;
            int val = threshold_image.at<uchar>(x, y);
            if (val == 255)
            {
                hash += "1";
            }
            else
            {
                hash += "0";
            }
        }
    }
   
    img.setHash(hash);
}

int ImageProcessing::CalcSimularity(string hash1, string hash2)
{
    int hashLength = size * size;
    int dist = HammingDistance(hash1, hash2);
    return  dist * 100 / hashLength;
}

int ImageProcessing::HammingDistance(string hash1, string hash2)
{
    int dist = 0;
    if (hash1.length() != hash2.length()) {
        return -1;
    }
    else {
        for (int i = 0; i < hash1.length(); i++) {
            if (hash1[i] == hash2[i])
                dist++;
        }
    }

    return dist;
}

