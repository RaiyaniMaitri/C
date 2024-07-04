#include <stdio.h>
void main(){
	int a,b;
	int *ptr1=&a;
	int *ptr2=&b;
	printf("enter a val:");
	scanf("%d %d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("%d %d",*ptr1,*ptr2);
}
