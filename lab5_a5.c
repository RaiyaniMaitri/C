#include <stdio.h>
void main(){
	int a,b,c;
	printf("enter a val:");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b){
		printf("a is largest num");
	}
	else if(b>c){
		printf("b is largest num");
	}
	else if(c>a){
		printf("c is largest num");
	}
}
