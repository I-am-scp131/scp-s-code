#include<iostream>
using namespace std;
//赋值运算符重载
/*c++编译器会提供4个默认函数
1.默认构造函数2.默认析构函数3.默认拷贝构造函数4.operator=函数用于拷贝赋值操作*/
class Person{
	public:
		int *age;
		Person(int age){
			this->age=new int(age);
		}
		//析构函数浅拷贝下可能会重复释放内存，对某些编译器会出问题 
		~Person(){
			if(age!=NULL){
				delete age;
				age=NULL;
			}
		}
		//因此，重载赋值运算符
		Person& operator=(Person &p){
			//age=p.age;浅拷贝
			//先判断是否有堆区内存，并释放
			if(age!=NULL){
				delete age;
				age=NULL;
			} 
			//重新在堆区上开辟空间
			age=new int(*p.age);
			return *this;//确保可以实现链式编程 
		} 
}; 
int main(){
	Person p1(18);
	Person p2(20);
	Person p3(30); 
	cout<<"p1的年龄："<<*p1.age<<endl<<"p2的年龄："<<*p2.age<<endl<<"p3的年龄："<<*p3.age<<endl;
	p3=p2=p1;
	cout<<"p1的年龄："<<*p1.age<<endl<<"p2的年龄："<<*p2.age<<endl<<"p3的年龄："<<*p3.age;
	return 0;
}
