#include<stdio.h>
int main(){

  char a[]="Ananta";
  int n=sizeof(a)/sizeof(a[0]);
  printf("%d",n);
  int count=0;
  for(int i=0;i<n;i++){
  	if(a[i]=='A'||a[i]=='a'||a[i]=='E'||a[i]=='e'||a[i]=='o'||a[i]=='i'||a[i]=='u'||
	  a[i]=='O'||a[i]=='I'||a[i]=='U'){
	  	count++;
	  }
  }

  printf("The number of vovels present in the given word is %d",count);

return 0;
}
