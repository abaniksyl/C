#include <stdio.h>
int main () {
    int n,even,odd,evenCounter=0,oddCounter=0,zero=0;
    printf("Enter a range = ");
    scanf("%d",&n);
    int numbers[n];
    for (int index=0;index<n;index++){
        printf("numbers[%d] = ",index+1);
        scanf("%d",&numbers[index]);
        
        if (numbers[index]%2==0){
            evenCounter++;
        }
        else {
            oddCounter++;
        }
    }
    printf("\nEven Number = %d\n",evenCounter);
    printf("Odd Number = %d",oddCounter);

    return 0;
}