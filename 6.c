#include <stdio.h>
int main () {
    int num,reverse,rem,sum=0;
    printf("Enter a number : ");
    scanf("%d",&num);
    reverse=num;
    while (reverse!=0){
        rem=reverse%10;
        sum=sum*10+rem;
        reverse=reverse/10;
    }
    printf("Reverse of %d number is = %d ",num,sum);

    return 0;
}