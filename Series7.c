#include <stdio.h>
int main()
{
    double n, sum = 0, i;
    printf("Enter N : ");
    scanf("%lf", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + (1 / i);

        if (i == 1)
            printf("\n1 + ");
        else if (i == n)
            printf("(1/%.2lf)", i);
        else
            printf("(1/%.2lf)+", i);
    }

    printf("\nValue = %.2lf\n", sum);
    getchar();
}