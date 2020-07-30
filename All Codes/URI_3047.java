import java.util.Scanner;
/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class URI_3047 {
    public static void main(String[] args) {
        try (Scanner input = new Scanner(System.in)) {
            int m = input.nextInt();
            int a = input.nextInt();
            int b = input.nextInt();

            int max = (a + b + Math.abs(a - b)) / 2;
            int temp = m - (a + b);

            System.out.printf("%d\n", ((max >= temp) ? max : temp));

        }
    }
}