#include<stdio.h>
#define PI 3.14
//创建一个类（class 类名{}:） 
class circle{
	public://访问权限 
		int r;//属性 .
		//行为 
		double l(){
			return 2*PI*r;
		}
};
int main(){
	circle c1;//创建一个对象 
	scanf("%d",&c1.r);
	printf("%.2f",c1.l());
	return 0;
} 
