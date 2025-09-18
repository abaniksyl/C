#include <stdio.h>
int main () {
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int numbers[n];
    if (n<2) 
        printf("Atleast 2 number is needed");
    else {
    for (int index=0;index<n;index++) {
        printf("[%d] number : ",index+1);
        scanf("%d",&numbers[index]);
    }
    int secondLargest,firstLargest;
    if (numbers[0]<numbers[1]) {
        firstLargest=numbers[1];
        secondLargest=numbers[0];
    }
    else {
        firstLargest=numbers[0];
        secondLargest=numbers[1];
    }
    for (int index=0;index<n;index++){
        if(firstLargest<numbers[index]) {
            secondLargest=firstLargest;
            firstLargest=numbers[index];
        }
        else if (numbers[index]<firstLargest && numbers[index]>secondLargest) {
            secondLargest=numbers[index];
        }
    }
    printf("2nd Largest number is = %d",secondLargest);
    }
    
    return 0;
}