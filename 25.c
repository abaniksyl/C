#include <stdio.h>
#include <string.h>
int main () {
    char string[100];
    char reverse[100];
    printf("Enter a word/sentence : ");
    gets(string);
    int i=0,len=0,j=0;
    while(string[i]!='\0') {
        i++;
        len++;
    }

    for (j=0,i=len-1;j<len;j++,i--) {
        reverse[j]=string[i];
    }
    reverse[j]='\0';
    int d=strcmp(string,reverse);
    if (d==0){
        printf("Palindrome");
    }
    else { 
        printf("Not Palindrome");
    }
    return 0;
}