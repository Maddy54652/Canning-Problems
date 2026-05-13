/************************************************/
/* Programmer: Maddy Henderson                  */
/*                                              */
/* Program 22: Reverse the Command Line	      */
/*                                              */
/* Approximate completion time: 43 minutes      */ 
/************************************************/
#include<stdio.h>

int main(int argc,char* argv[]){
	
	int i = argc-1;
	
	for (;i >0;i-=1){
		printf("%s\n",argv[i]);
	}
	return 0;
}
