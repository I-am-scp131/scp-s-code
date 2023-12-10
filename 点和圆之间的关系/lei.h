#include<iostream>
#include<stdlib.h>
using namespace std;
class Point{
	int x;
	int y;
	public:
		//设置坐标 
		void setXY(int m_x,int m_y);
		//获取坐标
		int* getXY();
};
class Circle{
	int r;
	Point center;
	public:
		//设置圆心和半径
		void setRcenter(int R,Point Center);
		//获取圆心
		Point getCenter();
		//获取半径
		int getR();
};
void getRelation(Circle &c,Point &p);
