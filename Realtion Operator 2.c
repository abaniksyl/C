#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter First Number : ");
    scanf("%d",&num1);

    printf("Enter Second Number : ");
    scanf("%d",&num2);

    if(num1>num2)
    printf("Large Number = %d",num1);

    else if(num1<num2)
    printf("Learge Number = %d",num2);

    else
    printf("Numbers Are Equal = %d",num2);
    return 0;
}