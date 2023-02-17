#include<stdio.h>
int main(){
	
	
	int a[]={4,5,6,8,2,3,5,7,8,4,68,8};
	int search_element,pos=-1;
	printf("Enter the search element ");
	scanf("%d",&search_element);
	for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){
		if(a[i]==search_element){
			pos=i;
			break;
		}
	}
	
	if(pos==-1){
		printf("It is not present inside the array ");
		}
	else{
		printf("Its is present inside the array ");
	}
	
		return 0;
}
