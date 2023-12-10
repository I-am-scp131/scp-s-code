#include<iostream>
using namespace std;
//对象的初始化与清理（构造函数与析构函数）
class Person{
	public: 
		/*构造函数
		1.无返回值，也不用些void
		2.函数名与类名相同
		3.可以有参数，所以也有函数重载
		4.编译器在创建对象时会自动调用，且只调一次，若不写该函数，编译器会自动生成空实现的构造函数*/
		Person(){
			cout<<"对象初始化成功"<<endl; 
		}
		/*析构函数
		1.无返回值，也不用些void
		2.函数名即在类名前加~
		3.不可以有参数,所以也没有函数重载
		4.编译器在对象销毁前会自动调用一次,若不写该函数,则由编译器自动生成空实现的析构函数*/
		~Person(){
			cout<<"对象释放完成"<<endl; 
		} 
}; 
void func(){
	Person p;//在栈上的数据,func执行完后,释放该对象 
}
int main(){
	func();
	Person p;//此处的对象创建时编译器调用构造函数,然后知道程序结束前才调用析构函数 
	system("pause"); //即此语句结束后执行析构函数 
	return 0;
}
