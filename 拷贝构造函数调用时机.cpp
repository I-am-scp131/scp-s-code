#include<iostream>
using namespace std;
/*拷贝构造函数的调用时机*/
class Person{
	public:
		Person(){
			cout<<"默认构造函数调用"<<endl; 
		}
		Person(int m_age){
			age=m_age;
			cout<<"有参构造函数调用"<<endl;
		}
		Person(const Person &p){
			age=p.age;
			cout<<"拷贝构造函数调用"<<endl; 
		}
		~Person(){
			cout<<"析构函数调用"<<endl;
		}
		int age;
}; 
//1.使用一个已创建的对象来初始化一个新对象 
void test1(){
	Person p1(10);
	Person p2(p1);
	cout<<"p2的年龄："<<p2.age<<endl; 
}
//2.值传递的方式给函数参数传值(相当于隐式转换法)
void dowork(Person p){	//相当于Person p=p,注意两个p不同哦，前者为函数形参，后者指传入函数的实参 
}
void test2(){
	Person p;
	dowork(p);
} 
//3.值方式返回局部对象
Person dowork2(){
	Person p;
	return Person(p);//编译器不同此行可能不同，可能写成return p 
}
void test3(){
	Person p=dowork2();
} 
int main(){
	test1();
	test2();
	test3();
	return 0;
}
