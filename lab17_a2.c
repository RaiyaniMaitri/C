#include <stdio.h>
void main(){
{
	int a;
	int *ptr1=&a;
	printf("enter a num int:");
	scanf("%d",&a);	
	printf(" value=%d\n address=%d\n",*ptr1,&a);
}
{
	float b;
	float *ptr2=&b;
	printf("enter a num float:");
	scanf("%f",&b);	
	printf(" value=%f\n address=%d\n",*ptr2,&b);
}
{
	double c;
	double *ptr3=&c;
	printf("enter a num double:");
	scanf("%lf",&c);	
	printf(" value=%lf\n address=%d\n",*ptr3,&c);
}
{
	char d;
	char *ptr4=&d;
	printf("enter a num char:");
	scanf(" %c",&d);	
	printf(" value=%c\n address=%d\n",*ptr4,&d);
}
}
