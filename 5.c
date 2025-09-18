#include <stdio.h>
int main () {
    int fact,number;
    printf("Enter a number : ");
    scanf("%d",&number);
    fact=number;
    for (int i=1;i<number;i++){
        fact=fact*i;
    }
    printf("Factorial of %d is %d",number,fact);

    return 0;
}