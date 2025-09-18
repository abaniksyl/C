#include <stdio.h>
int main () {
    int mult,num;
    printf("Enter a number for multiplication table : ");
    scanf("%d",&num);
    for (int i=1;i<=10;i++){
        mult = num * i;
        printf("%d x %d = %d\n",num,i,mult);
    }

    return 0;
}