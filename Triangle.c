
// write a program that calcultes the area of a triangel
#include<stdio.h>
int main()
{
    float base,height,area;
    printf("Base = ");
    scanf("%f",&base);

    printf("Height = ");
    scanf("%f",&height);

    area = 1/(float)2 * base *height;

    printf("Area = %.2f\n",area);

    getch();
}
