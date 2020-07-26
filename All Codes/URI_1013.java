import java.util.Scanner;
/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class URI_1013 {
 
    public static void main(String[] args) {
 
        try (Scanner input = new Scanner(System.in)) {
            int a, b, c, d, e;

            a = input.nextInt();
            b = input.nextInt();
            c = input.nextInt();

            d = (a + b + Math.abs(a - b)) / 2;
            e = (d + c + Math.abs(c - d)) / 2;

            System.out.printf("%d eh o maior\n",e);
        }
 
    }
 
}