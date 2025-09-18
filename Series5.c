#include <stdio.h>
int main()
{
    float i,sum=0,n;
    printf("Enter N : ");
    scanf("%f", &n);

    printf("1.5 + 2.5 + 3.5 + .....+%f\n", n);

    for ( i = 1.5; i <=n; i++)
    {
        sum = sum + i;
    }
    printf("%.2f\n", sum);
    
    getchar();
}