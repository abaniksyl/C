#include <stdio.h>
int main () {
    char str[100];
    int i,c[256]={0};
    printf("Enter a string : ");
    gets(str);

    for (i=0;str[i]!='\0';i++) {
        c[str[i]]++;
    }
    for (i=0;i<256;i++) {
        if (c[i]!=0){
            printf("\n%c ----> %d times",i,c[i]);
        }
    }


    return 0;
}