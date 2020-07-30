import java.util.Scanner;

/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class URI_2342 {

    public static void main(String[] args) {
        try (Scanner input = new Scanner(System.in)) {
            int total = input.nextInt();
            int a = input.nextInt();
            char ch = input.next().charAt(0);
            int b = input.nextInt();

            if (ch == '+') {
                System.out.printf(((a + b) <= total) ? "OK" : "OVERFLOW");
            } else {
                System.out.printf(((a * b) <= total) ? "OK" : "OVERFLOW");
            }
            System.out.printf("\n");
        }
    }
}