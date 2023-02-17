#include<stdio.h>
main()
{
//	printf("Hello World! <3");
	
double num=50;

double *p;
p=&num;
printf("address of variable is %u",p);
p=p+1;
printf("address of variable is %u",p);



}
