#include<iostream>
using namespace std;
//��������� 
//���������������ʵ���Զ����������͵����� 
class Person{
	public:
		int a;
		int b;
		Person(int a=0,int b=0){
			this->a=a;
			this->b=b;
		} 
		//��Ա����ʵ��(���޷�ʵ����Ҫ��Ч��)
		ostream& operator<<(ostream &cout){
			cout<<"p.a="<<this->a<<endl<<"p.b="<<this->b; 
			return cout;	
		} 
};
//ȫ�ֺ�������<<�����������
ostream& operator<<(ostream &cout,Person &p){
	cout<<"p.a="<<p.a<<endl<<"p.b="<<p.b; 
	return cout;//����һ��cout�����ã�����������ʽ���	
} 
int main(){
	Person p(10,20);
	Person P(20,16);
	cout<<p<<endl;
	P<<cout<<endl; 
	return 0;
}
