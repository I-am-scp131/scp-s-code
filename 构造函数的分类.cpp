#include<iostream>
using namespace std;
/*���캯������
1.���������� �вκ��޲ι��� �޲ι����ֳ�Ĭ�Ϲ��캯��
2.�������ͷ��� ��ͨ����Ϳ������� 
*/
class Person{
	public:
		//�޲ι���(Ĭ�Ϲ���) 
		Person(){
			cout<<"�޲ι��캯��"<<endl; 
		}
		//�вι��� 
		Person(int a){
			age=a;
			cout<<"�вι��캯��"<<endl; 
		}
		//���϶�������ͨ����
		//��������
		Person(const Person &p){
			age=p.age;
			cout<<"�������캯��"<<endl; 
		} 
		//��������
		~Person(){
			cout<<"��������"<<endl; 
		} 
		int age;	
};
void func(){
	//���캯�����÷���
	//1.���ŷ�
	Person p1;//�����޲ι��캯�� 
	Person p2(10);//�����вι��캯�� 
	Person p3(p2);//���ÿ������캯�� 
	cout<<"p2�����䣺"<<p2.age<<endl;
	cout<<"p3�����䣺"<<p3.age<<endl;
	//ע��  Person p1();�ᱻ���ɺ������� 
	//2.��ʾ��
	Person p4;
	Person p5=Person(10);//�����вι��캯��
	Person p6=Person(p5);//���ÿ������캯��
	//���� �������� 
	Person(10);//����ִ���꼴������
	//ע�� ��Ҫ�ÿ���������ʼ����������
	//Person(p6)�ᱻ����Person p6
	//3.��ʽת����
	Person p7=10;
	Person p8=p7;//���ÿ������� 
} 
int main(){
	func();
	return 0;
}
