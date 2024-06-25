double addition(double firstNumber, double secondNumber){
    return firstNumber + secondNumber;
}

double  subtraction(double firstNumber, double secondNumber){
    return firstNumber - secondNumber;
}

double multiplication(double firstNumber, double secondNumber){
    return firstNumber * secondNumber;
}

double division(double firstNumber, double secondNumber){
    if(secondNumber == 0){
        printf("Error! Division by zero is not allowed.");
        return 0;
    }
    return firstNumber / secondNumber;
}

double modulus(double firstNumber, double secondNumber){
    if(secondNumber == 0){
        printf("Error! Division by zero is not allowed.");
        return 0;
    }
    return (int)firstNumber % (int)secondNumber;
}