//#include<iostream>
//#include "opencv2/highgui/highgui.hpp"
//#include "opencv2/opencv.hpp"
//using namespace cv;
//using namespace std;
//
//int main() {
//	
//	int size[] = { 10,10 };
//	cv::SparseMat sm(2, size, CV_32F);
//	for (int i = 0; i < 10; i++) {
//		int idx[2];
//		idx[0] = size[0] * rand();
//		idx[1] = size[1] * rand();
//		sm.ref<float>(idx) += 1.0f;
//	}
//
//
//	cv::SparseMatConstIterator_<float> it = sm.begin<float>();
//	cv::SparseMatConstIterator_<float> it_end = sm.end<float>();
//	for (; it != it_end; ++it) {
//		const cv::SparseMat::Node* node = it.node();
//		std::cout << node->hashval << "  ";
//		printf(" (%3d,%3d) %f\n", node->idx[0], node->idx[1], *it);
//	}
//	size_t h = sm.hash(0);
//	std::cout << h;
//	system("pause");
//
//	
//}