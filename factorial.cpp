#include<stdio.h>
int main(){
	int num,fact=1,i=1;
	printf("enter value:");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		fact=fact*i;
	}
	printf("the factorial is %d",fact);
	return 0;
}
