#include<iostream>
using namespace std;
//��ָ����ʳ�Ա��������Ҫע����û��ʹ��thisָ�� 
class Person{
	public:
		void showClassName(){
			cout<<"this is Person class"<<endl;
		} 
		void showAge(){
			if(this==NULL)
				return;
			cout<<"age="<<age<<endl;//�����൱��this->age,��thisָ����øú����Ķ��� 
		}
		int age;
};
void func(){
	Person *p=NULL;//��ʱ����Ϊ��ָ�룬ʹ��this�ǿ�ָ�� 
	p->showClassName();
	p->showAge();	
}
int main(){
	func(); 
	return 0;
}
