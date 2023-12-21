#include<iostream>
using namespace std;
/*继承同名成员处理方式
1.访问子类同名成员  直接访问即可
2.访问父类同名成员  需要加作用域*/
class father{
	public:
		int a;
		static int b; 
		father(){
			a=200;
		}
		void func(){
			cout<<"father-func()调用"<<endl;
		} 
		void func(int a){
			cout<<"father-func(int "<<a<<")"<<endl;
		}
}; 
int father::b=100;
class son:public father{
	public:
		int a;
		static int b;
		son(){
			a=100;
		}
		void func(){
			cout<<"son-func()调用"<<endl;
		} 
};
int son::b=200;
int main(){
	son s;
	cout<<"son-a="<<s.a<<endl;
	//加作用域访问父类成员 
	cout<<"father-a="<<s.father::a<<endl;
	//同名函数同样加作用域进行处理 
	s.func();
	s.father::func();
	//子类中的同名函数会隐藏父类所有成员函数，包括重载的函数，故仍需通过作用于访问 
	s.father::func(100);
	//对于静态成员情况类似
	//通过对象访问静态成员 
	cout<<"通过对象访问静态成员"<<endl; 
	cout<<"son-static b="<<s.b<<endl;
	cout<<"father-static b="<<s.father::b<<endl;
	//通过类名直接访问
	cout<<"通过对象访问静态成员"<<endl; 
	cout<<"son-static b="<<son::b<<endl;
	cout<<"father-static b="<<son::father::b<<endl;//第一个::表示通过类名访问，第二个::father作用域下
	//静态成员函数同理 
	return 0;
}
