/************************************************/
/* Programmer: Maddy Henderson                  */
/*                                              */
/* Program 10: Sum of Twenty                    */
/*                                              */
/* Approximate completion time:   40 minutes    */
/************************************************/

#include<stdio.h>
#include<stdlib.h>

int main(int argc,char* argv[]){
	int i = 0;
	int sum = 0;
	int currentInt = 0;
	FILE *fp;
	
	fp = fopen("testdata10.txt","r");

	if(fp == NULL)
		exit(1);

	while(i < 20){
		fscanf(fp,"%d",&currentInt);
		sum+=currentInt;
		i++;
	}
	printf("The Sum: %d\n",sum);
	fclose(fp);
	return 0;
}
