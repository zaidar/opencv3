#include <opencv2/opencv.hpp>
#include <iostream>
using namespace std;

int g_switch_value = 1;
void switch_off_function() { cout << "Pause\n"; }; 
void switch_on_function() { cout << "Run\n"; };

void switch_callback(int position, void*) {
	if (position == 0) {
		switch_off_function();
	}
	else {
		switch_on_function();
	}
}
void help() {
	cout << "Call: my.avi" << endl;
	cout << "Shows putting a pause button in a video." << endl;
}
int main(int argc, char** argv) {
	cv::Mat frame; 
	cv::VideoCapture g_capture;
	help();

	if (argc < 2 || !g_capture.open(argv[1])) {
		cout << "Failed to open " << argv[1] << " video file\n" << endl;
		return -1;
	}
	
	cv::namedWindow("Example", 1);
	
	cv::createTrackbar(
			"Switch",
			"Example",
			&g_switch_value,
			1,
			switch_callback
		);

	for (;;) {
		if (g_switch_value) {
			g_capture >> frame;
			if (frame.empty()) break;
			cv::imshow("Example", frame);
		}
		if (cv::waitKey(10) == 27) break;
	}
	return 0;
}