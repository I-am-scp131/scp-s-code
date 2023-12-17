#include<iostream>
using namespace std;
/*成员变量和成员函数分开储存
只有非静态成员变量才属于类的对象*/
class empty{
	
};//空对象 
class Person{
	public:
		int A;//非静态成员变量，在类的对象上 
		static int a;//静态成员变量，不属于类的对象 
		void func(){}//非静态成员函数 ，不属于类的对象  
		static void Func(){}//静态成员函数，不属于类的对象  
};
void func(){
	empty e;
	cout<<"sizeof e="<<sizeof(e)<<endl;
	Person p;
	cout<<"sizeof p="<<sizeof(p)<<endl;
}
int main(){
	func();
	return 0;
} 
