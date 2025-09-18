#include <stdio.h>
int main () {
    int n;
    printf("Enter a range : ");
    scanf("%d",&n);
    int numbers[n];
    for (int index=0;index<n;index++) {
        printf("Enter [%d] : ",index+1);
        scanf("%d",&numbers[index]);
    }
    printf("Number : ");
    for (int index=0;index<n;index++) {
        for (int i=index+1;i<n;i++) {
           if (numbers[index]==numbers[i]) {
                numbers[i]=-1;
           } 
        }
        printf(" %d ",numbers[index]);
    }


    return 0;
}