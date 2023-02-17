#include<stdio.h>
int main(){
	int n;
	printf("Enter the number of element you want to pass in array");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	int min=a[0];
	int max=a[0];
	for(int i=0;i<n-1;i++){
			if(max<a[i+1]){
			max=a[i+1];
		}
			if(min>a[i+1]){
			min=a[i+1];
			
		}
	}
	printf("max ");
	printf("%d\n",max);
	printf("min ");
	printf("%d",min);
	
	
	
	return 0;
}
