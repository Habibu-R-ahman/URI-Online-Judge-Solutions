import java.util.Scanner;
/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class URI_1035 {
    public static void main(String[] args) {
        try (Scanner input = new Scanner(System.in)) {
            int A = input.nextInt();
            int B = input.nextInt();
            int C = input.nextInt();
            int D = input.nextInt();

            if (B>C && D>A && C+D>A+B && C>0 && D>0 && A%2==0) {
                System.out.printf("Valores aceitos\n");
            } else {
                System.out.printf("Valores nao aceitos\n");
            }
        }
    }
}