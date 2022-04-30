#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/imgcodecs.hpp>

using namespace std;
using namespace cv;


int main()
{
    // Loading image
    Mat image = imread("cvcv.png", IMREAD_GRAYSCALE);
    
    // Check Imag s not empty
    if(image.empty())
    {
        cerr << "Image Not Find \n";
        return 1;
    }

    // Title on Image Window
    const string window_name{"Lenna"};
    namedWindow(window_name); 

    // Showing Function
    imshow(window_name,image);
    waitKey(0); 

    return 0;

}