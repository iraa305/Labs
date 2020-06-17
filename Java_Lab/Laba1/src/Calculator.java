import java.util.Scanner;

public class Calculator {
    static Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        float a = getFloat();
        float b = getFloat();
        char operation = getOperation();
        float result = calc(a,b,operation);
        System.out.println("Результат операции: " + result);
    }

    public static float getFloat(){
        System.out.println("Введите число:");
        float num;
        if(scanner.hasNextFloat()){
            num = scanner.nextFloat();
        } else {
            System.out.println("Ошибка при вводе числа. Введите число сново.");
            scanner.next();
            num = getFloat();
        }
        return num;
    }

    public static char getOperation(){
        System.out.println("Введите операцию:");
        char operation;
        if(scanner.hasNext()){
            operation = scanner.next().charAt(0);
        } else {
            System.out.println("Ошибка при вводе операции. Повторите ввод.");
            scanner.next();
            operation = getOperation();
        }
        return operation;
    }

    public static float calc(float a, float b, char operation){
        float result;
        switch (operation){
            case '+':
                result = a + b;
                break;
            case '-':
                result = a - b;
                break;
            case '*':
                result = a * b;
                break;
            case '/':
                result = a / b;
                break;
            default:
                System.out.println("Операция неверна. Повторите ввод.");
                result = calc(a, b, getOperation());
        }
        return result;
    }
}
