#include <stdio.h>
#include <string.h>
#include "calculator.h"

int main(){
    char firstFloat[10], secondFloat[10];
    float firstFloatNumber, secondFloatNumber;
    int firstIntNumber, secondIntNumber;

    printf("Is the first number a float? (True/False): ");
    scanf("%s", firstFloat);
    if (strcmp(firstFloat, "True") == 0) {
        printf("Enter the first float number: ");
        scanf("%f", &firstFloatNumber);
    } else {
        printf("Enter the first integer number: ");
        scanf("%d", &firstIntNumber);
    }

    printf("Is the second number a float? (True/False): ");
    scanf("%s", secondFloat);
    if (strcmp(secondFloat, "True") == 0) {
        printf("Enter the second float number: ");
        scanf("%f", &secondFloatNumber);
    } else {
        printf("Enter the second integer number: ");
        scanf("%d", &secondIntNumber);
    }

    int operation;
    printf("Choose an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &operation);
    
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
            if (strcmp(firstFloat, "True") == 0 && strcmp(secondFloat, "True") == 0) {
                result = division(firstFloatNumber, secondFloatNumber);
            } else if (strcmp(firstFloat, "True") == 0) {
                result = division(firstFloatNumber, (float)secondIntNumber);
            } else if (strcmp(secondFloat, "True") == 0) {
                result = division((float)firstIntNumber, secondFloatNumber);
            } else {
                result = division((float)firstIntNumber, (float)secondIntNumber);
            }
            break;
        case 5:
            if (strcmp(firstFloat, "True") == 0 && strcmp(secondFloat, "True") == 0) {
                result = modulus(firstFloatNumber, secondFloatNumber);
            } else if (strcmp(firstFloat, "True") == 0) {
                result = modulus(firstFloatNumber, (float)secondIntNumber);
            } else if (strcmp(secondFloat, "True") == 0) {
                result = modulus((float)firstIntNumber, secondFloatNumber);
            } else {
                result = modulus((float)firstIntNumber, (float)secondIntNumber);
            }
            break;
        default:
            printf("Invalid choice\n");
            return 1;
    }
}