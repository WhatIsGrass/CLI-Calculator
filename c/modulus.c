#include "calculator.h"
#include <stdio.h>

int modulus(int a, int b) {
    if (b == 0) {
        printf("Error: Modulus by zero\n");
        return 0;
    }
    return a % b;
}
