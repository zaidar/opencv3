//#include<iostream>
//#include "opencv2/opencv.hpp"
//using namespace cv;
//
//static int y11, x11;
//Mat frame;
//Mat combined(frame.size().width * 2,
//	frame.size().height * 2,
//	CV_16FC3);
//Mat lines;
//void CallBackFunc(int event, int x, int y, int flags, void* userdata)
//{
//	if (event == EVENT_LBUTTONDOWN)
//	{
//		if (x11 && y11) {
//		
//			std::cout << "Left button of the mouse is clicked - position (" << x << ", " << y << ")" << std::endl;
//			line(lines, cv::Point(x11, y11), Point(x, y), Scalar(255), 2, 8, 0);
//		}
//		x11 = x; y11 = y;
//
//	}
//	else if (event == EVENT_RBUTTONDOWN)
//	{
//		std::cout << "Right button of the mouse is clicked - position (" << x << ", " << y << ")" << std::endl;
//	}
//	
//}
//
//int main(int argc, char** argv)
//{
//	VideoCapture cap(1000);
//	if (!cap.open(0))
//		return 0;
//	
//	Mat dst, detected_edges;
//	int lowThreshold = 0;
//	const int max_lowThreshold = 100;
//	const int ratio = 2;
//	const int kernel_size = 5;
//	
//	namedWindow("Wind", 1);
//	setMouseCallback("Wind", CallBackFunc, NULL);
//
//	for (;;)
//	{
//		
//
//		cap >> frame;
//		Mat frame1(frame);
//		Mat frame2(frame);
//
//		if (frame.empty()) break; 
//		if (lines.empty()) lines = Mat::zeros(frame.size(), frame.type());
//
//		hconcat(frame, frame, frame1);
//		hconcat(frame, frame, frame2);
//
//
//		vconcat(frame1, frame2,combined);
//		
//		resize(combined, combined, 
//			cv::Size(combined.cols * 0.5, combined.rows * 0.5), 0, 0, INTER_LINEAR);
//		
//
//
//		imshow("Wind", lines + combined);
//
//		if (waitKey(10) == 27) break; 
//	}
//	return 0;
//}