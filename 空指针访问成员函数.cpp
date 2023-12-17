#include<iostream>
using namespace std;
//空指针访问成员函数，但要注意有没有使用this指针 
class Person{
	public:
		void showClassName(){
			cout<<"this is Person class"<<endl;
		} 
		void showAge(){
			if(this==NULL)
				return;
			cout<<"age="<<age<<endl;//这里相当于this->age,而this指向调用该函数的对象 
		}
		int age;
};
void func(){
	Person *p=NULL;//此时对象为空指针，使得this是空指针 
	p->showClassName();
	p->showAge();	
}
int main(){
	func(); 
	return 0;
}
