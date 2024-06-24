def add(numberOne, numberTwo):
    return numberOne + numberTwo

def subtract(numberOne, numberTwo):
    return numberOne - numberTwo

def multiply(numberOne, numberTwo):
    return numberOne * numberTwo

def divide(numberOne, numberTwo):
    if(numberTwo == 0):
        raise ValueError("Impossible to divide by 0")
    return numberOne / numberTwo

def modulo(numberOne, numberTwo):
    if(numberTwo == 0):
        raise ValueError("Impossible to modulo by 0")
    return numberOne % numberTwo