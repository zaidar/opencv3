//#include "opencv2/opencv.hpp"
//using namespace cv;
//int main(int argc, char** argv)
//{
//	VideoCapture cap(1000);
//
//	if (!cap.open(0))
//		return 0;
//
//	for (;;)
//	{
//		Mat frame;
//		Mat combined(frame.size().width * 2,
//			frame.size().height * 2,
//			CV_16FC3);
//
//		cap >> frame;
//		Mat frame1(frame);
//		Mat frame2(frame);
//		if (frame.empty()) break; 
//
//		hconcat(frame, frame, frame1);
//		hconcat(frame, frame, frame2);
//
//
//		vconcat(frame1, frame2, combined);
//		
//		resize(combined, combined, 
//			cv::Size(combined.cols * 0.5, combined.rows * 0.5), 0, 0, INTER_LINEAR);
//		
//		imshow("this is you, smile! :)", combined);
//
//		if (waitKey(10) == 27) break; 
//	}
//	return 0;
//}