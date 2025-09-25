#include <stdio.h>
#include <math.h>

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
