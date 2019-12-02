#ifndef ALGORITHM_H
#define ALGORITHM_H

#include<vector>
using namespace std;

const double PI=3.1415926535;

class PixelSet;
class Point;

//画一条直线-DDA算法
void drawLine_DDA(int x1,int y1,int x2,int y2, PixelSet& myset);
//画一条直线-Bresenham算法
void drawLine_Bresenham(int x1,int y1,int x2,int y2, PixelSet& myset);

//画多边形-DDA算法
void drawPolygon_DDA(const vector<Point>& vertexs, PixelSet& myset);
//画多边形-Bresenham算法
void drawPolygon_Bresenham(const vector<Point> &vertexs, PixelSet& myset);

//画椭圆-中点椭圆生成算法
void drawEllipse(int x,int y,int rx,int ry, PixelSet& myset);


//将某个点(x,y)绕(xr,yr)旋转r°角
void rotatePoint(int &x,int &y,int xr,int xy,int r);

//将某个点(x,y)以(sx,sy)为中心按s的比例缩放
void scalePoint(int &x,int &y,int sx,int sy,float s);

//裁剪
//Cohen-Sutherland算法
void Cohen_Sutherland(int &x1, int &y1, int &x2, int &y2, int xmin, int ymin, int xmax, int ymax);
//Liang-Barsky算法
bool Liang_Barsky(int &x1, int &y1, int &x2, int &y2, int xmin, int ymin, int xmax, int ymax);

#endif // ALGORITHM_H