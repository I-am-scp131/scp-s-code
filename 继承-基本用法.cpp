#include<iostream>
using namespace std;
/*�̳�
������֮��̳й����ĳ�Ա���̳к��������ʹ�ø���ĳ�Ա
�﷨��class ����:�̳з�ʽ ����
���� ����Ҳ��������
	 ����Ҳ�л���*/
//ģ�������վҳ�������������
class web{
	public:
		//����ͷ�� 
		void head(){
			cout<<"��ҳ����ͷ����һ���羰������Ŀ�б�"<<endl;
		}
		//�����ײ� 
		void foot(){
			cout<<"��ҳ����β�����羰���������Ա��������Ϣ��"<<endl; 
		}
		//������ǩĿ¼ 
		void content(){
			cout<<"��ǩĿ¼����ȡ�����⡢���������ԣ�"<<endl; 
		}
}; 
//������ҳ�� 
class luogu:public web{
	public:
		//�Լ��ĳ�Ա 
		void self(){
			cout<<"���������Ŀ...."<<endl; 
		}
}; 
///�����ҳ�� 
class Main:public web{
	public:
		void self(){
			cout<<"��������Ŀ...."<<endl; 
		}
}; 
//����������ҳ�� 
class interview:public web{
	public:
		void self(){
			cout<<"����������������Ŀ...."<<endl; 
		}
}; 
void func(){
	luogu l;
	cout<<"-----------------------------------------------------"<<endl;
	cout<<"��ȵ���ҳ���"<<endl;
	l.head();
	l.content();
	l.self();
	l.foot();
	cout<<"-----------------------------------------------------"<<endl; 
	cout<<"��������ҳ���"<<endl; 
	Main M;
	M.head();
	M.content();
	M.self();
	M.foot();
	cout<<"-----------------------------------------------------"<<endl;
	cout<<"���������Ե���ҳ���"<<endl; 
	interview i;
	i.head();
	i.content();
	i.self();
	i.foot();
} 
int main(){
	func(); 
	return 0;
} 
