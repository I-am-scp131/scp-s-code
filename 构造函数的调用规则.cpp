#include<iostream>
using namespace std;
//���캯���ĵ��ù���
/*
c++������д���캯�������������Զ��ṩ
1.Ĭ�Ϲ��캯�����޲Σ���ʵ�֣�
2.Ĭ�������������޲Σ���ʵ�֣�
3.Ĭ�Ͽ������캯����ֵ������
���û��������вι��캯��������������ṩ�޲ι��죬���ṩ�������캯��
���û������˿������캯��������������ṩ�����κ���ͨ���캯��*/
class Person1{
	public:
		int age;
}; 
class Person2{
	public:
		Person2(int m_age){
			cout<<"�вι��캯������"<<endl;
			age=m_age; 
		}
		~Person2(){
			cout<<"������������"<<endl; 
		}
		int age;
}; 
class Person3{
	public:
		Person3(const Person3 &p){
			cout<<"������������"<<endl;
			age=p.age;
		}
		~Person3(){
			cout<<"������������"<<endl;
		}
		int age;
};
void test(){
	Person1 p1;
	p1.age=18;
	Person1 p2(p1);
	cout<<"p2������"<<p2.age<<endl;
	
	//Person2 p3;���������вι��죬�����������ṩ�޲ι��� 
	Person2 p3(18);
	Person2 p4(p3);//���������ṩĬ�Ͽ������� 
	cout<<"p4������"<<p4.age<<endl; 
	
	//Person3 p;���û������˿������죬�����������ṩ��ͨ���� 
	
}
int main(){
	test(); 
	return 0;	
}
