#include<stdio.h>
#include<string.h>
int main(){
	
	
	char a[40]="Ananta";
	char b[40]="D";
	int c=strcmp(a,b);
	printf("%d",c);
	if(strcmp(a,b)){
		printf("hello");
	}else{
		printf("fello");
	}
	
	return 0;
}
