#include<stdio.h>
int main(){
	
	int a[]={3,5,6,6,3,56,234,2,3,5};
	int b[]={6,4,2,8,7,6};
	int k=sizeof(a)/sizeof(a[0]),kk=sizeof(b)/sizeof(b[0]);
	int c[k+kk];
	int kl=k+kk;
	int j=0;
	for(int i=0;i<kl;i++){
		if(i<k){
			c[i]=a[i];
		}else{
			
			c[i]=b[j];
			j++;
		}
	}
	
	for(int i=0;i<kl;i++){
		printf("%d ",c[i]);
	}
	
	
	return 0;
}
