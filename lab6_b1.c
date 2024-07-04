#include <stdio.h>
void main(){
	float bill,totalbill,unit;
	printf("enter a val:");
	scanf("%f",&unit);
	if(unit<=50){
		bill=unit*0.5;
		printf("%f",bill);
	}
	else if(51<=unit<=150){
		bill=(unit-50)*0.75+50*0.5;
		printf("%f",bill);
	}
	else if(151<=unit<=250){
		bill=50*0.5+100*0.75+(150-unit)*1.2;
		printf("%f",bill);
	}
	else if(unit>=251){
		bill=50*0.5+100*0.75+100*1.2+(250-unit)*1.5;
		printf("%f",bill);
	}
	else{
		printf("invalid val");
	}
	totalbill=bill+bill*0.2;
	printf("%f",totalbill);
}
