#include<iostream>
using namespace std;
/*�������Ϊ���Ա
1.�������������Ϊ�����Աʱ���ȹ���������ٹ�������
2.����������֮�෴�������Ƚ������ԭ��*/
class A{
	public:
		A(){
			cout<<"A��Ĭ�Ϲ��캯������"<<endl;
		} 
		~A(){
			cout<<"A��������������"<<endl; 
		}
};
class B{
	public:
		A a;
		B(){
			cout<<"B��Ĭ�Ϲ��캯������"<<endl;
		}
		~B(){
			cout<<"B��������������"<<endl; 
		}
};
void func(){
	B b;
}
int main(){
	func();
	return 0;
}
