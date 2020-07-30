import java.io.IOException;
import java.util.Scanner;
/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class URI_2780 {
 
    public static void main(String[] args) throws IOException {
 
        try (Scanner input = new Scanner(System.in)) {
            int point = 0;
            int a = input.nextInt();

            if (a < 801) {
                point = 1;
            } else if (a < 1401) {
                point = 2;
            } else if (a < 2001) {
                point = 3;
            }
            System.out.printf("%d\n", point);
        }
 
    }
 
}