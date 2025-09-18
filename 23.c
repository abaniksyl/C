#include <stdio.h>
int main () {
    char string[40];
    printf("Sentence : ");
    gets(string);
    int i=0,vowel=0;
    while (string[i]!='\0') {
        if (string[i]=='a' || string[i]=='e' || string[i]=='i' || string[i]=='o' || string[i]=='u') {
            vowel++;
    }
    i++;
}
    printf("Vowel = %d",vowel);
    return 0;
}