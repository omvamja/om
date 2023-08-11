// Q5
#include<stdio.h>
   
void main (){

int a,b,c,m;

	printf("enter the number :-");
	scanf("%d",&a);
		printf("enter the number :-");
	scanf("%d",&b);
		printf("enter the number :-");
	scanf("%d",&c);
	
	m = (a<b)?((a<c)?a:c):((b<c)?b:c);
printf("the minimum number is %d",m);


}

