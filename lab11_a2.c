#include <stdio.h>
void main(){
	int n,i,sum=0;
	printf("enter a num:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
			sum=sum+i;
	}
	printf("%d",sum);
}
