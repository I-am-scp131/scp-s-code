#include<stdio.h>
//�½�ѧ���� 
class student{
	public: 
		char name[100];
		long long id;
		//¼��������ѧ�� 
		void input(){
			printf("name:");
			scanf("%s",name);
			printf("id:");
			scanf("%lld",&id); 
		}
		//��ӡ������ѧ�� 
		void print(){
			printf("������%s\nѧ�ţ�%lld",name,id);
		}
};
int main(){
	student stu1[10];
	stu1[0].input(); 
	stu1[0].print();
	return 0;
}
