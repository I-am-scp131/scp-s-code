#include<iostream>
#include<stdlib.h>
using namespace std;
class Point{
	int x;
	int y;
	public:
		//�������� 
		void setXY(int m_x,int m_y);
		//��ȡ����
		int* getXY();
};
class Circle{
	int r;
	Point center;
	public:
		//����Բ�ĺͰ뾶
		void setRcenter(int R,Point Center);
		//��ȡԲ��
		Point getCenter();
		//��ȡ�뾶
		int getR();
};
void getRelation(Circle &c,Point &p);
