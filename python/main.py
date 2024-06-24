import sys
from calculator import add, subtract, multiply, divide, modulus
from utils import display_result, display_error

def get_number(prompt, isFloat=False):
    while True:
        try:
            return float(input(prompt)) if isFloat else int(input(prompt))
        except ValueError:
            display_error(1) # The number is invalid

def get_boolean(prompt):
    while True:
        response = input(prompt).lower()
        if response in ['true', 'yes', 'oui']:
            return True
        elif response in ['false', 'no', 'non']:
            return False
        
        display_error(2) # The prompt isn't true or false

operationsType = {
    'addition': add,
    'subtract': subtract,
    'multiply': multiply,
    'divide': divide,
    'modulus': modulus
}

isFloatOne = get_boolean("Is your first number a float ? (True/False): ")
getFirstNumber = get_number("Enter your first number: ", isFloatOne)

isFloatSecond = get_boolean("Is your second number a float ? (True/False): ")
getSecondNumber = get_number("Enter your second number: ", isFloatSecond)

getOperationType = input("Enter the operation you want to perform (addition, subtract, multiply, divide, modulus): ")
operation = operationsType.get(getOperationType)

if(operation):
    result = operation(getFirstNumber, getSecondNumber)
    display_result(result)
else:
    display_error(3) # Operation input isn't valid/does not exist