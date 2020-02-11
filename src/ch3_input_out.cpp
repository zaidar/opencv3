//#include<iostream>
//#include "opencv2/highgui/highgui.hpp"
//#include "opencv2/opencv.hpp"
//using namespace cv;
//using namespace std;
//int main() {
//
//
//	int fontFace = FONT_HERSHEY_SCRIPT_SIMPLEX;
//	double fontScale = 2;
//	int thickness = 3;
//
//	Mat img(600, 800, CV_8UC3, Scalar::all(0));
//
//	int baseline = 0;
//	Size textSize(10, 20);
//	baseline += thickness;
//
//	Point textOrg(0,
//		(img.rows + textSize.height) / 2);
//	string str = "";
//	char c = ' ';
//
//	while (c != 27) {
//		c = (char)waitKey();
//		if (c == 8) {
//			str.pop_back();
//			cout << c;
//		}
//		else {
//			str.push_back(c);
//			cout << c;
//		}
//		img = Scalar::all(0);
//		putText(img, str, textOrg, fontFace, fontScale,
//			Scalar(120, 0, 255), thickness, 8);
//		imshow("Test", img);
//		waitKey(1);
//	}
//
//}