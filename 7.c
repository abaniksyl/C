#include <stdio.h>
int main () {
    int num,temp,counter=0;
    printf("Enter a number : ");
    scanf("%d",&num);
    temp=num;
    while (temp!=0) {
        temp=temp/10;
        counter++;
    }
    printf("The %d number has %d digits",num,counter);
    return 0;
}