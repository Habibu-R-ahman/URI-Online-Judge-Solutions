import java.util.Scanner;
/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class URI_1005 {
 
    public static void main(String[] args) {

        try (Scanner input = new Scanner(System.in)) {
            double a = input.nextDouble();
            double b = input.nextDouble();
            System.out.printf("MEDIA = %.5f\n", (a*3.5 + b*7.5) / 11.0);
        }
    }
 
}