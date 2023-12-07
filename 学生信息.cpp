#include<stdio.h>
class student{
	public: 
		char name[100];
		long long id;
		void input(){
			printf("name:");
			scanf("%s",name);
			printf("id:");
			scanf("%lld",&id); 
		}
		void print(){
			printf("ĞÕÃû£º%s\nÑ§ºÅ£º%lld",name,id);
		}
};
int main(){
	student stu1[10];
	stu1[0].input(); 
	stu1[0].print();
	return 0;
}
