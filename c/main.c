#include <stdio.h>
#include <string.h>
#include "calculator.h"

void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main(){
    char firstFloat[10], secondFloat[10];
    float firstFloatNumber, secondFloatNumber;
    int firstIntNumber, secondIntNumber;
    double result = 0.0;

    printf("Is the first number a float? (True/False): ");
    scanf("%9s", firstFloat);
    clearInputBuffer();

    if (strcmp(firstFloat, "True") == 0) {
        printf("Enter the first float number: ");
        if (scanf("%f", &firstFloatNumber) != 1) {
            printf("Invalid input for float number.\n");
            return 1;
        }
    } else if (strcmp(firstFloat, "False") == 0) {
        printf("Enter the first integer number: ");
        if (scanf("%d", &firstIntNumber) != 1) {
            printf("Invalid input for integer number.\n");
            return 1;
        }
    } else {
        printf("Invalid input for first number type.\n");
        return 1;
    }
    clearInputBuffer();

    printf("Is the second number a float? (True/False): ");
    scanf("%9s", secondFloat);
    clearInputBuffer();

    if (strcmp(secondFloat, "True") == 0) {
        printf("Enter the second float number: ");
        if (scanf("%f", &secondFloatNumber) != 1) {
            printf("Invalid input for float number.\n");
            return 1;
        }
    } else if (strcmp(secondFloat, "False") == 0) {
        printf("Enter the second integer number: ");
        if (scanf("%d", &secondIntNumber) != 1) {
            printf("Invalid input for integer number.\n");
            return 1;
        }
    } else {
        printf("Invalid input for second number type.\n");
        return 1;
    }
    clearInputBuffer();

    int operation;
    printf("Choose an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("Enter your choice (1-5): ");
    if (scanf("%d", &operation) != 1) {
        printf("Invalid input for operation.\n");
        return 1;
    }
    clearInputBuffer();

    switch (operation) {
        case 1:
            if (strcmp(firstFloat, "True") == 0 && strcmp(secondFloat, "True") == 0) {
                result = addition(firstFloatNumber, secondFloatNumber);
            } else if (strcmp(firstFloat, "True") == 0) {
                result = addition(firstFloatNumber, (float)secondIntNumber);
            } else if (strcmp(secondFloat, "True") == 0) {
                result = addition((float)firstIntNumber, secondFloatNumber);
            } else {
                result = addition((float)firstIntNumber, (float)secondIntNumber);
            }
            break;
        case 2:
            if (strcmp(firstFloat, "True") == 0 && strcmp(secondFloat, "True") == 0) {
                result = subtraction(firstFloatNumber, secondFloatNumber);
            } else if (strcmp(firstFloat, "True") == 0) {
                result = subtraction(firstFloatNumber, (float)secondIntNumber);
            } else if (strcmp(secondFloat, "True") == 0) {
                result = subtraction((float)firstIntNumber, secondFloatNumber);
            } else {
                result = subtraction((float)firstIntNumber, (float)secondIntNumber);
            }
            break;
        case 3:
            if (strcmp(firstFloat, "True") == 0 && strcmp(secondFloat, "True") == 0) {
                result = multiplication(firstFloatNumber, secondFloatNumber);
            } else if (strcmp(firstFloat, "True") == 0) {
                result = multiplication(firstFloatNumber, (float)secondIntNumber);
            } else if (strcmp(secondFloat, "True") == 0) {
                result = multiplication((float)firstIntNumber, secondFloatNumber);
            } else {
                result = multiplication((float)firstIntNumber, (float)secondIntNumber);
            }
            break;
        case 4:
            if (strcmp(firstFloat, "True") == 0 && strcmp(secondFloat, "True") == 0 && secondFloatNumber != 0) {
                result = division(firstFloatNumber, secondFloatNumber);
            } else if (strcmp(firstFloat, "True") == 0 && secondIntNumber != 0) {
                result = division(firstFloatNumber, (float)secondIntNumber);
            } else if (strcmp(secondFloat, "True") == 0 && secondFloatNumber != 0) {
                result = division((float)firstIntNumber, secondFloatNumber);
            } else if (secondIntNumber != 0) {
                result = division((float)firstIntNumber, (float)secondIntNumber);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        case 5:
            if (strcmp(firstFloat, "True") == 0 && strcmp(secondFloat, "True") == 0 && secondFloatNumber != 0) {
                result = modulus(firstFloatNumber, secondFloatNumber);
            } else if (strcmp(firstFloat, "True") == 0 && secondIntNumber != 0) {
                result = modulus(firstFloatNumber, (float)secondIntNumber);
            } else if (strcmp(secondFloat, "True") == 0 && secondFloatNumber != 0) {
                result = modulus((float)firstIntNumber, secondFloatNumber);
            } else if (secondIntNumber != 0) {
                result = modulus((float)firstIntNumber, (float)secondIntNumber);
            } else {
                printf("Error: Modulus by zero\n");
            }
            break;
        default:
            printf("Invalid choice\n");
            return 1;
    }

    printf("Result: %.2f\n", result);

    return 0;
}
