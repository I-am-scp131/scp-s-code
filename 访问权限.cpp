#include<stdio.h>
#include<string.h>
//����Ȩ�ޣ�˽�С������������� 
class person{
	public:
		char name[20];
	protected:
		char car[20];
	private:
		long password;
		void fuc(){
			strcpy(name,"����");
			strcpy(car,"������");
			password=123456; 
		}
}; 
int main(){
	person p1;
	strcpy(p1.name,"����");//public����������ɷ��� 
	//strcpy(p1.car,"����"); protected���ڿɷ��ʣ����ⲻ�ɷ���(����ɷ���) 
	//p1.password=654321; private���ڿɷ��ʣ����ⲻ�ɷ��� (���಻�ɷ���) 
	//p1.func(); 
	return 0;
}
