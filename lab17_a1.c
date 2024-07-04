#include <stdio.h>
void main(){
	int a;
	int *ptr=&a;
	printf("enter a num:");
	scanf("%d",&a);	
	printf(" value=%d\n value=%d\n address=%d\n address=%d\n",a,*ptr,&a,ptr);
}
