#include<iostream>
using namespace std;
/*��ʼ���б�
�﷨�����캯������Ա1(����1),��Ա2(����2),��Ա3(����3){}*/
class Person{
	public:
		int A;
		int B;
		int C;
		Person(int a,int b,int c):A(a),B(b),C(c){
			cout<<"Person���вι��캯������."<<endl; 
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
