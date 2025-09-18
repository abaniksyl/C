#include <stdio.h>
int main()
{
    int numbers[5],sum=0;
    float average;

    for (int i=0; i<5; i++)
    {
        printf("numbers [%d] = ",i+1);
        scanf("%d",&numbers[i]);
    }
    
   for (int i =0; i<5; i++)
   {
     sum = sum + numbers[i];
   }
   printf("The sum IS %d\n",sum);
   average = (float)sum/5;
   printf("The ave IS %.2f",average);
   return 0;
}