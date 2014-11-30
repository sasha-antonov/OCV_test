#include <stdio.h>
#include <iostream>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/core/utility.hpp>

using namespace cv;
using namespace std;

int main(int argc, const char* argv[])
{
    Mat image;
    image = imread(argv[1], 1);

    if(!image.data)
    {
        cout <<  "Could not open or find the image" << std::endl;
        return(-1);
    }

    namedWindow("Display window", WINDOW_AUTOSIZE);
    imshow("Display window", image);

    waitKey(0);
    return(0);
}
