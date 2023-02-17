#include<stdio.h>
int part(int a[],int start,int end){
	int pivort=a[end];
	int i=start-1;
	
	for(int j=start;j<end;j++){
		if(pivort>a[j]){
			i++;
			int temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	
	i++;
	int temp=a[i];
	a[i]=pivort;
	pivort=temp;
	return i;
	
}
void sorting(int a[],int start,int end){
	
	if(end>start){
		int pivort=part( a,start,end);
		
		
		
		
		sorting(a,start,pivort-1);
		sorting(a,pivort+1,end);
		
		}

}


int main(){
	
	int a[]={33,4,5,6,7,8,23};
	int end=(sizeof(a)/sizeof(a[0])-1);
	sorting(a,0,end);
	
	for(int i=0;i<7;i++){
		printf(a[i]+" ");
	}
	
	
	return 0;
}
