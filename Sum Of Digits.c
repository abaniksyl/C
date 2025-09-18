#include<stdio.h>
int main(){
    int n,temp,r,sum=0;
    printf("enter any Number : ");
    scanf("%d",&n);

temp=n;
while (temp!=0)
{
    r = temp%10;
    sum = sum + r;
    temp = temp/10;
}
printf("Sum Of Digits Is : %d",sum);
getchar ();
}