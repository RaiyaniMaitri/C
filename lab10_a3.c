#include <stdio.h>
void main(){
	int n,i=1,cp=0;
	printf("enter a val:");
	scanf("%d",&n);
	while(i<=n){
		if(n%i==0){
			cp++;
		}
		i++;
	}
	if(cp==2){
		printf("prime num");
	}
	else{
		printf("not prime num");
	}
}
