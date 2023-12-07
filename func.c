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
	printf("continue(1) or exit(2)：");
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
	printf("1.input 请你输入你想录入的书本数目，之后输入书本的编号、名字、价格、作者、出版社、出版时间ps:前两者请勿重复输入\n2.content即目录，此项要有书本信息保存过才有效\n3.find即查找，输入书本的编号或书名，可以得到本书的信息，不过只能得到还未保存起来的书本信息\n4.recall即回溯，输入书本的编号或名字可以得到往次录入的书本信息\n5.save and exit即保存和退出，此项会将本次输入进行保存，之后可选择继续或退出"); 
}
