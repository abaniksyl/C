#include <stdio.h>
int main()
{
    int n, sum = 0,i;
    printf("Enter N : ");
    scanf("%d", &n);

    printf("1 + 2 + 3 + ..... + %d\n", n);

    for ( i = 1; i <=n; i++)
    {
        sum = sum + i*i;
    }
    printf("%d\n", sum);
    getchar();
}