#include<iostream>
/*引用做函数参数和函数返回值*/
using namespace std;
//引用做函数参数 
void func1(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
} 
//引用做函数返回值 
int& func2(){
	//int a=10;在栈区上函数结束时被释放，不可返回其引用
	static int a=10;//静态变量，在全局区，直到程序结束才被释放 
	return a; 
} 
int main(){
	int a=10,b=20;
	int &ref=func2(); 
	func1(a,b);
	cout<<"a="<<a<<endl<<"b="<<b<<endl;
	cout<<"ref="<<ref<<endl; 
	//函数返回值时引用时可以做左值
	func2()=100;
	cout<<"ref="<<ref<<endl;
	return 0;
}
