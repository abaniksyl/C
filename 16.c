#include <stdio.h>
int main () {
    int n;
    printf("Enter a range = ");
    scanf("%d",&n);
    int numbers[n];
    for (int index=0;index<n;index++) {
        printf("Enter %d no element = ",index+1);
        scanf("%d",&numbers[index]);
    }
    printf("Elements of array in reverse are = ");
    for (int index=n-1;index>=0;index--) {
        printf("%d ",numbers[index]);
    }

    return 0;
}