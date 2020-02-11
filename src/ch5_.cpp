//#include<iostream>
//#include "opencv2/highgui/highgui.hpp"
//#include "opencv2/opencv.hpp"
//using namespace cv;
//using namespace std;
//int main() {
//	Mat test = imread("fd.png");
//	Mat matGray;
//	Mat mat3;
//	Mat mat4;
//
//	Rect roi;
//	roi.x = 400;
//	roi.y = 400;
//	roi.width = test.size().width - (650 * 2);
//	roi.height = test.size().height - (400 * 2);
//	test = test(roi);
//
//	cvtColor(test, matGray, COLOR_BGR2GRAY);
//	cvtColor(matGray, matGray, COLOR_GRAY2BGR);
//	cvtColor(test, mat3, COLOR_BGR2HLS);
//	cvtColor(test, mat4, COLOR_HLS2RGB);
//
//
//	Mat res(test.size().height * 2, test.size().width * 2, CV_8UC3);
//	Mat left_roi(res, Rect(0, 0, test.size().width, test.size().height));
//	test.copyTo(left_roi);
//	Mat right_roi(res, Rect(test.size().width, 0, test.size().width, test.size().height));
//	matGray.copyTo(right_roi);
//
//	Mat left_bottom_roi(res, Rect(0, test.size().height, test.size().width, test.size().height));
//	mat3.copyTo(left_bottom_roi);
//	Mat right_bottom_roi(res, Rect(test.size().width, test.size().height, test.size().width, test.size().height));
//	mat4.copyTo(right_bottom_roi);
//
//	imshow("Result", res);
//	waitKey(0);
//
//}
//
//
//
