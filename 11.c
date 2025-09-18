#include <stdio.h>
int main () {
    int numbers[10];
    for (int index=0;index<10;index++) {
        printf("Enter numbers[%d] = ",index+1);
        scanf("%d",&numbers[index]);
    } 
    for (int index=0; index<10;index++) {
        printf("%d ",numbers[index]);
    }

    return 0;
}