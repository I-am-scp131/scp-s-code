#include<stdio.h>
#define PI 3.14
class circle{
	public:
		int r;
		double l(){
			return 2*PI*r;
		}
};
int main(){
	circle c1;
	scanf("%d",&c1.r);
	printf("%.2f",c1.l());
	return 0;
} 
