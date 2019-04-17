#include<opencv2/imgproc.hpp>
#include<opencv2/highgui.hpp>
#include<iostream>

using namespace std;
using namespace cv;

int main(){

    vector<Point2f> p1;
    p1.push_back(Point2f(50, 50));
    p1.push_back(Point2f(50, 50));
    p1.push_back(Point2f(50, 50));

    vector<Point2f> p2;
    p1.push_back(Point2f(50, 50));
    p1.push_back(Point2f(50, 50));
    p1.push_back(Point2f(50, 50));

    vector<Point2f> p3;
    p1.push_back(Point2f(50, 50));
    p1.push_back(Point2f(50, 50));
    p1.push_back(Point2f(50, 50));

    Mat warpMat1 = getAffineTransform(p1, p2);
    Mat warpMat2 = getAffineTransform(p1, p3);

    cout<<warpMat1<<endl;
    cout<<warpMat2<<endl;
    
    return 0;
}