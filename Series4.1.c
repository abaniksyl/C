#include <stdio.h>
int main()
{
    int n,i;
    printf("Enter N : ");
    scanf("%d", &n);

    printf("1 + 2 + 3 + .....+%d\n", n);

    for ( i = 2; i <=n; i=i+2)
    {
        printf("%d\n", i);
    }
    
    getchar();
}