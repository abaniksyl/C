#include <stdio.h>
int main () {
    int num;
    printf("Enter a range : ");
    scanf("%d",&num);
    int original[num];
    int copy[num];
    for (int index=0;index<num;index++){
        printf("number [%d]= ",index+1);
        scanf("%d",&original[index]);
    }
    printf("\nCopying Elements...\n");
    for (int index=0;index<num;index++) {
        copy[index]=original[index];
    }
    printf("\noriginal[%d]      -->         copy[%d]\n",num,num);
    for (int index=0;index<num;index++) {
        printf("\n%5d\t\t-->\t%8d\n",original[index],copy[index]);
    }
    
    return 0;
}