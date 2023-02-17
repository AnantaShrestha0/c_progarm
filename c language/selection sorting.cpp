#include<stdio.h>

int main(){
	 int a[]={1,2,3,4,5,6,7,8};
	 int k=sizeof(a)/sizeof(a[0]);
	 for(int i=0;i<k;i++){
	 	int min=i;
	 	for(int j=i+1;j<k;j++){
	 		if(a[min]>a[j]){
	 			min=j;
			 }
		 }
		 //swap
		 int temp=a[min];
		 a[min]=a[i];
		 a[i]=temp;
	 }
	 
	 for(int i=0;i<k;i++){
	 	printf("%d ",a[i]);
	 }
	
	
	
	
	return 0;
}
