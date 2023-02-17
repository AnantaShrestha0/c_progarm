#include<stdio.h>
int main(){
	
	
	char a[]="Ananta";
	char b[]="Shrestha";
	int n=sizeof(a)/sizeof(a[0])+sizeof(b)/sizeof(b[0])-1;
	char c[n];
	int j=0;
	for(int i=0;i<n;i++){
		if(i<sizeof(a)/sizeof(a[0])-1){
				c[i]=a[i];		
		}else{
			c[i]=b[j];
			j++;
		}
		}
		
		
		for(int i=0;i<n;i++){
			printf("%c",c[i]);
		}
	
	
	return 0;
}
