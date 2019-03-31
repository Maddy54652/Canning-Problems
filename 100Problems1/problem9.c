/************************************************/
/* Programmer: Maddy Henderson                  */
/*                                              */
/* Program 9: Using a For Loop                  */
/*                                              */
/* Approximate completion time:   25 minutes    */
/************************************************/

#include<stdio.h>
#include<stdlib.h>


int main(int argc,char* argv[]){

    FILE* fp;
    int temp;

    fp = fopen("testdata9.txt","r");

    if(fp == NULL){
        puts("An error has occured.");
        exit(1);
    }

    for(int i = 0;i<5;i++){

        fscanf(fp,"%d ",&temp);
        printf("%d\n",temp);

    }

    fclose(fp);
    return 0;
}
