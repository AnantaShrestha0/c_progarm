#include<stdio.h>
int main(){
	
		char a[]="daddy";
	int n=sizeof(a)/sizeof (a[0]);
	char b[n];
	int j=n-2;
	for(int i=0;i<n;i++){
		b[i]=a[j];
		j--;
		}
		
		

	for(int i=0;i<n;i++){
		if(a[i]!=b[i]){
			printf("false");
			break;
		}else if(i==n-1){
			printf("true");
		}
		}
		
	
	
	
	
	
	return 0;
}
