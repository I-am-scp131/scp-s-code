#include<stdio.h>
class p{
	int b;
}; 
struct q{
	int g;
	void func(){
		printf("���");
	}
};
int main(){
	p t1;
	q t2;
	//t1.b=123; class��ԱĬ��˽��Ȩ�� 
	t2.g=123; //struct��ԱĬ�Ϲ���Ȩ�� 
	t2.func(); 
	return 0;
}
