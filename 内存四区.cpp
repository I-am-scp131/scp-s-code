#include<iostream>
using namespace std;
/*内存四区(代码区与全局区在代码执行前的两个区域) 
1.代码区:存放二进制的机器指令(也是你写的代码)
两个特性:1)共享,即当你多次打开同个exe文件时,内存中被调用的代码只有一份
         2)只读,即exe生成后其内部代码不能改变,防止程序员意外对其进行修改
2.全局区:存放全局变量,静态变量,常量(指const修饰的全局变量即全局常量,以及字符串常量)*/
int g_a=1;//全局变量 
static int s_a=1;//静态变量 
const int c_g_a=1;//全局常量 
int main(){
	int a=1;//局部变量 
	static int s_b=1;//静态变量 
	const int c_a=1;//局部常量 
	cout<<"全局变量g_a的地址"<<int(&g_a)<<endl;
	cout<<"静态变量s_a,s_b的地址"<<int(&s_a)<<" "<<int(&s_b)<<endl;
	cout<<"全局常量c_g_a的地址"<<int(&c_g_a)<<endl;
	cout<<"局部变量a的地址"<<int(&a)<<endl; 
	cout<<"局部常量c_a的地址"<<int(&c_a)<<endl;
	cout<<"字符串'hello world'的地址"<<int(&"hello world")<<endl; 
	return 0;
}
