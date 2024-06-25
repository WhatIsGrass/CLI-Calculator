import java.util.Scanner;

public class Main {
    static double add(double num1, double num2) {
        return num1 + num2;
    }

    static double subtract(double num1, double num2) {
        return num1 - num2;
    }

    static double multiply(double num1, double num2) {
        return num1 * num2;
    }

    static double divide(double num1, double num2) {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            System.out.println("Error: Division by zero is not allowed.");
            return Double.NaN;
        }
    }

    static double modulus(double num1, double num2) {
        if (num2 != 0) {
            return num1 % num2;
        } else {
            System.out.println("Error: Modulus by zero is not allowed.");
            return Double.NaN;
        }
    }

    static double getNumber(Scanner scanner, String floatOrNot) {
        if (floatOrNot.equals("True")) {
            System.out.println("Enter your float number: ");
            double number = scanner.nextDouble();
            scanner.nextLine();
            System.out.println("You entered the float: " + number);
            return number;
        } else if (floatOrNot.equals("False")) {
            System.out.println("Enter your integer number: ");
            double number = scanner.nextInt();
            scanner.nextLine();
            System.out.println("You entered the integer: " + number);
            return number;
        } else {
            System.out.println("Invalid, you didn't write \"True\" or \"False\"");
            return 0;
        }
    }
    
    public static void main(String[] args) {
        Scanner userInput = new Scanner(System.in);
        System.out.println("Is your first number a float? True/False");
        String firstFloatOrNot = userInput.nextLine();
        double firstNumber = getNumber(userInput, firstFloatOrNot);

        System.out.println("Is your second number a float? True/False");
        String secondFloatOrNot = userInput.nextLine();
        double secondNumber = getNumber(userInput, secondFloatOrNot);

        System.out.println("Enter the operation you want to perform (+, -, *, /, %): ");
        String operation = userInput.nextLine();

        double result = 0;
        switch (operation) {
            case "+":
                result = add(firstNumber, secondNumber);
                break;
            case "-":
                result = subtract(firstNumber, secondNumber);
                break;
            case "*":
                result = multiply(firstNumber, secondNumber);
                break;
            case "/":
                result = divide(firstNumber, secondNumber);
                break;
            case "%":
                result = modulus(firstNumber, secondNumber);
                break;
            default:
                System.out.println("Invalid operation. Please enter +, -, *, /, or %.");
                return;
        }

        System.out.println("Result: " + result);
        userInput.close();
    }
}
