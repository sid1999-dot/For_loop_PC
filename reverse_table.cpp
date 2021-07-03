#include<stdio.h>
int main(){
	int num,i;
	printf("enter value:");
	scanf("%d",&num);
	for(i=10;i;i--){
		printf("7X%d=%d\n",i,(num*i));
	}
	return 0;
}
