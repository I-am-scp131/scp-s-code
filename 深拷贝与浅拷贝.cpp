#include<iostream>
using namespace std;
//�����ǳ����
/*
ǳ�������򵥵ĸ�ֵ��������
������ڶ�����������һƬ�ռ䣬���п�������*/ 
class Person{
	public:
		Person(){
			cout<<"Person���޲ι��캯������"<<endl; 
		}
		Person(int m_age,int m_height){
			age=m_age;
			height=new int(m_height);//��������һƬ�ռ� 
			cout<<"Person���вι��캯������"<<endl; 
		}
		~Person(){
			if(height!=NULL){
				delete height;//�����������ֶ��ͷ�,p2���ͷź�,�ֵ�p1���ͷ�ʱ,������ָ��ָ��ͬ���ַ,���ѱ��ͷ�,�ͻᵼ���ڴ��ظ��ͷ� 
				height=NULL;
			}
			cout<<"Person��������������"<<endl;
		} 
		//����������������Ľ������
		Person(const Person &p){
			age=p.age;//ǳ���� 
			//height=p.height;ԭ�ȱ�������Ĭ��ʵ��
			height=new int(*p.height);//������������¿���һƬ�ڴ�ռ�
			cout<<"Person�Ŀ������캯������"<<endl; 
		} 
		int age;
		int *height;
}; 
void test(){
	Person p1(18,180);//ջ�������Ƚ���� 
	Person p2(p1); //��p2����p1���ͷ� 
	cout<<"p1������"<<p1.age<<endl<<"p1�����"<<*p1.height<<endl;
	cout<<"p2������"<<p2.age<<endl<<"p2�����"<<*p2.height<<endl;
	 
}
int main(){
	test();
	return 0;
} 
