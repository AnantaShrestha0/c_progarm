#include<stdio.h>
int main(){
	
	char a[]="Ananta";
	int n=sizeof(a)/sizeof(a[0]);
	char b[n];
	
	for(int i=0;i<n;i++){
		int j=a[i];
		if(j<90){
			b[i]=(char)(j+32);
		}else{
			b[i]=a[i];
		}
	}
	
	for(int i=0;i<n;i++){
		printf("%c",b[i]);
	}
	
	
	return 0;
}
