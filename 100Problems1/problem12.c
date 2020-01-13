/************************************************/
/* Programmer: Madalyn Henderson                */
/*                                              */
/* Program 12: Positive, Negative, or Zero?     */
/*                                              */
/* Approximate completion time: 7 minutes       */
/************************************************/

#include<stdio.h>

int main(int argc, char* argv[]){
	
	int input;	
	scanf("%d",&input);

	if(input == 0){
		printf("The number is zero.\n");
	}else if (input > 0){
		printf("The number is positive.\n");
	}else{
		printf("The number is negative.\n");
	}
	return 0;
}
