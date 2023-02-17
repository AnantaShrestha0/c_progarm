#include<stdio.h>
#include<stdlib.h>
int main(){
	
	
	char *mem_alloc;
	mem_alloc =malloc(18*sizeof(char));
	if(mem_alloc==NULL){
		printf("\n couldn't able to allocate the request memory'");
	}else{
		mem_alloc = "Morgen International College ";
		printf("\n dynamically allocated memory content is %s",mem_alloc);
	}
	free(mem_alloc);
	
	
	return 0;
}
