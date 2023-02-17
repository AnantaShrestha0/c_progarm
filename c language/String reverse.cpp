#include<stdio.h>
int main(){
	
	char a[]="Ananta";
	int n=sizeof(a)/sizeof(a[0]);
	char b[n];
	int j=n-2;
	printf("%d",n);
	for(int i=0;i<n;i++){
		b[i]=a[j];
		j--;
		}
		
		for(int i=0;i<n;i++){
			printf("%c",b[i]);
		}
	
	
	
	return 0;
}
