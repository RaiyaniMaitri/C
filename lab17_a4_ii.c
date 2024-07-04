#include <stdio.h>
void main(){
	int a,b,c;
	int *ptr1=&a;
	int *ptr2=&b;
	int *ptr3=&c;
	printf("enter a val:");
	scanf("%d %d",&a,&b);
	c=b,b=a,a=c;
	printf("%d %d",*ptr1,*ptr2);
}
