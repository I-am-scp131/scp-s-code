#include<iostream>
/*���������������ͺ�������ֵ*/
using namespace std;
//�������������� 
void func1(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
} 
//��������������ֵ 
int& func2(){
	//int a=10;��ջ���Ϻ�������ʱ���ͷţ����ɷ���������
	static int a=10;//��̬��������ȫ������ֱ����������ű��ͷ� 
	return a; 
} 
int main(){
	int a=10,b=20;
	int &ref=func2(); 
	func1(a,b);
	cout<<"a="<<a<<endl<<"b="<<b<<endl;
	cout<<"ref="<<ref<<endl; 
	//��������ֵʱ����ʱ��������ֵ
	func2()=100;
	cout<<"ref="<<ref<<endl;
	return 0;
}
