#include <iostream>
#include <openacc.h>
//#incluce <opencv4/opencv2/opencv.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace std;
using std::string;

int main() {
    string video_path = "videos/kitty-dancebattle.mp4";
    VideoCapture capture(video_path);

    return 0;
}
// https://youtu.be/Xp6j7m7rqBc?t=384