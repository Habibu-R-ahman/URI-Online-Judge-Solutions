import java.util.Scanner;
/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class URI_3040 {
    public static void main(String[] args) {
        try (Scanner input = new Scanner(System.in)) {
            int t = input.nextInt();

            while (t != 0) {
                int h = input.nextInt();
                int d = input.nextInt();
                int g = input.nextInt();

                if (h <= 300 && h >= 200 && d >= 50 && g >= 150) {
                    System.out.printf("Sim\n");
                } else {
                    System.out.printf("Nao\n");
                }
                t--;
            }
        }
    }
}