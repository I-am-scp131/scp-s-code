#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "func.h"
int main()
{
	int t=0,pd=0,m=0;
	char n;
	struct booksys *input=(struct booksys*)malloc(101*sizeof(struct booksys));
	struct booksys p;
    while(pd<100){
    	menu();
    	n=getchar();
    	switch(n){
			case '1':t=input_in(input,pd);break;
			case '2':content(p);break;
			case '3':find(input,t,pd);break;
			case '4':recall(p);break;
			case '5':switch(save(input,pd,m))
			{
				case 1:m=pd;star();break;
				case 2:return 0;
				default:printf("Invalid!\n");star();break;
			}
			break;
			case 'h':help();break;
			default:printf("Invalid!.\n");break;
		}
		if(n=='1')
			pd+=t;
		getchar();
    }
	return 0;
}
