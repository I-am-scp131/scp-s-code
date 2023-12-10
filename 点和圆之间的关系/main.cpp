#include<iostream>
#include<stdlib.h>
#include"lei.h"
using namespace std;
int main(){
	Circle c;
	Point center;
	center.setXY(10,0);
	c.setRcenter(10,center);
	Point p;
	p.setXY(10,10);
	getRelation(c,p);
	return 0;
}
