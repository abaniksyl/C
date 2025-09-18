#include <stdio.h>
int main () {
    char string[100];
    printf("Enter a string : ");
    gets(string);
    int i=0;
    while(string[i]!='\0') {
        if (string[i]==' ') {
            string[i]='-';
        }
        i++;
    }
    printf("Modified string : %s",string);

    return 0;
}