#include<stdio.h>
int main(){
	
	
	int a[5];
	int *p;
	p=&a[0];
	for(int i=0;i<5;i++){
		scanf("%d",(p+i));
	}
	
	
	for(int i=0;i<5;i++){
		printf("\narray value at %d %d ",i,*(p+i));
	}
	
	
	
	return 0;
}
