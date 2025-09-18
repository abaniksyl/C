#include <stdio.h>
int main()
{
    int n, odd = 0, even = 0, i;
    printf("Enter The Last Term : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            even = even + i;
        else
            odd = odd + i;
    }
    printf("Sum = %d\n",odd-even);

    getchar();
}