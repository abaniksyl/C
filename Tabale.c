#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
// {
//     int num, i;
//     printf("Enter Any Number : ");
//     scanf("%d", &num);
//     for ( i = 0; i <=10; i++)
//     {
//         printf("%d x %d = %d\n", num, i, num * i);
//     }
//     return 0;
// }
// {
//     int num,i,count=0;
//     printf("Enter Any Number : ");
//     scanf("%d", &num);
//     if (num<=1)
//     {
//         count=1;
//     }

//     for ( i = 2; i < num; i++)
//     {
//          if (num % i == 0)
//          {
//              count = 1;
//          }

//     }

//     if (count==0)
//     {
//         printf("%d is primr number", num);
//     }
//     else
//     {
//         printf("%d is not a prime number",num);
//     }

// }
// {
//     int n, i;
//     double sum = 0;
//     scanf("%d", &n);
//     int a[n];
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//         sum += a[i];
//     }
//     printf("Average=%.2lf\n", sum / n);
//     return 0;
// }
// {
//     int n, i, c = 0;
//     scanf("%d", &n);
//     int a[n];
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//         if (a[i] > 10)
//             c++;
//     }
//     printf("Count=%d\n", c);
//     return 0;
// }

// int fact(int n)
// {
//     if (n == 0)
//         return 1;
//     return n * fact(n - 1);
// }
// int main()
// {
//     printf("%d\n", fact(5));
//     return 0;
// }

// {
//     char s[100];
//     int v = 0, c = 0, i;
//     gets(s);
//     for (i = 0; s[i]; i++)
//     {
//         char ch = tolower(s[i]);
//         if (isalpha(ch))
//         {
//             if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
//                 v++;
//             else
//                 c++;
//         }
//     }
//     printf("Vowels=%d Consonants=%d\n", v, c);
//     return 0;
// }

// {
//     char s[100];
//     int i, len;
//     gets(s);
//     len = strlen(s);
//     for (i = len - 1; i >= 0; i--)
//         printf("%c", s[i]);
//     return 0;
// }

// {
//     char s[100];
//     int i = 0;
//     gets(s);
//     while (s[i])
//         i++;
//     printf("Length=%d\n", i);
//     return 0;
// }


{
    int n, a = 0, b = 1, c, i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}
