#include<iostream>
using namespace std;
/*��Ա�����ͳ�Ա�����ֿ�����
ֻ�зǾ�̬��Ա������������Ķ���*/
class empty{
	
};//�ն��� 
class Person{
	public:
		int A;//�Ǿ�̬��Ա����������Ķ����� 
		static int a;//��̬��Ա��������������Ķ��� 
		void func(){}//�Ǿ�̬��Ա���� ����������Ķ���  
		static void Func(){}//��̬��Ա��������������Ķ���  
};
void func(){
	empty e;
	cout<<"sizeof e="<<sizeof(e)<<endl;
	Person p;
	cout<<"sizeof p="<<sizeof(p)<<endl;
}
int main(){
	func();
	return 0;
} 
