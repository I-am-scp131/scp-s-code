#include<stdio.h>
#define PI 3.14
//����һ���ࣨclass ����{}:�� 
class circle{
	public://����Ȩ�� 
		int r;//���� .
		//��Ϊ 
		double l(){
			return 2*PI*r;
		}
};
int main(){
	circle c1;//����һ������ 
	scanf("%d",&c1.r);
	printf("%.2f",c1.l());
	return 0;
} 
