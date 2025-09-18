#include<stdio.h>
int main()

{
    int num1=20;
    int num2=50;

    int temp;

    temp = num1; //temp=20
    num1 = num2; //num1=50
    num2 = temp; //num2=temp

    printf("num1 = %d\n",num1);
    printf("num2 = %d\n",num2);

    getch();
}
