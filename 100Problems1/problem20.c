/************************************************/
/* Programmer: Maddy Henderson                  */
/*                                              */
/* Program 20: Area of a Circle                 */
/*                                              */
/* Approximate completion time: 8 minutes       */
/************************************************/

#include<math.h>
#include<stdio.h>

int main(int argc,char* argv[]){

    float r,area;

    printf("Please enter the radius:  ");
    scanf("%f",&r);

    area=M_PI*r*r;

    printf("The area is:%g\n",area);

    return 0;
}
