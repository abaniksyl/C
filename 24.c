#include <stdio.h>
int main () {
    char string[50];
    printf("Sentence : ");
    gets(string);
    strrev(string);
    printf("Reverse : %s",string);

    return 0;
}