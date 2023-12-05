#include<stdio.h>
int main(){
	char str[11],c;
	bool x;
	scanf("%s\n%c",str,&c);
	for(int i=0;i<10;i++){
		if(c==str[i]){
			printf("%d",++i);
			x=true;
			break;
		}
	}
	if(!x)
		printf("Null");
	return 0;
}
