/************************************************/
/* Programmer: Madalyn Henderson                */
/*                                              */
/* Program 7: Bigger than 100?                  */
/*                                              */
/* Approximate completion time:   10 minutes    */
/************************************************/

#include<stdio.h>

int main(int argc, char *argv[]) {
    int userInput;
    printf("Please enter a number:\n");
    scanf("%d", &userInput);
    if (userInput <= 100) {
        printf("The number is not bigger than 100.\n");
    } else {
        printf("The number is bigger than 100.\n");
    }
    return 0;
}
