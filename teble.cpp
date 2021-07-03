#include<stdio.h>
int main(){
	int num,i;
	printf("enter value:");
	scanf("%d",&num);
	for(i=1;i<=10;i++){
		printf("the table is %d\n",(num*i));
	}
	return 0;
}
