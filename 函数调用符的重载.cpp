#include<iostream>
#include<string>
using namespace std;
/*�������÷�������
���غ�ʹ�÷ǳ��������ã���˳�Ϊ�º���
�º���ʹ��ʮ����û�й̶�д��*/
class Print{
	public:
		//û�й̶�д��������ֵ�Ͳ���Ҳ���̶� 
		void operator()(string name){
			cout<<name<<endl;
		}
		int operator()(int a,int b){
			return a+b;
		} 
}; 
class counter{
	public:
		int operator()(int a,char c,int b){
			switch(c){
				case '+':return a+b;break;
				case '-':return a-b;break;
				case '*':return a*b;break;
				case '/':return a/b;break;
				default:return 0;break;
			}
		}
}; 
int main(){
	Print print;
	print("����");
	Print add;
	int sum=add(10,10); 
	cout<<"sum="<<sum<<endl;
	counter count;
	int arr=count(1,'*',2);
	cout<<"arr="<<arr<<endl;
	cout<<"����1+3="<<counter()(1,'+',3);//������������ 
	return 0;
} 
