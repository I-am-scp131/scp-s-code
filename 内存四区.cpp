#include<iostream>
using namespace std;
/*�ڴ�����(��������ȫ�����ڴ���ִ��ǰ����������) 
1.������:��Ŷ����ƵĻ���ָ��(Ҳ����д�Ĵ���)
��������:1)����,�������δ�ͬ��exe�ļ�ʱ,�ڴ��б����õĴ���ֻ��һ��
         2)ֻ��,��exe���ɺ����ڲ����벻�ܸı�,��ֹ����Ա�����������޸�
2.ȫ����:���ȫ�ֱ���,��̬����,����(ָconst���ε�ȫ�ֱ�����ȫ�ֳ���,�Լ��ַ�������)*/
int g_a=1;//ȫ�ֱ��� 
static int s_a=1;//��̬���� 
const int c_g_a=1;//ȫ�ֳ��� 
int main(){
	int a=1;//�ֲ����� 
	static int s_b=1;//��̬���� 
	const int c_a=1;//�ֲ����� 
	cout<<"ȫ�ֱ���g_a�ĵ�ַ"<<int(&g_a)<<endl;
	cout<<"��̬����s_a,s_b�ĵ�ַ"<<int(&s_a)<<" "<<int(&s_b)<<endl;
	cout<<"ȫ�ֳ���c_g_a�ĵ�ַ"<<int(&c_g_a)<<endl;
	cout<<"�ֲ�����a�ĵ�ַ"<<int(&a)<<endl; 
	cout<<"�ֲ�����c_a�ĵ�ַ"<<int(&c_a)<<endl;
	cout<<"�ַ���'hello world'�ĵ�ַ"<<int(&"hello world")<<endl; 
	return 0;
}
