#include<stdio.h>
int main(){
    int n,count=0;
    printf("Enter Any NUmber : ");
    scanf("%d",&n);

    while (n!=0){
        n= n/10;
        ++count;
    }
    printf("Total Number OF Digits : %d",count);
    return 0;
}