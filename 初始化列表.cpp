#include<iostream>
using namespace std;
/*初始化列表
语法：构造函数：成员1(参数1),成员2(参数2),成员3(参数3){}*/
class Person{
	public:
		int A;
		int B;
		int C;
		Person(int a,int b,int c):A(a),B(b),C(c){
			cout<<"Person的有参构造函数调用."<<endl; 
		}
};
void func(){
	Person p(10,20,30);
	cout<<"A="<<p.A<<endl;
	cout<<"B="<<p.B<<endl;
	cout<<"C="<<p.C<<endl;
}
int main(){
	func();
	return 0;
}
