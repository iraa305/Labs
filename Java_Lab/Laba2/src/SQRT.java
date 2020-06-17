import java.util.Scanner;

public class SQRT {
    static Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        System.out.println("Введите число: ");
         double number  = scanner.nextDouble();
            double t;
            double sqrt = number / 2;
            do {
                t = sqrt;
                sqrt = (t + (number / t)) / 2;
            } while ((t - sqrt) != 0);
        System.out.println("Результат: " + sqrt);
        }
    }