/************************************************/
/* Programmer: Madalyn Henderson                */
/*                                              */
/* Program 2: The sizeOf Operator               */
/*                                              */
/* Approximate completion time:  15 minutes     */
/************************************************/

#include<stdio.h>

int main(int argc, char* argv[]){

	printf("Sizes of Data Types (in bytes):\n");
	printf("Size of a char: %d\n",sizeof(char));
	printf("Size of a short int: %d\n",sizeof(short int));
	printf("Size of an int: %d\n",sizeof(int));
	printf("Size of a long int: %d\n",sizeof(long int));
	printf("Size of a long long int: %d\n",sizeof(long long int));
	printf("Size of a float: %d\n",sizeof(float));
	printf("Size of a double: %d\n",sizeof(double));
	printf("Size of a pointer to an int: %d\n",sizeof(int*));
	printf("Size of a pointer to a float: %d\n",sizeof(float*));
	printf("\n");

	return 0;
}