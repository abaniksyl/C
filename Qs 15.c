#include <stdio.h>
int main()
{
    int num, i, sum = 0;
    printf("Enter a  number");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        sum = sum + i;
    }
    printf("Sum is %d\n", sum);

    for (i = num; i >= 1; i--)
    {
        printf("%d\n", i);
    }
    getchar();
}