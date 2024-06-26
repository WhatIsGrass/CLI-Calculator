import 'dart:io';

void getNumber(String userInput, Function callback) {
  if (userInput.toLowerCase() == "true") {
    stdout.write('Enter a float number: ');
    String? tmpPrompt = stdin.readLineSync();
    double? tmpFloat = double.tryParse(tmpPrompt!);
    if (tmpFloat != null) {
      callback(tmpFloat);
    } else {
      print('Invalid input. Please enter a valid float number.');
      getNumber(userInput, callback);
    }
  } else if (userInput.toLowerCase() == "false") {
    stdout.write('Enter an integer number: ');
    String? tmpPrompt = stdin.readLineSync();
    int? tmpInt = int.tryParse(tmpPrompt!);
    if (tmpInt != null) {
      callback(tmpInt);
    } else {
      print('Invalid input. Please enter a valid integer number.');
      getNumber(userInput, callback);
    }
  } else {
    print('Please enter a valid type (True/False).');
    stdout.write('Is your number a float? True/False: ');
    String? newUserInput = stdin.readLineSync();
    getNumber(newUserInput!, callback);
  }
}

double addition(double a, double b) => a + b;
double subtraction(double a, double b) => a - b;
double multiplication(double a, double b) => a * b;
double division(double a, double b) => b != 0 ? a / b : double.nan;
double modulo(double a, double b) => b != 0 ? a % b : double.nan;

void main() {
  stdout.write('Is your first number a float? True/False: ');
  String? promptFloatOne = stdin.readLineSync();
  getNumber(promptFloatOne!, (firstNumber) {
    stdout.write('Is your second number a float? True/False: ');
    String? promptFloatTwo = stdin.readLineSync();
    getNumber(promptFloatTwo!, (secondNumber) {
      stdout.write(
          'Enter the operation (addition, subtraction, multiplication, division, modulo): ');
      String? operation = stdin.readLineSync();

      double result;

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
          print('Invalid operation. Please enter a valid operation.');
          return;
      }

      if (result.isNaN) {
        print('Error: Division by zero is not allowed.');
      } else {
        print('Result: $result');
      }
    });
  });
}
