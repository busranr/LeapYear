#include<stdio.h>

int main(){
	
	int Checkyear;
	
	printf("Please input a year:", Checkyear);
	scanf("%d",&Checkyear);
	
	if((Checkyear%400)==0)
		printf("%d is a leap year. \n", Checkyear);
	else if((Checkyear%100)==0)
	
		printf("%d is a not leap year. \n", Checkyear);

	else if((Checkyear%4)==0)
		printf("%d is a leap year. \n", Checkyear);
	
	else 
	printf("%d is a not leap year. \n");
	
   }
   
