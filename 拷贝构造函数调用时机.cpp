#include<iostream>
using namespace std;
/*�������캯���ĵ���ʱ��*/
class Person{
	public:
		Person(){
			cout<<"Ĭ�Ϲ��캯������"<<endl; 
		}
		Person(int m_age){
			age=m_age;
			cout<<"�вι��캯������"<<endl;
		}
		Person(const Person &p){
			age=p.age;
			cout<<"�������캯������"<<endl; 
		}
		~Person(){
			cout<<"������������"<<endl;
		}
		int age;
}; 
//1.ʹ��һ���Ѵ����Ķ�������ʼ��һ���¶��� 
void test1(){
	Person p1(10);
	Person p2(p1);
	cout<<"p2�����䣺"<<p2.age<<endl; 
}
//2.ֵ���ݵķ�ʽ������������ֵ(�൱����ʽת����)
void dowork(Person p){	//�൱��Person p=p,ע������p��ͬŶ��ǰ��Ϊ�����βΣ�����ָ���뺯����ʵ�� 
}
void test2(){
	Person p;
	dowork(p);
} 
//3.ֵ��ʽ���ؾֲ�����
Person dowork2(){
	Person p;
	return Person(p);//��������ͬ���п��ܲ�ͬ������д��return p 
}
void test3(){
	Person p=dowork2();
} 
int main(){
	test1();
	test2();
	test3();
	return 0;
}
