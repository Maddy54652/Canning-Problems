/************************************************/
/* Programmer: Maddy Henderson                  */
/*                                              */
/* Program 16: Sine Function          	  */
/*                                              */
/* Approximate completion time: ~8 minutes      */
/************************************************/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(int argc,char* argv[]){

	char* temp = argv[1];
	double input; 
	input = strtod(temp,NULL);
	double output = sin(input);
	printf("%f\n",output);
	
	return 0;
}
