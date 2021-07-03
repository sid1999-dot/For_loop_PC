#include<stdio.h>
int main(){
	int num,sum=0,i;
	printf("enter the value to which limit to be added:");
	scanf("%d",&num);
	for(i=0;i<=num;i++){
		sum+=i;
	}
	printf("sum is %d:",sum);
	return 0;
}
