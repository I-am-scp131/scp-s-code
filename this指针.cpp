#include<iostream>
using namespace std;
/*
this指针
指向被调用的成员函数所属的对象
	this指针是隐含在每一个非静态成员函数的一种指针，不需要去定义，可以直接使用
用途：1.当形参名与成员变量同名时，可用this指针区分
      2.在类的非静态成员函数中返回对象本身，可以用return *this
*/
class Person{
	public:
		Person(int age){
			this->age=age;//this指针指向调用该构造函数的对象 
		}
		Person& addAge(Person &p){//引用的方式返回，否则将调用拷贝构造函数返回值 
			age+=p.age;
			return *this;
		} 
		int age;
};
void func(){
	Person p1(18);
	Person p2(18);
	//链式编程思想 
	p2.addAge(p1).addAge(p1).addAge(p1);//每次返回值都是对象本身，可以再调用成员函数 
	cout<<"p1的年龄"<<p1.age<<endl; 
	cout<<"p2的年龄"<<p2.age<<endl; 
}
int main(){
	func();
	return 0;
} 
