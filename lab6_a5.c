#include <stdio.h>
void main(){
	int a,b,c,d,e;
	printf("enter a marks:");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	float pr;
	pr=(a+b+c+d+e)/5;
	if(pr<35){
		printf("fail");
	}
	else if(pr>=35&&pr<45){
		printf("pass class");
	}
	else if(pr>=45&&pr<60){
		printf("second class");
	}
	else if(pr>=60&&pr<70){
		printf("first class");
	}
	else if(pr>=70){
		printf("distinction");
	}
}
