#include<iostream>
using namespace std;
//��ֵ���������
/*c++���������ṩ4��Ĭ�Ϻ���
1.Ĭ�Ϲ��캯��2.Ĭ����������3.Ĭ�Ͽ������캯��4.operator=�������ڿ�����ֵ����*/
class Person{
	public:
		int *age;
		Person(int age){
			this->age=new int(age);
		}
		//��������ǳ�����¿��ܻ��ظ��ͷ��ڴ棬��ĳЩ������������� 
		~Person(){
			if(age!=NULL){
				delete age;
				age=NULL;
			}
		}
		//��ˣ����ظ�ֵ�����
		Person& operator=(Person &p){
			//age=p.age;ǳ����
			//���ж��Ƿ��ж����ڴ棬���ͷ�
			if(age!=NULL){
				delete age;
				age=NULL;
			} 
			//�����ڶ����Ͽ��ٿռ�
			age=new int(*p.age);
			return *this;//ȷ������ʵ����ʽ��� 
		} 
}; 
int main(){
	Person p1(18);
	Person p2(20);
	Person p3(30); 
	cout<<"p1�����䣺"<<*p1.age<<endl<<"p2�����䣺"<<*p2.age<<endl<<"p3�����䣺"<<*p3.age<<endl;
	p3=p2=p1;
	cout<<"p1�����䣺"<<*p1.age<<endl<<"p2�����䣺"<<*p2.age<<endl<<"p3�����䣺"<<*p3.age;
	return 0;
}
