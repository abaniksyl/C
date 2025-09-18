#include <stdio.h>
int main () {
    int n,sum=0;
    float avg;
    printf("Enter a range : ");
    scanf("%d",&n);
    int numbers[n];
    for (int index=0;index<n;index++) {
        printf("%d number = ",index+1);
        scanf("%d",&numbers[index]);
        sum=sum+numbers[index];
    }
    avg=sum/(float)n;
    printf("Average numbers is = %.2f",avg);

    return 0;
}