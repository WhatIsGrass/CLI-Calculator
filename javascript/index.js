const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

function getNumber(userInput, callback) {
    if (userInput === "True") {
        rl.question('Enter a float number: ', (tmpPrompt) => {
            let tmpFloat = parseFloat(tmpPrompt);
            if (!isNaN(tmpFloat)) {
                callback(tmpFloat);
            } else {
                console.log('Invalid input. Please enter a valid float number.');
                getNumber(userInput, callback);
            }
        });
    } else if (userInput === "False") {
        rl.question('Enter an integer number: ', (tmpPrompt) => {
            let tmpInt = parseInt(tmpPrompt);
            if (!isNaN(tmpInt)) {
                callback(tmpInt);
            } else {
                console.log('Invalid input. Please enter a valid integer number.');
                getNumber(userInput, callback);
            }
        });
    } else {
        console.log('Please enter a valid type (True/False).');
        getNumber(userInput, callback);
    }
}

function addition(a, b) {
    return a + b;
}

function subtraction(a, b) {
    return a - b;
}

function multiplication(a, b) {
    return a * b;
}

function division(a, b) {
    if (b !== 0) {
        return a / b;
    } else {
        return "Error: Division by zero is not allowed.";
    }
}

function modulo(a, b) {
    if (b !== 0) {
        return a % b;
    } else {
        return "Error: Modulo by zero is not allowed.";
    }
}

rl.question('Is your first number a float? True/False: ', (promptFloatOne) => {
    getNumber(promptFloatOne, (firstNumber) => {
        rl.question('Is your second number a float? True/False: ', (promptFloatTwo) => {
            getNumber(promptFloatTwo, (secondNumber) => {
                rl.question('Enter the operation (addition, subtraction, multiplication, division, modulo): ', (operation) => {
                    let result;
                    switch (operation) {
                        case 'addition':
                            result = addition(firstNumber, secondNumber);
                            break;
                        case 'subtraction':
                            result = subtraction(firstNumber, secondNumber);
                            break;
                        case 'multiplication':
                            result = multiplication(firstNumber, secondNumber);
                            break;
                        case 'division':
                            result = division(firstNumber, secondNumber);
                            break;
                        case 'modulo':
                            result = modulo(firstNumber, secondNumber);
                            break;
                        default:
                            console.log('Invalid operation. Please enter a valid operation.');
                            rl.close();
                            return;
                    }
                    console.log(`Result: ${result}`);
                    rl.close();
                });
            });
        });
    });
});
