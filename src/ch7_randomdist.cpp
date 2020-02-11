//#include<iostream>
//#include "opencv2/highgui/highgui.hpp"
//#include "opencv2/opencv.hpp"
//using namespace cv;
//using namespace std;
//int main() {
//	RNG rng;
//	/*cout << "uniform dist: ";
//	cout << rng.uniform(0.0, 1.0) << " ";
//	cout << rng.uniform(0.0, 1.0) << " ";
//	cout << rng.uniform(0.0, 1.0) << " ";
//	
//	cout <<endl<< "gaussian dist: ";
//	cout << rng.gaussian(1.0) << " ";
//	cout << rng.gaussian(1.0) << " ";
//	cout << rng.gaussian(1.0) << " ";
//	*/
//	cout <<endl<< "uniformdist: ";
//	
//	int arr[3];
//	arr[0] = rng.uniform(0, 255);
//	arr[1] = rng.uniform(0, 255);
//	arr[2] = rng.uniform(0, 255);
//	
//
//	Mat matrx(500, 500, CV_32F);
//	
//
//	rng.fill(matrx, cv::RNG::UNIFORM, Scalar(0), Scalar(120));
//	
//	imshow("Original", matrx);
//	waitKey(0);
//	//cout << matrx;
//
//}