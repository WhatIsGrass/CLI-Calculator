#include "calculator.h"
#include <stdio.h>

double division(double a, double b) {
    if (b == 0) {
        printf("Error: Division by zero\n");
        return 0;
    }
    return a / b;
}
