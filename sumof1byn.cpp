#include<stdio.h>
int main(){
	int i,n;
	float s=0.0;
	printf("enter number of terms:");
	scanf("%d",&n);
	printf("\n\n");
	for(i=1;i<=n;i++){
		if(i<n){
			printf("1/%d +",i);
			s+=1/(float)i;
		}
		if(i==n){
			printf("1/%d",i);
			s+=1/(float)i;
		}
	}
	printf("\nsum upto %d terms is : %f\n",n,s);
	return 0;
}
