#include <stdio.h>
int main () {
    int n;
    printf("Enter a range =");
    scanf("%d",&n);
    int numbers[n];
        for (int index=0;index<n;index++) {
        printf("Enter numbers[%d] = ",index+1);
        scanf("%d",&numbers[index]);
        }
        int max=numbers[0];
        for (int index=0;index<n;index++){
            if(max<numbers[index]) {
                max=numbers[index];
            }
        }
        printf("Max number is %d",max);

    return 0;
}