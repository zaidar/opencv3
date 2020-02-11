//#include<iostream>
//#include "opencv2/highgui/highgui.hpp"
//#include "opencv2/opencv.hpp"
//using namespace cv;
//using namespace std;
//
//
//void my_mouse_callback(
//	int event, int x, int y, int flags, void* param
//);
//Rect box;
//bool drawing_box = false;
//
//void draw_box( Mat& img,  Rect box) {
//	 rectangle(
//		img,
//		box.tl(),
//		box.br(),
//		 Scalar(0x00, 0x00, 0xff) /* red */
//	);
//}
//void help() {
//	std::cout << "Call: ./ch4_ex4_1\n" <<
//		" shows how to use a mouse to draw regions in an image." << std::endl;
//}
//int main(int argc, char** argv) {
//	help();
//	box =  Rect(-1, -1, 0, 0);
//	 Mat image(200, 200, CV_8UC3), temp;
//	image.copyTo(temp);
//	box =  Rect(-1, -1, 0, 0);
//	image =  Scalar::all(0);
//	 namedWindow("Box Example");
//
//
//		 setMouseCallback(
//			"Box Example",
//			my_mouse_callback,
//			(void*)&image
//		);
//
//
//	for (;;) {
//		image.copyTo(temp);
//		if (drawing_box) draw_box(temp, box);
//		 imshow("Box Example", temp);
//		if ( waitKey(15) == 27) break;
//	}
//	return 0;
//}
//
//void my_mouse_callback(
//	int event, int x, int y, int flags, void* param
//) {
//	 Mat& image = *( Mat*) param;
//	switch (event) {
//	case  EVENT_MOUSEMOVE: {
//		if (drawing_box) {
//			box.width = x - box.x;
//			box.height = y - box.y;
//		}
//	}
//							  break;
//	case  EVENT_LBUTTONDOWN: {
//								  drawing_box = true;
//								  box =  Rect(x, y, 0, 0);
//							  }
//							  break;
//	case  EVENT_LBUTTONUP: {
//		drawing_box = false;
//		if (box.width < 0) {
//			box.x += box.width;
//			box.width *= -1;
//		}
//		if (box.height < 0) {
//			box.y += box.height;
//			box.height *= -1;
//		}
//		draw_box(image, box);
//	}
//							  break;
//	}
//}