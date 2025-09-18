//Count how many words are in a string.
#include <stdio.h>
#include <string.h>
int main () {
    char string[100];
    printf("Enter a sentence : ");
    gets(string);
    int i=0,count=1;
    while(string[i]!='\0') {
        if (string[i]==' '){
            count++;
        }
        i++;
    }
    printf("Word number = %d",count);


    return 0;
}