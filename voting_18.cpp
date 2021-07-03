#include<stdio.h>
int  main(){
		int age;
		printf("enter age:");
		scanf("%d",&age);
		if(age>18){
			printf("elligible for voting\n",age);
		}
		else{
			printf("non-elligible\n",age);
			}
	return 0;
	}

