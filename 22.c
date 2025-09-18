#include <stdio.h>
int main () {
    char string[30];
    printf("Sentence : ");
    gets(string);
    int i=0,len=0;
    while (string[i]!='\0') {
        i++;
        len++;
    }
    printf("Charecter =%d",len);
    return 0;
}