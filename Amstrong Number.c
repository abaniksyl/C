#include <stdio.h>

int main() {
    int initialnum, finalnum, i, temp, r, sum;

    printf("Enter starting number: ");
    scanf("%d", &initialnum);
    printf("Enter ending number: ");
    scanf("%d", &finalnum);

    for (i = initialnum; i <= finalnum; i++) {
        temp = i;
        sum = 0;  // reset sum for every number

        while (temp != 0) {
            r = temp % 10;
            sum += r * r * r;
            temp /= 10;
        }

        if (sum == i) {
            printf("%d\n", i);  // Armstrong number
        }
    }

    return 0;
}
