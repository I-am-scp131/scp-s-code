#include<stdio.h>
class p{
	int b;
}; 
struct q{
	int g;
	void func(){
		printf("你好");
	}
};
int main(){
	p t1;
	q t2;
	//t1.b=123; class成员默认私有权限 
	t2.g=123; //struct成员默认公共权限 
	t2.func(); 
	return 0;
}
