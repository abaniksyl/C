#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three number : ");
    scanf("%d %d %d",&a,&b,&c);

    if (a>b && a>c)
    printf("lager Number = %d\n",a);

    else if (b>a && b>c)
    printf("Lager number = %d\n",b);

    else if (c>a && c>b)
    printf("lager Number = %d",c);

    else
    printf("number are eequal");

    getchar ();
}
