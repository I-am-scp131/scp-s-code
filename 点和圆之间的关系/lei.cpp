#include"lei.h"

//�������� 
void Point::setXY(int m_x,int m_y){
	x=m_x;
	y=m_y;
} 
//��ȡ����
int* Point::getXY(){
	int *arr=(int*)malloc(2*sizeof(int));
	arr[0]=x;arr[1]=y;
	return arr;
} 


//����Բ�ĺͰ뾶
void Circle::setRcenter(int R,Point Center){
	r=R;
	center=Center;
} 
//��ȡԲ��
Point Circle::getCenter(){
	return center;
} 
//��ȡ�뾶
int Circle::getR(){
	return r;
} 

void getRelation(Circle &c,Point &p){
	int distance=(c.getCenter().getXY()[0]-p.getXY()[0])*(c.getCenter().getXY()[0]-p.getXY()[0])+(c.getCenter().getXY()[1]-p.getXY()[1])*(c.getCenter().getXY()[1]-p.getXY()[1]);
	int	r=c.getR()*c.getR();
	if(distance<r)
		cout<<"����Բ��"<<distance<<r<<endl;
	else if(distance>r)
		cout<<"����Բ��"<<endl;
	else cout<<"����Բ��"<<endl;
} 
