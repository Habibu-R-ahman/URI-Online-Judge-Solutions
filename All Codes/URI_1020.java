import java.util.Scanner;

/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class URI_1020 {

    public static void main(String[] args) {
        try (Scanner input = new Scanner(System.in)) {
            
            int N = input.nextInt();
            int y = N / 365;
            int m = (N % 365) / 30;
            int d = (N % 365) % 30;

            System.out.printf("%d ano(s)\n",y);
            System.out.printf("%d mes(es)\n",m);
            System.out.printf("%d dia(s)\n",d);
        }
    }
}