#include<iostream>
using namespace std;
/*��̬��Ա
1.��̬��Ա����
	���б�������һ������
	����׶η����ڴ棨��ȫ������ 
	���������������ʼ�� 
2.��̬��Ա����
	���ж�����һ������
	��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����*/
class Person{
	public:
		static int a;//��̬��Ա���� 
		int b;
		//��̬��Ա���� 
		static void func(){
			a=10;
			//b=20;bΪ�Ǿ�̬��Ա�������䲻�ɷ��� 
			cout<<"��̬��Ա��������"<<endl; 
		} 
	private:
		static void func2(){
			cout<<"˽�к�������"<<endl; 
		}
};
int Person::a=100;//Person���������ʼ��a (һ��Ҫ�������ʼ��)
void func(){
	//��̬��Ա�����ַ��ʷ�ʽ
	//ͨ��������� 
	Person p;
	p.func();
	cout<<p.a<<endl;
	//ͨ����������
	Person::func();
	cout<<Person::a<<endl; 
	/*˽�о�̬��Աͬ�����ɷ���
	Person::func2();�Ǵ����*/ 
}
int main(){
	func();
	return 0;
}
