#include<stdio.h>
int main(){
	
	
	int p=7;
	int *pointer=&p;
	printf("\nValue of p is %d",p);
	printf("\nMemory address of p is %u",&p);
	printf("\nValue of pointer is %d",*pointer);
	printf("\nAddress of pointer is %u",&pointer);

	
	
	
	
	return 0;
}
