//#include<iostream>
//#include "opencv2/highgui/highgui.hpp"
//#include "opencv2/opencv.hpp"
//using namespace cv;
//using namespace std;
//
//int main() {
//
//	
//	Mat mat1(Size(100, 200), CV_16UC2);
//	mat1 = imread("fd2.png", IMREAD_COLOR);
//
//	Mat hue;
//	Mat hue1;
//	Mat hue2;
//
//	extractChannel(mat1, hue, 0);
//	imshow("Test1", hue);
//	cout << hue.col(0);
//	extractChannel(mat1, hue1, 1);
//	imshow("Test2", hue1);
//
//	extractChannel(mat1, hue2, 2);
//	imshow("Test3", hue2);
//
//	waitKey();
//
//}