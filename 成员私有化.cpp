#include<stdio.h>
#include<string.h>
//���Ա����˽�� 
class test{
	char name[20]; //�ɶ���д 
	int age=18; //ֻ�� /�ɶ�д��0-150�� 
	char idol[20]; //ֻд 
	public:
		void setName(char *m_name){
			strcpy(name,m_name);
		}//�������� 
		void getName(){
			printf("������%s\n",name); 
		}//��ȡ���� 
		void getAge(){
			printf("���䣺%d",age); 
		}//��ȡ���� 
		void setAge(int m_age){
			if(m_age<0||m_age>150){
				printf("�����������󣬸�ֵ��Ч\n");
				return ; 
			} 
			age=m_age; 
		}//�������� 
		void setIdol(char *m_idol){
			strcpy(idol,m_idol);
		}//����idol 
};
int main(){
	test p1;
	//strcpy(p1.name,"����"); ˽��Ȩ���޷�����
	char name[20],idol[20];
	int age; 
	printf("������������idol�����䣺");
	scanf("%s%s%d",name,idol,&age); 
	p1.setName(name); 
	p1.getName();
	p1.setAge(age);
	p1.getAge();
	p1.setIdol(idol);
	return 0;
}
