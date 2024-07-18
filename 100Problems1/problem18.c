/************************************************/
/* Programmer: Maddy Henderson                  */
/*                                              */
/* Program 18: Solid Box of Asterisks           */
/*                                              */
/* Approximate completion time: 22 minutes      */
/************************************************/

#include<stdio.h>

int checkInput(int input);

int getInput(void);

void printRows(int input);

void printBox(int h, int l);

int main(){

    int L,H;

    H = getInput();
    L = getInput();
    
    printBox(H,L);


    return 0;
}

int checkInput(int input){

    //I am assuming that the user will give us a positive integer.

    while(input >= 21){
        printf("Input is too big! Please try again.\n");
        scanf("%d",&input);
    }

    return input;
}

int getInput(void){

    int input;
    
    printf("Please give us the input:\n");
    scanf("%d",&input);
    input = checkInput(input);
    
    return input;
}

void printRows(int input){
    int i;
    
    for(i = 0;i<input;i++){
        printf("*");
    }
    
    printf("\n");
    
    return;
}

void printBox(int h, int l){
    int i;

    for(i = 0;i<l;i++){
        printRows(h);
    }
    
    return;
}
