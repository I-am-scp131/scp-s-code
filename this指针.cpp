#include<iostream>
using namespace std;
/*
thisָ��
ָ�򱻵��õĳ�Ա���������Ķ���
	thisָ����������ÿһ���Ǿ�̬��Ա������һ��ָ�룬����Ҫȥ���壬����ֱ��ʹ��
��;��1.���β������Ա����ͬ��ʱ������thisָ������
      2.����ķǾ�̬��Ա�����з��ض�����������return *this
*/
class Person{
	public:
		Person(int age){
			this->age=age;//thisָ��ָ����øù��캯���Ķ��� 
		}
		Person& addAge(Person &p){//���õķ�ʽ���أ����򽫵��ÿ������캯������ֵ 
			age+=p.age;
			return *this;
		} 
		int age;
};
void func(){
	Person p1(18);
	Person p2(18);
	//��ʽ���˼�� 
	p2.addAge(p1).addAge(p1).addAge(p1);//ÿ�η���ֵ���Ƕ����������ٵ��ó�Ա���� 
	cout<<"p1������"<<p1.age<<endl; 
	cout<<"p2������"<<p2.age<<endl; 
}
int main(){
	func();
	return 0;
} 
