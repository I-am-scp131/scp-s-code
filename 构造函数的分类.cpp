#include<iostream>
using namespace std;
/*构造函数分类
1.按参数分类 有参和无参构造 无参构造又称默认构造函数
2.按照类型分类 普通构造和拷贝构造 
*/
class Person{
	public:
		//无参构造(默认构造) 
		Person(){
			cout<<"无参构造函数"<<endl; 
		}
		//有参构造 
		Person(int a){
			age=a;
			cout<<"有参构造函数"<<endl; 
		}
		//以上都属于普通构造
		//拷贝构造
		Person(const Person &p){
			age=p.age;
			cout<<"拷贝构造函数"<<endl; 
		} 
		//析构函数
		~Person(){
			cout<<"析构函数"<<endl; 
		} 
		int age;	
};
void func(){
	//构造函数调用方法
	//1.括号法
	Person p1;//调用无参构造函数 
	Person p2(10);//调用有参构造函数 
	Person p3(p2);//调用拷贝构造函数 
	cout<<"p2的年龄："<<p2.age<<endl;
	cout<<"p3的年龄："<<p3.age<<endl;
	//注意  Person p1();会被当成函数声明 
	//2.显示法
	Person p4;
	Person p5=Person(10);//调用有参构造函数
	Person p6=Person(p5);//调用拷贝构造函数
	//特殊 匿名对象 
	Person(10);//本行执行完即被清理
	//注意 不要用拷贝函数初始化匿名对象
	//Person(p6)会被当作Person p6
	//3.隐式转换法
	Person p7=10;
	Person p8=p7;//调用拷贝构造 
} 
int main(){
	func();
	return 0;
}
