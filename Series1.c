#include <stdio.h>
int main()
{
    int n, sum = 0, i;
    printf("Enter The Last Number Of The Series : ");
    scanf("%d", &n);
    printf("1 + 2 + 3 + ......+ %d\n", n);

    for (i = 1; i <= n; i += 1)
    {
        sum = sum + i;
    }
    printf("Value Of The Series Is %d\n", sum);
    getchar();
}