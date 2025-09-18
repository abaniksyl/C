//1.2+2.3+3.4+5.6.....n
#include <stdio.h>
int main()
{
    int n, n2, sum = 0, a = 1, b = 2;
    printf("Enter n and n2 : ");
    scanf("%d %d", &n,&n2);

    printf("1.2 + 2.3 + 3.4 + ..... + %d.%d\n", n,n2);

    while (a <= n && b <= n2)
    {
        sum = sum + a * b;
        a = a + 1;
        b = b + 1;
    }
    printf("Value Of The Series Is %d\n", sum);

    getchar();
}