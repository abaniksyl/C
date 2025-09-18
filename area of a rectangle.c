#include<stdio.h>
int main ()

{
    double lenth,width,area;
    printf("enter the value : ");
    scanf("%lf %lf",&lenth,&width);

    area = lenth * width;
    printf("Area = %.2lf\n",area);

    getch();
}
