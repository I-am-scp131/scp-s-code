#include<iostream>
using namespace std;
/*������
	��Ա�������const���ͳƸú���Ϊ������
	�������ڲ����޸ĳ�Ա����
	��Ա��������ʱ����mutable,��ô������Ҳ���޸�
  ������
  	��������ǰ����const����ö���Ϊ������
	������ֻ�ܵ��ó�����*/
class Person{
	public:
		void func() const{
			//A=100;�൱��this->A,��this������Person *const this,ָ�򲻿��޸ġ��˴��൱�ڣ�const Person *const this����ֵҲ�����޸�
			B=100;
		} 
		void func2(){
		}
		Person(int b=0){
			B=b;
		}
		int A;
		mutable int B; //֮�󳣺����Ϳ����޸��� 
};
void func(){
	const Person p;
	cout<<"B="<<p.B<<endl; 
	p.func();
	cout<<"B="<<p.B<<endl;
	//p.func2();������ֻ�ܵ��ó����� 

} 
int main(){
	func(); 
	return 0;
}
