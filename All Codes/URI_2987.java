import java.util.Scanner;
/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class URI_2987 {
    public static void main(String[] args) {
        try (Scanner input = new Scanner(System.in)) {
            char l = input.next().charAt(0);
            System.out.printf("%d\n", l - 64);
        }
    }
}