#include<stdio.h>
int main(){
	
	
	int a[]={1,2,3,4,5};
	int *p,i;
	p=&a[0];
	for(int i=0;i<5;i++){
		printf("\narray %u",p+i);
	}
	
	
	
	return 0;
}
