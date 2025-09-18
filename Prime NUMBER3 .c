#include <stdio.h>
int main()
{

    while (1)
    {
        int num, i, a = 1;
        printf("\nenter a number : ");
        scanf("%d", &num);

        if (num <= 1)
        {
            a = 0;
        }
        else
        {
            for (i = 2; i < num; i++)
            {
                {
                    if (num % i == 0)
                    {
                        a = 0;
                        break;
                    }
                }
            }
            if (a == 1)
            {
                printf("%d is a prime Number\n", num);
            }
            else
            {
                printf("%d is Not a Prime Number\n", num);
            }
        }
    }
    return 0;
}