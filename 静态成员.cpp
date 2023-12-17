#include<iostream>
using namespace std;
/*静态成员
1.静态成员变量
	所有变量共享一份数据
	编译阶段分配内存（在全局区） 
	类内声明，类外初始化 
2.静态成员函数
	所有对象共享一个函数
	静态成员函数只能访问静态成员变量*/
class Person{
	public:
		static int a;//静态成员变量 
		int b;
		//静态成员函数 
		static void func(){
			a=10;
			//b=20;b为非静态成员变量，其不可访问 
			cout<<"静态成员函数调用"<<endl; 
		} 
	private:
		static void func2(){
			cout<<"私有函数调用"<<endl; 
		}
};
int Person::a=100;//Person作用域里初始化a (一定要有类外初始化)
void func(){
	//静态成员的两种访问方式
	//通过对象访问 
	Person p;
	p.func();
	cout<<p.a<<endl;
	//通过类名访问
	Person::func();
	cout<<Person::a<<endl; 
	/*私有静态成员同样不可访问
	Person::func2();是错误的*/ 
}
int main(){
	func();
	return 0;
}
