#include <stdio.h>
void main(){
	int num,a;
	printf("enter a num:");
	scanf("%d",&num);
	a=num%10;
	if(num%2==0){
		printf("num is even");
	}
	else{
		printf("num is odd");
	}
}
