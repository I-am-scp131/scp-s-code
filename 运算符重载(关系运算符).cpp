#include<iostream>
#include<string>
using namespace std;
//关系运算符重载
class Person{
	public:
		int age;
		string name;
		Person(string name,int age){
			this->name=name;
			this->age=age;
		}
		//可以用0/1做返回值，也可用布尔类型 
		int operator==(Person &p){
			if(name==p.name&&age==p.age)
				return 1;
			return 0;
		}
		bool operator!=(Person &p){
			if(name!=p.name&&age!=p.age)
				return true;
			return false;
		} 
}; 
int main(){
	Person p1("张三",18);
	Person p2("张三",18);
	Person p3("李四",45);
	if(p1==p2)
		cout<<"p1与p2相等！"<<endl;
	if(p1!=p3)
		cout<<"p1与拍不相等！"; 
	return 0;
}
