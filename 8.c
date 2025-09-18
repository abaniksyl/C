#include <stdio.h>
int main() {
    int num,temp,sum=0,rem;
    printf("Enter a number to check if it's palindrome : ");
    scanf("%d",&num);
    temp=num;
    if (num<0)
        printf("Enter a valid number");
    else {
    while (temp!=0) {
        rem=temp%10;
        sum=sum*10+rem;
        temp=temp/10;
    }
    if (sum==num)
        printf("%d is palindrome",num);
    else 
        printf("%d is not a palindrome",num);
    }
}
