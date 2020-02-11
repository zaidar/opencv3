//#include<iostream>
//#include "opencv2/highgui/highgui.hpp"
//#include "opencv2/opencv.hpp"
//using namespace cv;
//using namespace std;
//int main() {
//
//	Mat mat1(Size(100, 200), CV_16UC1);
//	for (size_t i = 0; i < mat1.rows; i++)
//		for (size_t j = 0; j < mat1.cols; j++) {
//			mat1.row(i).col(j) = rand();
//		}
//
//	Mat mat2 = Mat::zeros(Size(mat1.size().width + 1, mat1.size().height + 1), CV_32SC1);
//
//	cv::integral(mat1, mat2);
//
//	imshow("Test", mat1);
//	waitKey();
//}