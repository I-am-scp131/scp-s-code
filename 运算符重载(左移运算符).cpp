#include<iostream>
using namespace std;
//运算符重载 
//重载左移运算符，实现自定义数据类型的重载 
class Person{
	public:
		int a;
		int b;
		Person(int a=0,int b=0){
			this->a=a;
			this->b=b;
		} 
		//成员函数实现(但无法实现想要的效果)
		ostream& operator<<(ostream &cout){
			cout<<"p.a="<<this->a<<endl<<"p.b="<<this->b; 
			return cout;	
		} 
};
//全局函数重载<<左移运算符号
ostream& operator<<(ostream &cout,Person &p){
	cout<<"p.a="<<p.a<<endl<<"p.b="<<p.b; 
	return cout;//返回一个cout的引用，这样可以链式编程	
} 
int main(){
	Person p(10,20);
	Person P(20,16);
	cout<<p<<endl;
	P<<cout<<endl; 
	return 0;
}
