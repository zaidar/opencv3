//#include "opencv2/opencv.hpp"
//using namespace cv;
//int main(int argc, char** argv)
//{
//	VideoCapture cap(1000);
//
//	if (!cap.open(0))
//		return 0;
//	for (;;)
//	{
//		Mat frame;
//		cap >> frame;
//		if (frame.empty()) break; 
//		
//		cvtColor(frame, frame, COLOR_BGR2GRAY);
//		
//		imshow("this is you, smile! :)", frame);
//
//		if (waitKey(10) == 27) break; 
//	}
//	return 0;
//}