#include <stdio.h>
void main(){
	int n;
	printf("enter a size of array:");
	scanf("%d",&n);
	int a[100],num,i;
	for(i=0;i<n;i++){
		printf("enter a val of arr[%d]",i);
		scanf("%d",&a[i]);
		printf("enter element to search:");
		scanf("%d",&num);
		}
		for(i=0;i<n;i++){
			if(a[i]==num){
				printf("%d %d",num,i+1);
			}
		}
		printf("%d",num);
}
