#include <stdio.h>
void main(){
	int x,y,i,power;
	printf("enter a num:");
	scanf("%d %d",&x,&y);
	for(i=1;i<=y;i++){
		power=power*x;
	}
	printf("%d",power);
}
