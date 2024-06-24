def display_error(errorCode):
    errorMessages = {
        1: "Invalid input. You didn't enter a valid number",
        2: "Invalid input. You didn't input 'True' or 'False'",
        3: "Invalid input. You didn't input: addition, subtract, multiply, divide, modulo"
    }
    print("Error: ", errorMessages.get(errorCode, "NoNe defined error, create an issue on the repository"))


def display_result(result):
    print("Result: ", result)