#include <stdio.h>
int main () {
    int range;
    printf("Enter a range : ");
    scanf("%d",&range);
    int numbers[range];
    for (int index=0;index<range;index++) {
        printf("number[%d] = ",index+1);
        scanf("%d",&numbers[index]);
    }
    int small=numbers[0];
    for (int index=0;index<range;index++) {
        if (small>numbers[index]) {
            small=numbers[index];
        }
    }
    printf("Smallest number is = %d",small);

    return 0;
}