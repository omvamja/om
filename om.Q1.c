//Q1
#include<stdio.h>
   om(int x,int y){
	int	i;
	for(i=x;i<=y;i++){
		
		if(i%2==0){
			printf("%d",i);
		}
	}
	
}



void main (){

int x,y;

	printf("enter the number :-");
	scanf("%d",&x);
	
	printf("enter the number :-");
	scanf("%d",&y);
	om(x,y);
  	

}
