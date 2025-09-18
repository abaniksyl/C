#include <stdio.h>
int main()
{
    int numbers[] = {100,20,40,65,-5}, maxium, minimum;

    maxium = numbers[0];
    minimum = numbers[0];
    for (int i = 1; i < 5; i++)
    {
        if (maxium < numbers[i])
        {
            maxium = numbers[i];
        }
        if (minimum > numbers[i])
        {
            minimum = numbers[i];
        }
    }
    printf("Maxium Number Is %d\n", maxium);
    printf("Minimum Number Is %d", minimum);

    return 0;
}