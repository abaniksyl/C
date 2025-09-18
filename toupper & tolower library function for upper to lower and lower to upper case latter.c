#include<stdio.h>
int main()

{

    char lower,upper;

    printf("enter Any uppercase letter : ");
    scanf("%c",&upper);

    lower = tolower(upper);
    printf("lowerercase letter = %c",lower);

    getch();



}
