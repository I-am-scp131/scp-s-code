#include<iostream>
using namespace std;
/*栈区:由编译器自动分配释放,存放函数的参数,局部变量
注意:不要返回局部变量的地址,栈区开辟的数据在程序结束时由编译器自动释放*/
int* func1(){
	int a=1;
	cout<<"a的地址"<<int(&a)<<endl; 
	return &a;//在这之前a已经被释放 
} 
/*堆区:由程序员开辟释放,若程序员不释放,则在程序结束时有操作系统回收
用new关键字在堆区开辟内存*/
int* func2(){
	int *p=new int(10);//指针是栈区的局部变量,但其指向的数据存放在堆区 
	return p;
}
int main(){
    int *p1=func1();
    int *p2=func2();
	cout<<"p2指向的数据"<<*p2<<endl;
    cout<<"p1指向的数据"<<*p1<<endl;//p1变成了野指针 
    
	return 0;
}
