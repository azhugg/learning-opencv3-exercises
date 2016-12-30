#include <opencv2/opencv.hpp>

int main(int argc, char **argv) {
  cv::Mat img_rgb, img_gry, img_cny;

  auto windowGray = "Example Gray";
  auto windowCanny = "Example Canny";

  cv::namedWindow(windowGray, cv::WINDOW_AUTOSIZE);
  cv::namedWindow(windowCanny, cv::WINDOW_AUTOSIZE);

  img_rgb = cv::imread(argv[1]);

  cv::cvtColor(img_rgb, img_gry, cv::COLOR_BGR2GRAY);
  cv::imshow(windowGray, img_gry);

  cv::Canny(img_gry, img_cny, 10, 100, 3, true);
  cv::imshow(windowCanny, img_cny);

  cv::waitKey(0);
}