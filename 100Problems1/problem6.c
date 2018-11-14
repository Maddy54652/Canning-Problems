/************************************************/
/* Programmer: Madalyn Henderson                */
/*                                              */
/* Program 6: The fscanf Function               */
/*                                              */
/* Approximate completion time:   45 minutes    */
/************************************************/


#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[]){
	int testData;
	FILE *fp;
	
	fp = fopen("testdata6.txt","r");

	if(fp == NULL){
		exit(1);
	}
	
	fscanf(fp,"%d",&testData);
	
	printf("%d\n",testData);

	fclose(fp);
	
	//Mel Ott hit 511 home runs
	return 0;
}