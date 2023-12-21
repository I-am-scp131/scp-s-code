#include<iostream>
using namespace std;
//多继承
//子类可以继承多个父类
//语法：class 子类名:继承方式 父类名1,继承方式 父类名2 
class father{
	public:
		int a;
		father(){
			a=100;
		}
}; 
class mother{
	public:
		int a;
		mother(){
			a=200;
		}
};
class son:public father,public mother{
	public:
		int c;
		son(){
			c=300;
		}
};
int main(){
	son s;
	cout<<"son-c="<<s.c<<endl;
	//通过作用域来区分
	cout<<"father-a="<<s.father::a<<endl;
	cout<<"mother-a="<<s.mother::a<<endl; 
	return 0;
}
