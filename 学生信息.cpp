#include<stdio.h>
//新建学生类 
class student{
	public: 
		char name[100];
		long long id;
		//录入姓名、学号 
		void input(){
			printf("name:");
			scanf("%s",name);
			printf("id:");
			scanf("%lld",&id); 
		}
		//打印姓名、学号 
		void print(){
			printf("姓名：%s\n学号：%lld",name,id);
		}
};
int main(){
	student stu1[10];
	stu1[0].input(); 
	stu1[0].print();
	return 0;
}
