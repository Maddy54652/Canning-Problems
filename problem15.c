
/************************************************/
/* Programmer: Maddy Henderson                  */
/*                                              */
/* Program 15: Using the sqrt Function	  */
/*                                              */
/* Approximate completion time: 20 minutes      */
/************************************************/

#include<stdio.h>
#include<math.h>

int main(int argc,char* argv[]){

	double userInput;
	double squareRoot;
	
	printf("Please enter a floating point number: \n");
	
	scanf("%lf",&userInput);
	
	squareRoot = sqrt(userInput);
	
	printf("%.2f\n",squareRoot);
	
	return 0;
}
