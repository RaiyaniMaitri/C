#include<stdio.h>
void main(){
	int a,b;
	char choice;
	printf("enter a val:");
	scanf("%d %d",&a,&b);
	printf("enter a choice(+ for add,- for sub,* for mul,/ for divi):");
	scanf(" %c",&choice);
	if(choice=='+'){
		printf("%d",a+b);
	}
	else if(choice=='-'){
		printf("%d",a-b);
	}
	else if(choice=='*'){
		printf("%d",a*b);
	}
	else if(choice=='/'){
		printf("%d",a/b);
	}
	else{
		printf("special symbols");
	}
}
