import java.util.Scanner;
/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class URI_1038 {
    public static void main(String[] args) {
        try (Scanner input = new Scanner(System.in)) {
            double arr[] = {4.00, 4.50, 5.00, 2.00, 1.50};
            int X = input.nextInt();
            int Y = input.nextInt();
            System.out.printf("Total: R$ %.2f\n", arr[X-1] * Y);
        }
    }
}