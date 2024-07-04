#include <stdio.h>
void main(){
	float BS,HRA,DA,GS;
	printf("enter a BS of an employee:");
	scanf("%f",&BS);
	if(BS>=30000){
		HRA=(BS*20)/100;
		DA=(BS*80)/100;
		GS=BS+HRA+DA;
		printf("%f",GS);	
	}
	 else if(BS>=20000){
		HRA=(BS*25)/100;
		DA=(BS*90)/100;
		GS=BS+HRA+DA;
		printf("%f",GS);
	}
	else if (BS>=30000){
		HRA=(BS*30)/100;
		DA=(BS*95)/100;
		GS=BS+HRA+DA;
		printf("%f",GS);
	}	
	
}
