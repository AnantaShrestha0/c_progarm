#include<stdio.h>
int main(){
	
	char a[]="";
	int n=sizeof(a)/sizeof(a[0]);
	int count=0;
	
	
	for(int i=0;i<n-1;i++){
		int j=a[i];
		if(j==32){
			count++;
		}
	}
	
   if(n!=0){
   
	printf("The number of words in the sentance is %d",count+1);
	
	
}else{
	printf("The number of words in the sentence is 0");
}
	
	
	
	
	return 0;
}
