#include<iostream>
using namespace std;
//深拷贝与浅拷贝
/*
浅拷贝：简单的赋值拷贝操作
深拷贝：在堆区重新申请一片空间，进行拷贝操作*/ 
class Person{
	public:
		Person(){
			cout<<"Person的无参构造函数调用"<<endl; 
		}
		Person(int m_age,int m_height){
			age=m_age;
			height=new int(m_height);//堆区开辟一片空间 
			cout<<"Person的有参构造函数调用"<<endl; 
		}
		~Person(){
			if(height!=NULL){
				delete height;//堆区数据需手动释放,p2被释放后,轮到p1被释放时,由于其指针指向同块地址,且已被释放,就会导致内存重复释放 
				height=NULL;
			}
			cout<<"Person的析构函数调用"<<endl;
		} 
		//析构函数存在问题的解决方法
		Person(const Person &p){
			age=p.age;//浅拷贝 
			//height=p.height;原先编译器的默认实现
			height=new int(*p.height);//深拷贝操作，重新开辟一片内存空间
			cout<<"Person的拷贝构造函数调用"<<endl; 
		} 
		int age;
		int *height;
}; 
void test(){
	Person p1(18,180);//栈区数据先进后出 
	Person p2(p1); //即p2先于p1被释放 
	cout<<"p1的年龄"<<p1.age<<endl<<"p1的身高"<<*p1.height<<endl;
	cout<<"p2的年龄"<<p2.age<<endl<<"p2的身高"<<*p2.height<<endl;
	 
}
int main(){
	test();
	return 0;
} 
