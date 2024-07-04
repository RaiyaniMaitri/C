#include <stdio.h>
void main(){
	int n,nd;
	printf("enter a num:");
	scanf("%d",&n);
	cpn=n;
	while(n!=0){
		n=n/10;
		nd=nd+1;
	}
	n=cpn;
	while(n!=0){
		rem=n%10;
		for(i=1;i<nd+1;i++){
			temp=temp*rem;
		}
		sum=sum+temp;
		n=n/10;
	}
}
