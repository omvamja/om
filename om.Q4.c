#include<stdio.h>

void main (){
	
	int x,y;
	int *p;
	printf("enter tne number :-");
	scanf("%d",&x);
	
	
	int om[x];
	
	printf ("enter the element number ");
	
	int i;
	for(i=0;i<x;i++){

	printf("om[%d]",i);
	scanf("%d",&om[x]);
	}
	
	for(i=0;i<x;i++){
		if(i%2==1){
			printf("%d",i);
		} 
	}
}
