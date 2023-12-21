#include<iostream>
using namespace std;
//运算符重载   关键字operator+ 
class Person{
	public:
		int a;
		int b;
		Person(int a=0,int b=0){
			this->a=a;
			this->b=b;
		}
		//用成员函数进行运算符重载 
		Person operator+(Person &p){
			Person temp;
			temp.a=this->a+p.a;
			temp.b=this->b+p.b;
			return temp;
		}
};
class dog{
	public:
		int a;
		int b;
		dog(int a=0,int b=0){
			this->a=a;
			this->b=b;
		}
};
//用全局函数进行运算符重载
dog operator+(dog &d1,dog &d2){
	dog temp;
	temp.a=d1.a+d2.a;
	temp.b=d1.b+d2.b;
	return temp;
} 
//运算符重载也可实现函数重载
dog operator+(dog &d1,int x){
	dog temp;
	temp.a=d1.a+x;
	temp.b=d1.b+x;
	return temp;	
}
int main(){
	Person p1(5,6);
	Person p2(9,10);
	Person p3=p1+p2;//本质Person p3=p1.operator+(p2) 
	cout<<"p3的a="<<p3.a<<endl<<"p3的b="<<p3.b<<endl; 
	
	dog d1(4,6);
	dog d2(11,5);
	dog d3=d1+d2;//本质Person p3=operator+(d1,d2)
	//运算符重载也可函数重载，下面进行类对象与整型相加
	dog d4=d3+10;
	cout<<"d4的a="<<d4.a<<endl<<"d4的b="<<d4.b<<endl;
	cout<<"d3的a="<<d3.a<<endl<<"d3的b="<<d3.b<<endl; 
	return 0;
}
