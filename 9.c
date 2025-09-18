#include <stdio.h>
int main () {
    int rem,num,temp,sum=0;
    printf("Enter a number : ");
    scanf("%d",&num);
    temp=num;
    while(temp!=0) {
        rem=temp%10;
        if(rem%2==0){
            sum=sum+rem;
        }
        temp=temp/10;
    }
    printf("%d even number is = %d ",num,sum);
}