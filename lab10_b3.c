#include <stdio.h>
void main(){
	int n,sum=0,rem,temp;
	printf("enter a num:");
	scanf("%d",&n);
	temp=n;
	while(n!=0){
		rem=n%10;
		sum=sum*10+rem;
		n=n/10;
	}
	if(sum==temp){
		printf("palindrom num");
	}
	else{
		printf("not palindrom num");
	}
}
