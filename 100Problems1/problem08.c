/************************************************/
/* Programmer: Madalyn Henderson                */
/*                                              */
/* Program 8: One Horizontal Line of Asterisks  */
/*                                              */
/* Approximate completion time: 35 minutes      */
/************************************************/

#include<stdio.h>
#include<stdlib.h>

int main(int argc,char* argv[]){
	FILE* fPointer;
	int numStars;
	int i;
	//opens file and tests that it is real
	fPointer = fopen("testdata8.txt","r");
	if(fPointer == NULL){
		puts("Error: Could not read file.");
		exit(1);
	}

	//read in number from testdata8 using fscanf
	fscanf(fPointer,"%d",&numStars);

	//make sure it is from 1-30 inclusive
	if(numStars < 1 || numStars > 30){
		printf("Error: Invalid input\n");
	}
	else{ //printing stars
		for(i=0;i<numStars;i++){
			printf("*");
		}
		printf("\n");
	}
	//close file
	fclose(fPointer);
	return 0;
}
