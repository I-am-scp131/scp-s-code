#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "func.h"
int input_in(struct booksys *p,int pd){
	int n,t=0;
	star();
	printf("How many books do you want to input:");
	scanf("%d",&n);
	for(int i=pd;i<pd+n;i++){
		printf("Please input the information of book %d\n",i+1);
		for(;t<6;t++){
			switch(t){
				case 0:printf("bookid:");scanf("%s",p[i].id);break;
				case 1:printf("bookName:");scanf("%s",p[i].bookName);break;
				case 2:printf("price:");scanf("%f",&p[i].price);break;
				case 3:printf("author:");scanf("%s",p[i].author);break;
				case 4:printf("press:");scanf("%s",p[i].press);break;
				case 5:printf("time:");scanf("%s",p[i].time);break;
				default:break;
			} 
		}
		t=0;
	}
	star();
	return n;
}
void find(struct booksys *p,int n,int pd){
	char choice[30];
	star();
	printf("Do you want to find a book(input its id or bookName)");
	scanf("%s",choice);
	for(int i=0;i<pd+n;i++){
		if(!(strcmp(choice,p[i].id))){
			printf("book id:%s\nbookName:%s\nprice:%.2f\nauthor:%s\npress:%s\ntime:%s\n",p[i].id,p[i].bookName,p[i].price,p[i].author,p[i].press,p[i].time);
			return;
		}
		else if(!(strcmp(choice,p[i].bookName))){
			printf("book id:%s\nbookName:%s\nprice:%.2f\nauthor:%s\npress:%s\ntime:%s\n",p[i].id,p[i].bookName,p[i].price,p[i].author,p[i].press,p[i].time);			
			return;
		}	
	}
	printf("error:this book doesn't exist\n");
	star();
}
void star(void){
	printf("**********************************************************************************\n");
} 
void menu(void){
	printf("menu\n");
	star();
	printf("Please choose\n1)input\t2)content\t3)find\t4)recall\t5)save and exit\n");
	star();
}
int save(struct booksys *p,int pd,int m){
	FILE *fp=NULL;
	int n;
	fp=fopen("library.xls","a");
	star();
	for(int i=m;i<pd;i++)
		fprintf(fp,"%s\t%s\t%.2f\t%s\t%s\t%s\n",p[i].id,p[i].bookName,p[i].price,p[i].author,p[i].press,p[i].time);
	fclose(fp);
	printf("continue(1) or exit(2)��");
	scanf("%d",&n);
	return n;	 
}
void recall(struct booksys p){
	FILE *fp=NULL;
	char t[30];
	char choise[30],di[2][30];
	printf("Please choose the history you want to recall(input its id or bookName):");
	scanf("%s",choise);
	fp=fopen("library.xls","r");
	fscanf(fp,"%s\t%s\t%f\t%s\t%s\t%s\n",di[0],di[1],&p.price,p.author,p.press,p.time);
	while(strcmp(t,di[0])&&strcmp(di[0],choise)&&strcmp(di[1],choise))
	{
		strcpy(t,di[0]);
		fscanf(fp,"%s\t%s\t%f\t%s\t%s\t%s\n",di[0],di[1],&p.price,p.author,p.press,p.time);
	}
	if(!(strcmp(t,di[0])))
		return;
	fclose(fp);
	
	printf("book id:%s\nbookName:%s\nprice:%.2f\nauthor:%s\npress:%s\ntime:%s\n",di[0],di[1],p.price,p.author,p.press,p.time);
}
void content(struct booksys p){
	FILE *fp=NULL;
	char t[10];
	star();
	fp=fopen("library.xls","r");
	fscanf(fp,"%s\t%s%*[^\n]%*c",p.id,p.bookName);
	while(strcmp(t,p.id)){
		strcpy(t,p.id);
		printf("book id:%s\tbookName:%s\n",p.id,p.bookName);
		fscanf(fp,"%s\t%s%*[^\n]%*c",p.id,p.bookName);
	}
	star();
	fclose(fp); 
}
void help(){
	printf("1.input ������������¼����鱾��Ŀ��֮�������鱾�ı�š����֡��۸����ߡ������硢����ʱ��ps:ǰ���������ظ�����\n2.content��Ŀ¼������Ҫ���鱾��Ϣ���������Ч\n3.find�����ң������鱾�ı�Ż����������Եõ��������Ϣ������ֻ�ܵõ���δ�����������鱾��Ϣ\n4.recall�����ݣ������鱾�ı�Ż����ֿ��Եõ�����¼����鱾��Ϣ\n5.save and exit��������˳�������Ὣ����������б��棬֮���ѡ��������˳�"); 
}
