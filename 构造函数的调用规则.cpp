#include<iostream>
using namespace std;
//构造函数的调用规则
/*
c++中若不写构造函数，编译器会自动提供
1.默认构造函数（无参，空实现）
2.默认析构函数（无参，空实现）
3.默认拷贝构造函数（值拷贝）
若用户定义了有参构造函数，则编译器不提供无参构造，但提供拷贝构造函数
若用户定义了拷贝构造函数，则编译器不提供其他任何普通构造函数*/
class Person1{
	public:
		int age;
}; 
class Person2{
	public:
		Person2(int m_age){
			cout<<"有参构造函数调用"<<endl;
			age=m_age; 
		}
		~Person2(){
			cout<<"析构函数调用"<<endl; 
		}
		int age;
}; 
class Person3{
	public:
		Person3(const Person3 &p){
			cout<<"拷贝函数调用"<<endl;
			age=p.age;
		}
		~Person3(){
			cout<<"析构函数调用"<<endl;
		}
		int age;
};
void test(){
	Person1 p1;
	p1.age=18;
	Person1 p2(p1);
	cout<<"p2的年龄"<<p2.age<<endl;
	
	//Person2 p3;×定义了有参构造，编译器不再提供无参构造 
	Person2 p3(18);
	Person2 p4(p3);//编译器仍提供默认拷贝构造 
	cout<<"p4的年龄"<<p4.age<<endl; 
	
	//Person3 p;×用户定义了拷贝构造，编译器不再提供普通构造 
	
}
int main(){
	test(); 
	return 0;	
}
