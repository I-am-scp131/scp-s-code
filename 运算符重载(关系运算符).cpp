#include<iostream>
#include<string>
using namespace std;
//��ϵ���������
class Person{
	public:
		int age;
		string name;
		Person(string name,int age){
			this->name=name;
			this->age=age;
		}
		//������0/1������ֵ��Ҳ���ò������� 
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
	Person p1("����",18);
	Person p2("����",18);
	Person p3("����",45);
	if(p1==p2)
		cout<<"p1��p2��ȣ�"<<endl;
	if(p1!=p3)
		cout<<"p1���Ĳ���ȣ�"; 
	return 0;
}
