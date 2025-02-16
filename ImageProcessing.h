#pragma once
#include <iostream>
#include "opencv2/imgproc.hpp"
#include "opencv2/imgcodecs.hpp"
#include "Image.h"
using namespace std;
using namespace cv;
namespace imp {
    class ImageProcessing
    {
    public:
        void CalcImageHash(img::Picture& img);
        int CalcSimularity(string hash1, string hash2);
    private: 
        int HammingDistance(string hash1, string hash2);
           int size = 10;
    };
}


