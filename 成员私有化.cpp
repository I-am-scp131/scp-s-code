#include<stdio.h>
#include<string.h>
//类成员设置私有 
class test{
	char name[20]; //可读可写 
	int age=18; //只读 /可读写（0-150） 
	char idol[20]; //只写 
	public:
		void setName(char *m_name){
			strcpy(name,m_name);
		}//设置姓名 
		void getName(){
			printf("姓名：%s\n",name); 
		}//获取姓名 
		void getAge(){
			printf("年龄：%d",age); 
		}//获取年龄 
		void setAge(int m_age){
			if(m_age<0||m_age>150){
				printf("年龄输入有误，赋值无效\n");
				return ; 
			} 
			age=m_age; 
		}//设置年龄 
		void setIdol(char *m_idol){
			strcpy(idol,m_idol);
		}//设置idol 
};
int main(){
	test p1;
	//strcpy(p1.name,"张三"); 私有权限无法访问
	char name[20],idol[20];
	int age; 
	printf("请输入姓名、idol与年龄：");
	scanf("%s%s%d",name,idol,&age); 
	p1.setName(name); 
	p1.getName();
	p1.setAge(age);
	p1.getAge();
	p1.setIdol(idol);
	return 0;
}
