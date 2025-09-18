#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void menu() {
    printf("\n--- Scientific Calculator ---\n");
    printf("1. Addition (a + b)\n");
    printf("2. Subtraction (a - b)\n");
    printf("3. Multiplication (a * b)\n");
    printf("4. Division (a / b)\n");
    printf("5. Power (a ^ b)\n");
    printf("6. Square Root (√a)\n");
    printf("7. Sine (sin a)\n");
    printf("8. Cosine (cos a)\n");
    printf("9. Tangent (tan a)\n");
    printf("10. Logarithm base 10 (log10 a)\n");
    printf("11. Natural Logarithm (ln a)\n");
    printf("0. Exit\n");
    printf("-----------------------------\n");
}

int main() {
    int choice;
    double a, b, result;

    do {
        menu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter a and b: ");
                scanf("%lf %lf", &a, &b);
                result = a + b;
                printf("Result: %.2lf\n", result);
                break;

            case 2:
                printf("Enter a and b: ");
                scanf("%lf %lf", &a, &b);
                result = a - b;
                printf("Result: %.2lf\n", result);
                break;

            case 3:
                printf("Enter a and b: ");
                scanf("%lf %lf", &a, &b);
                result = a * b;
                printf("Result: %.2lf\n", result);
                break;

            case 4:
                printf("Enter a and b: ");
                scanf("%lf %lf", &a, &b);
                if(b != 0)
                    result = a / b;
                else {
                    printf("Error: Division by zero!\n");
                    break;
                }
                printf("Result: %.2lf\n", result);
                break;

            case 5:
                printf("Enter base and exponent: ");
                scanf("%lf %lf", &a, &b);
                result = pow(a, b);
                printf("Result: %.2lf\n", result);
                break;

            case 6:
                printf("Enter a: ");
                scanf("%lf", &a);
                if(a >= 0)
                    result = sqrt(a);
                else {
                    printf("Error: Negative input for sqrt!\n");
                    break;
                }
                printf("Result: %.2lf\n", result);
                break;

            case 7:
                printf("Enter angle in degrees: ");
                scanf("%lf", &a);
                result = sin(a * 3.1416 / 180); // degrees to radians
                printf("Result: %.4lf\n", result);
                break;

            case 8:
                printf("Enter angle in degrees: ");
                scanf("%lf", &a);
                result = cos(a * 3.14 / 180);
                printf("Result: %.4lf\n", result);
                break;

            case 9:
                printf("Enter angle in degrees: ");
                scanf("%lf", &a);
                result = tan(a * 3.1416 / 180);
                printf("Result: %.4lf\n", result);
                break;

            case 10:
                printf("Enter a: ");
                scanf("%lf", &a);
                if(a > 0)
                    result = log10(a);
                else {
                    printf("Error: Logarithm of non-positive number!\n");
                    break;
                }
                printf("Result: %.4lf\n", result);
                break;

            case 11:
                printf("Enter a: ");
                scanf("%lf", &a);
                if(a > 0)
                    result = log(a); // natural log
                else {
                    printf("Error: Natural log of non-positive number!\n");
                    break;
                }
                printf("Result: %.4lf\n", result);
                break;

            case 0:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while(choice != 0);

    return 0;
}
