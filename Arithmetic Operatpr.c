// Write a program that takes tow integer and display sum
#include<stdio.h>
int main()

{

    int num1,num2,result;
    float avg;
    printf("Enter Tow Number : ");
    scanf("%d %d",&num1,&num2);

    result = num1 + num2;
    printf("The Sum is = %d\n",result);

    result = num1 - num2;
    printf("The Sub is = %d\n",result);

    result = num1 * num2;
    printf("The Mulitification is = %d\n",result);

    result = num1 / num2;
    printf("The Divsion is = %d\n",result);

    result = num1 % num2;
    printf("The Remainde is = %d\n",result);

    avg = (float)result/2; //type Casting
    printf("The Average Is = %f\n",avg);

    getch();

}
