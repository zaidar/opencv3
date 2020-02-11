//#include<iostream>
//#include "opencv2/highgui/highgui.hpp"
//#include "opencv2/opencv.hpp"
//using namespace cv;
//using namespace std;
//int main() {
//
//	Mat res = Mat::zeros(Size(210, 210), CV_8UC1);
//	int j = 0;
//	res.row(209).col(209).setTo(1);
//	size_t cols = res.cols;
//	size_t rows = res.rows;
//	for (size_t i = 10; i != 110; i += 10) {
//		for (size_t j = rows / 2; j != -1; j--) {
//			for (size_t ii = i; ii < i + 10; ii++)
//			{
//				res.col(ii).row(rows - j).setTo(i + 10);
//				res.col(cols - ii).row(j).setTo(i + 10);
//			}
//		}
//	}
//	imshow("Original", res);
//	waitKey(0);
//
//
//}