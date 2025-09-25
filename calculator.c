#include <stdio.h>
#include <math.h>
#include "simple-func.h"

double power(double base, double exp);
double factorial(int n);
double sqrtFunc(double n);

int main() {
    double a, b, result;
    int choice, n;

    printf("Select operation:\n");
    printf("1: Add\n2: Subtract\n3: Multiply\n4: Divide\n5: Power\n6: Factorial\n7: Square Root\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);
            result = add(a, b);
            printf("Result: %.2lf\n", result);
            break;
        case 2:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);
            result = subtract(a, b);
            printf("Result: %.2lf\n", result);
            break;
        case 3:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);
            result = multiply(a, b);
            printf("Result: %.2lf\n", result);
            break;
        case 4:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);
            result = divide(a, b);
            printf("Result: %.2lf\n", result);
            break;
        case 5:
            printf("Enter base and exponent: ");
            scanf("%lf %lf", &a, &b);
            result = power(a, b);
            printf("Result: %.2lf\n", result);
            break;
        case 6:
            printf("Enter a number: ");
            scanf("%d", &n);
            result = factorial(n);
            printf("Result: %.0lf\n", result);
            break;
        case 7:
            printf("Enter a number: ");
            scanf("%lf", &a);
            result = sqrtFunc(a);
            printf("Result: %.2lf\n", result);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

// Function Definitions


double power(double base, double exp) {
    return pow(base, exp);
}

double factorial(int n) {
    double result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

double sqrtFunc(double n) {
    return sqrt(n);
}
