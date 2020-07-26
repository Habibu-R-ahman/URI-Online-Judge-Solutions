import java.util.Scanner;
/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class URI_1002 {
 
    public static void main(String[] args) {
 
        try (Scanner input = new Scanner(System.in)) {
            final double n = 3.14159;
            double r = input.nextDouble();
            System.out.printf("A=%.4f\n", n * r * r);
        }
    }
 
}