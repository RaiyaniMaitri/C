#include <stdio.h>
void main(){
	int a,b,sum=0;
	int *ptr1=&a;
	int *ptr2=&b;
	printf("enter a num:");
	scanf("%d %d",&a,&b);	
	sum=*ptr1+*ptr2;
	printf("%d",sum);
}
