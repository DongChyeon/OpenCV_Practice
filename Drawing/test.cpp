#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
using namespace cv;
using namespace std;

int main() {
	// 검정색의 720 x 480 이미지 생성
	Mat image = Mat(400, 500, CV_8UC3, Scalar(0, 0, 0));
	// CV_8UC3는 8비트 크기의 3개의 채널을 가지는 영상을 의미

	line(image, Point(100, 100), Point(300, 300), Scalar(0, 0, 255), 7);
	rectangle(image, Point(250, 30), Point(450, 200), Scalar(0, 255, 0), 5);
	circle(image, Point(100, 300), 60, Scalar(255, 0, 0), 3);
	ellipse(image, Point(300, 350), Point(100, 60), 45, 130, 270, Scalar(255, 255, 255), 5);

	imshow("이미지", image);
	waitKey(0);
	return 0;
}