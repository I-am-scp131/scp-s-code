#include<iostream>
using namespace std;
//���õĻ����﷨��ע������ 
int main(){
	/*���� ������������� 
	�÷� &����=ԭ�� */
	int a=10,c=20;
	int &b=a;//a�ı���b 
	cout<<"a="<<a<<endl<<"b="<<b<<endl;
	cout<<"a�ĵ�ַ"<<&a<<endl<<"b�ĵ�ַ"<<&b<<endl;//a��bָ��ͬһ���ڴ棬��ַ��ͬ
	//ע��
	//1.���ñ����ʼ��
	//int &c;�����Ǵ��
	//2.���ó�ʼ���󲻿ɸ���(����ֻ����a�ı���) 
	//&b=c;��Ҳ�Ǵ��
	b=c;//���Ǹ�ֵ�������ı����a��ֵ 
	cout<<"a="<<a<<endl<<"b="<<b<<endl;
	return 0;
}
