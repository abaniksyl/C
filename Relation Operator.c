/* Relational Operator ( <,<=,>,>=,==,!= )
control statement = Loop Control Staement, conditional conotrol satement ( if-eles) switch
Today we will try conditional control statement
*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter an Interger : ");
    scanf("%d",&num);

    if(num%2==0)
       printf("Even\n");
    else
      printf("Odd\n");

    getchar();
    
}