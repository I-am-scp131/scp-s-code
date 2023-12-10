#include"lei.h"

//设置坐标 
void Point::setXY(int m_x,int m_y){
	x=m_x;
	y=m_y;
} 
//获取坐标
int* Point::getXY(){
	int *arr=(int*)malloc(2*sizeof(int));
	arr[0]=x;arr[1]=y;
	return arr;
} 


//设置圆心和半径
void Circle::setRcenter(int R,Point Center){
	r=R;
	center=Center;
} 
//获取圆心
Point Circle::getCenter(){
	return center;
} 
//获取半径
int Circle::getR(){
	return r;
} 

void getRelation(Circle &c,Point &p){
	int distance=(c.getCenter().getXY()[0]-p.getXY()[0])*(c.getCenter().getXY()[0]-p.getXY()[0])+(c.getCenter().getXY()[1]-p.getXY()[1])*(c.getCenter().getXY()[1]-p.getXY()[1]);
	int	r=c.getR()*c.getR();
	if(distance<r)
		cout<<"点在圆内"<<distance<<r<<endl;
	else if(distance>r)
		cout<<"点在圆外"<<endl;
	else cout<<"点在圆上"<<endl;
} 
