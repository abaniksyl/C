#include <stdio.h>
int main()
{
    int n,i;
    printf("Enter N : ");
    scanf("%d", &n);

    printf("1 + 2 + 3 + .....+%d\n", n);

    for ( i = 1; i <=n; i++)
    {
        printf("%d\n", i);
    }
    
    getchar();
}