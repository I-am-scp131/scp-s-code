#include<iostream>
using namespace std;
//��̳�
//������Լ̳ж������
//�﷨��class ������:�̳з�ʽ ������1,�̳з�ʽ ������2 
class father{
	public:
		int a;
		father(){
			a=100;
		}
}; 
class mother{
	public:
		int a;
		mother(){
			a=200;
		}
};
class son:public father,public mother{
	public:
		int c;
		son(){
			c=300;
		}
};
int main(){
	son s;
	cout<<"son-c="<<s.c<<endl;
	//ͨ��������������
	cout<<"father-a="<<s.father::a<<endl;
	cout<<"mother-a="<<s.mother::a<<endl; 
	return 0;
}
