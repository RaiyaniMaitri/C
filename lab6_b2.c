#include <stdio.h>
#include <math.h>
void main(){
	float a,b,c,d,r,r1,r2;
	printf("enter a val:");
	scanf("%f %f %f",&a,&b,&c);
	d=(b*b)-4*a*c;
	if(d==0){
		r=(-b/(2*a));
		printf("%d",&r);
	}
	else if(d>=0){
		r1=(-b+d*(1/2)/2*a);
		printf("%f",&r1);
		r2=(-b-d*(1/2)/2*a);
		printf("%f",&r2);
	}
}
