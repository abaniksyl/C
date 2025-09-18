//Count the number of digits, letters, and special characters.
#include <stdio.h>
int main () {
    char string[100];
    printf("Enter sentence : ");
    gets(string);
    int i=0,digits=0,letter=0,special=0;
    while (string[i]!='\0') {
        if (string[i]>='a'&& string[i]<='z' || string[i]>='A'&&string[i]<='Z') {
            letter++;
        }
        else if (string[i]>='0'&&string[i]<='9') {
            digits++;
        }
        else if (string[i]==' ') {
            int space =0;
            space++;
        }
        else {
            special++;
        }
        i++;
    }
    printf("Number of letter : %d\n",letter);
    printf("Number of digits : %d\n",digits);
    printf("Number of special character : %d\n",special);

    return 0;
}