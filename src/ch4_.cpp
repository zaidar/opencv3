//#include<iostream>
//#include "opencv2/highgui/highgui.hpp"
//#include "opencv2/opencv.hpp"
//using namespace cv;
//using namespace std;
//
//int main() {
//
//	int sz[3] = { 4, 4, 4 };
//	cv::Mat m(3, sz, CV_32FC3); 
//	cv::randu(m, -1.0f, 1.0f); 
//	Vec3f max = 0.0f;
//	
//	
//	MatConstIterator_ <Vec3f>it = m.begin<Vec3f>();
//	Vec3f len2;
//
//	while (it != m.end<Vec3f>()) {
//		len2 = it[0] * it[0] + it[1] * it[1] + it[2] * it[2];
//		if (len2[0]  > max[0]&& 
//			len2[1] >  max[1]&& 
//			len2[2] >  max[2]) 
//			max = len2;
//
//		it++;
//	}
//	cout << max;
//
//	system("pause>nul");
//}
