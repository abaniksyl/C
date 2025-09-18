#include<stdio.h>
int main ()
{
    int i=1;
    
    print : //label
    printf("%d\t",i);
    i++;

    if(i<100)
    goto print; //label calling here
}