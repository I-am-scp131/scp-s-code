#include<iostream>
using namespace std;
/*�̳з�ʽ
1.�����̳�public���̳к�ĳ�Ա����Ȩ���븸����ͬ���������е�˽��Ȩ�޲��ɷ���
2.�����̳�protected:�̳к�ĳ�Ա����Ȩ�ޱ�Ϊprotected(��˽��Ȩ����)�������˽��Ȩ���Է��ʲ���
3.˽�м̳�private���̳к�ĳ�Ա����Ȩ��Ϊprivate�������˽��Ȩ�޷��ʲ���
�ܽ᣺�̳з�ʽΪ�����м̳еõ��ĳ�Ա����߷���Ȩ�ޣ���������Ϊ��Ȩ�ޣ��Ҹ����˽��Ȩ�������������Ҳ���ʲ���*/
class father{
	public:
		int a;
	protected:
		int b;
	private:
		int c;
}; 
//�����̳� 
class son1:public father{
	public:
		son1(int a,int b,int c){
			this->a=a;
			this->b=b;
//			this->c=c;�޷����� 
		} 
		void print(){
			cout<<"b="<<b<<endl;
		} 
};
//�����̳� 
class son2:protected father{
	public:
		son2(int a,int b,int c){
			this->a=a;
			this->b=b;
//			this->c=c;�޷����� 
		}
		void print(){
			cout<<"a="<<a<<" "<<"b="<<b<<endl;
		} 
}; 
//˽�м̳� 
class son3:private father{
	public:
		son3(int a,int b,int c){
			this->a=a;
			this->b=b;
//			this->c=c;�޷����� 
		}
}; 
class grandson:public son3{
	public:
		void set(){
//			a=100;
//			b=200;������˽��Ȩ�ޣ�������ʲ��� 
		}
		
};
int main(){
	son1 s1(1,2,3);
	cout<<"s1 a="<<s1.a<<" ";
//	cout<<"s1 b="<<s1.b;����Ȩ�������޷����� 
	s1.print();//����Ȩ�����ڿ��Է��� 
	son2 s2(1,2,3);
//	cout<<s2.a<<endl; ����Ȩ�������޷�����
	cout<<"s2 ";
	s2.print();
	son3 s3(1,2,3);
//	cout<<s3.a<<endl;˽��Ȩ�������޷����� 
	return 0;
} 
