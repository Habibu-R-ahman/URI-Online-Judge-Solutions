import java.util.Scanner;

/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class URI_1018 {

    public static void main(String[] args) {
        try (Scanner input = new Scanner(System.in)) {
            int[] arr = {100, 50, 20, 10, 5, 2, 1};
            int temp = 0;
            int N = input.nextInt();

            System.out.printf("%d\n", N);


            for (int i = 0; i < arr.length; i++) {
                temp = N / arr[i];
                N %= arr[i];
                System.out.printf("%d nota(s) de R$ %d,00\n", temp, arr[i]);
            }
        }
    }
}