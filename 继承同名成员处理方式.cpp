#include<iostream>
using namespace std;
/*�̳�ͬ����Ա����ʽ
1.��������ͬ����Ա  ֱ�ӷ��ʼ���
2.���ʸ���ͬ����Ա  ��Ҫ��������*/
class father{
	public:
		int a;
		static int b; 
		father(){
			a=200;
		}
		void func(){
			cout<<"father-func()����"<<endl;
		} 
		void func(int a){
			cout<<"father-func(int "<<a<<")"<<endl;
		}
}; 
int father::b=100;
class son:public father{
	public:
		int a;
		static int b;
		son(){
			a=100;
		}
		void func(){
			cout<<"son-func()����"<<endl;
		} 
};
int son::b=200;
int main(){
	son s;
	cout<<"son-a="<<s.a<<endl;
	//����������ʸ����Ա 
	cout<<"father-a="<<s.father::a<<endl;
	//ͬ������ͬ������������д��� 
	s.func();
	s.father::func();
	//�����е�ͬ�����������ظ������г�Ա�������������صĺ�����������ͨ�������ڷ��� 
	s.father::func(100);
	//���ھ�̬��Ա�������
	//ͨ��������ʾ�̬��Ա 
	cout<<"ͨ��������ʾ�̬��Ա"<<endl; 
	cout<<"son-static b="<<s.b<<endl;
	cout<<"father-static b="<<s.father::b<<endl;
	//ͨ������ֱ�ӷ���
	cout<<"ͨ��������ʾ�̬��Ա"<<endl; 
	cout<<"son-static b="<<son::b<<endl;
	cout<<"father-static b="<<son::father::b<<endl;//��һ��::��ʾͨ���������ʣ��ڶ���::father��������
	//��̬��Ա����ͬ�� 
	return 0;
}
