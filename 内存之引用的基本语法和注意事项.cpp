#include<iostream>
using namespace std;
//引用的基本语法和注意事项 
int main(){
	/*引用 即给变量起别名 
	用法 &别名=原名 */
	int a=10,c=20;
	int &b=a;//a的别名b 
	cout<<"a="<<a<<endl<<"b="<<b<<endl;
	cout<<"a的地址"<<&a<<endl<<"b的地址"<<&b<<endl;//a、b指向同一块内存，地址相同
	//注意
	//1.引用必须初始化
	//int &c;这样是错的
	//2.引用初始化后不可更改(即它只能是a的别名) 
	//&b=c;这也是错的
	b=c;//这是赋值操作，改变的是a的值 
	cout<<"a="<<a<<endl<<"b="<<b<<endl;
	return 0;
}
