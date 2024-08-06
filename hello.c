#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Function prototypes
double add(double x, double y);
double subtract(double x, double y);
double multiply(double x, double y);
double divide(double x, double y);
double reciprocal(double x);
double square(double x);
double power(double x, double y);
double factorial(double x);

int main() {
    int op = 0;
    double x, y, result;
    do {
        printf("Please make a selection:\n");
        printf("type corresponding number: '1. +', '2. -', '3. *', '4. /', '5. 1/X', '6. X^2', '7. X^Y', '8. N!', '9. quit'\n");
        scanf("%d", &op);

        switch(op) {
            case 1:
                printf("Enter first number:\n");
                scanf("%lf", &x);
                printf("Enter second number:\n");
                scanf("%lf", &y);
                result = add(x, y);
                printf("%.1lf + %.1lf = %.1lf\n", x, y, result);
                break;
            case 2:
                printf("Enter first number:\n");
                scanf("%lf", &x);
                printf("Enter second number:\n");
                scanf("%lf", &y);
                result = subtract(x, y);
                printf("%.1lf - %.1lf = %.1lf\n", x, y, result);
                break;
            case 3:
                printf("Enter first number:\n");
                scanf("%lf", &x);
                printf("Enter second number:\n");
                scanf("%lf", &y);
                result = multiply(x, y);
                printf("%.1lf * %.1lf = %.1lf\n", x, y, result);
                break;
            case 4:
                printf("Enter first number:\n");
                scanf("%lf", &x);
                printf("Enter second number:\n");
                scanf("%lf", &y);
                if (y == 0) {
                    printf("Error: Division by zero is not allowed.\n");
                } else {
                    result = divide(x, y);
                    printf("%.1lf / %.1lf = %.1lf\n", x, y, result);
                }
                break;
            case 5:
                printf("Enter a number:\n");
                scanf("%lf", &x);
                if (x == 0) {
                    printf("Error: Division by zero is not allowed.\n");
                } else {
                    result = reciprocal(x);
                    printf("1 / %.1lf = %.1lf\n", x, result);
                }
                break;
            case 6:
                printf("Enter a number:\n");
                scanf("%lf", &x);
                result = square(x);
                printf("%.1lf ^ 2 = %.1lf\n", x, result);
                break;
            case 7:
                printf("Enter the base number:\n");
                scanf("%lf", &x);
                printf("Enter the exponent number:\n");
                scanf("%lf", &y);
                result = power(x, y);
                printf("%.1lf ^ %.1lf = %.1lf\n", x, y, result);
                break;
            case 8:
                printf("Enter a number for factorial:\n");
                scanf("%lf", &x);
                if (x < 0) {
                    printf("Error: Factorial of a negative number is not defined.\n");
                } else {
                    result = factorial(x);
                    printf("Factorial of %.1lf is %.1lf\n", x, result);
                }
                break;
            case 9:
                printf("Exiting...\n");
                break;
            default:
                printf("Not recognized. Please try again.\n");
                break;
        }
    } while (op != 9);

    return 0;
}

// Function definitions
double add(double x, double y) {
    return x + y;
}

double subtract(double x, double y) {
    return x - y;
}

double multiply(double x, double y) {
    return x * y;
}

double divide(double x, double y) {
    return x / y;
}

double reciprocal(double x) {
    return 1 / x;
}

double square(double x) {
    return x * x;
}

double power(double x, double y) {
    return pow(x, y);
}

double factorial(double x) {
    double fact = 1;
    for (int i = 1; i <= x; ++i) {
        fact *= i;
    }
    return fact;
}

 





