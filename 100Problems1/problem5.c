/************************************************/
/* Programmer: Madalyn Henderson                */
/*                                              */
/* Program 5: Sum of Two Values                 */
/*                                              */
/* Approximate completion time:   8 minutes     */
/************************************************/

#include<stdio.h>

int main(int argc, char* argv[]){

	int first_value;
	int second_value;
	int sum;

	scanf("%d",&first_value);
	scanf("%d", &second_value);
	sum = first_value + second_value;

	printf("%d\n",sum);

	return 0;
}
