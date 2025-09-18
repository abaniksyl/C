#include <stdio.h>
int main () {
    int n,target,counter=0;
    printf("Enter a range : ");
    scanf("%d",&n);
    int numbers[n];
    for(int index=0;index<n;index++) {
        printf("number [%d] = ",index+1);
        scanf("%d",&numbers[index]);
    }
    printf("\nEnter the number to check it's frequency : ");
    scanf("%d",&target);
    for (int index=0;index<n;index++) {
        if (numbers[index]==target) {
            counter++;
        }       
    printf("\n%d frequency --> %d\n",target,counter);

    }

    return 0;
}