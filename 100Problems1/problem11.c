/************************************************/
/* Programmer: Madalyn Henderson                */
/*                                              */
/* Program 11: Equal to Zero?                   */
/*                                              */
/* Approximate completion time: 8 minutes       */
/************************************************/

#include<stdio.h>

int main(int argc, char* argv[]){

	int input;
	scanf("%d",&input);

	switch(input){
		case 0:
		printf("The number is equal to zero.\n");
		break;
		default:
		printf("The number is not equal to zero.\n");
		break;
	}
	
	return 0;
}
