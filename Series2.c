#include <stdio.h>
int main()
{
    int n, sum = 0, a = 1;
    printf("Enter The Last Number Of The Series : ");
    scanf("%d", &n);

    printf("1 + 2 + 3 + .....+%d\n", n);

    while (a <= n)
    {
        sum = sum + a;
        a = a + 1;
    }
    printf("Value Of The Series Is %d\n", sum);

    getchar();
}