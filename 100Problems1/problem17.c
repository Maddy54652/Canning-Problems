/************************************************/
/* Programmer: Maddy Henderson                  */
/*                                              */
/* Program 17: Count Characters                 */
/*                                              */
/* Approximate completion time:   30 min        */
/************************************************/

#include<stdio.h>

int main(int argc,char* argv[]){
    int numChars = 0;
    int placeHolder = 0;
    int temp;
    char input[600];


    temp= getchar();

    do{
        input[placeHolder] = temp;
        placeHolder++;
        numChars++;
    }while((temp= getchar())!= EOF  && placeHolder<600);

    printf("Number of Characters Entered: %d\n",numChars);
    return 0;
}
