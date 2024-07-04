#include <stdio.h>
void main(){
	int x,y,power=1,i=1;
	printf("enter a val:");
	scanf("%d %d",&x,&y);
	while(i<=y){
		power=power*x;
		i++;
	}
	printf("%d",power);
}
