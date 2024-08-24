/************************************************/
/* Programmer: Maddy Henderson                  */
/*                                              */
/* Program 21: Argv		                */
/*                                              */
/* Approximate completion time: 6 minutes       */
/************************************************/

#include<stdio.h>

int main(int argc,char* argv[]){
    
    int numArg = argc-1;
    int i = 0;
    
    //printf("%d\n",numArg);
    
    for(;i<=numArg;i++){
        printf("%s\n",argv[i]);
    }

    return 0;
}
