/************************************************/
/* Programmer: Maddy Henderson                  */
/*                                              */
/* Program 19: Area of a Rectangle              */
/*                                              */
/* Approximate completion time: 9 minutes       */
/************************************************/

#include<stdio.h>

int main(int argc,char* argv[]){

    float length,height,area;

    printf("Please enter a length:\n");
    scanf("%f",&length);

    printf("Please enter a height:\n");
    scanf("%f",&height);

    area = length*height;

    printf("The area is %g\n",area);

    return 0;
}
