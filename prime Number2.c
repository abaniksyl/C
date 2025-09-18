#include <stdio.h>
#include <ctype.h>
#include <math.h>
int main()
{

    int num, count = 0, NumebrofPrimeNumbers = 0,
             sumofPrimeNumbers = 0, StartingNumber, EndingNumber;

    printf("Enter StartingNumber : ");
    scanf("%d", &StartingNumber);
    printf("Enter EndingNumber : ");
    scanf("%d", &EndingNumber);

    for (num = StartingNumber; num <= EndingNumber; num++)
    {
        count = 0;
        if (num <= 1)
        {
            count = 1;
        }

        else
        {
            for (int i = 2; i <= sqrt(num); i++)
            {

                if (num % i == 0)
                {
                    count = 1;
                    break;
                }
            }
        }

        if (count == 0)
        {
            printf("%d\n", num);
            NumebrofPrimeNumbers++;
            sumofPrimeNumbers = sumofPrimeNumbers + num;
        }
    }
    printf("Numebr of Prime Numbers : %d\n",
           NumebrofPrimeNumbers);
    printf("sum of Prime Numbers : %d\n",
           sumofPrimeNumbers);

    getchar();
}