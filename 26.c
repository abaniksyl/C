#include <stdio.h>
int main() {
    char string[100];
    printf("Enter a sentence : ");
    gets(string);

    printf("lowarcase to uppercase : ");
    strupr(string);
    printf("%s",string);

    return 0;
}