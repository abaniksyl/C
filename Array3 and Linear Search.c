#include <stdio.h>
int main()
{
    int num[10], tgt, i, found = -1;

    for (i = 0; i < 10; i++)
    {
        printf("Enter The Number %d : ", i + 1);
        scanf("%d", &num[i]);
    }
    printf("Enter The Target Number : ");
    scanf("%d", &tgt);
    for (i = 0; i < 10; i++)
    {
        if (num[i] == tgt)
        {
            found = i;
            break;
        }
    }
    if (found == -1)
    {
        printf("%d Is Not Found In The Array", tgt);
    }
    else
    {
        printf("%d Is Found In Position %d", tgt, found + 1);
    }
    return 0;
}