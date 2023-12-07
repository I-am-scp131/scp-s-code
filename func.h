#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct booksys{
	char id[10];
	char bookName[30];
	float price;
	char author[15];
	char press[30];
	char time[11];
}; 
int input_in(struct booksys*,int);
int save(struct booksys*,int,int);
void recall(struct booksys);
void find(struct booksys*,int,int);
void content(struct booksys);
void star();
void menu();
void help();
