#include<iostream>
using namespace std;
/*类对象作为类成员
1.当其它类对象作为本类成员时，先构造类对象，再构造自身
2.析构函数与之相反，符合先进后出的原则*/
class A{
	public:
		A(){
			cout<<"A的默认构造函数调用"<<endl;
		} 
		~A(){
			cout<<"A的析构函数调用"<<endl; 
		}
};
class B{
	public:
		A a;
		B(){
			cout<<"B的默认构造函数调用"<<endl;
		}
		~B(){
			cout<<"B的析构函数调用"<<endl; 
		}
};
void func(){
	B b;
}
int main(){
	func();
	return 0;
}
