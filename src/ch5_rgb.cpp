//#include<iostream>
//#include "opencv2/highgui/highgui.hpp"
//#include "opencv2/opencv.hpp"
//using namespace cv;
//using namespace std;
//
//int main() {
//
//
//
//	Mat res;
//	res = imread("s-l1600.jpg", IMREAD_COLOR); 
//
//	if (!res.data){
//		cout << "Could not open or find the image" << std::endl;
//		return -1;
//	}
//
//
//	namedWindow("Original Image", WINDOW_AUTOSIZE);
//	imshow("Original Image", res);
//	Mat g = Mat::zeros(Size(res.cols, res.rows), CV_8UC1);
//	Mat fin;
//	Mat rgbchannel[3];
//	split(res, rgbchannel);
//	vector<Mat> sp;
//
//	sp.push_back(rgbchannel[0]);
//	sp.push_back(g);
//	sp.push_back(g);
//	merge(sp, fin);
//	sp.clear();
//	imshow("Blue", fin);
//	fin = Scalar(0, 0, 0);
//
//	sp.push_back(g);
//	sp.push_back(rgbchannel[0]);
//	sp.push_back(g);
//	merge(sp, fin);
//	sp.clear();
//	imshow("Green", fin);
//	fin = Scalar(0, 0, 0);
//
//	sp.push_back(g);
//	sp.push_back(g);
//	sp.push_back(rgbchannel[0]);
//	merge(sp, fin);
//	sp.clear();
//	imshow("Red", fin);
//	fin = Scalar(0, 0, 0);
//
//
//	imshow("Original", res);
//	waitKey(0);
//
//}