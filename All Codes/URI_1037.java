import java.util.Scanner;
/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class URI_1037 {
    public static void main(String[] args) {
        try (Scanner input = new Scanner(System.in)) {
            double n = input.nextDouble();
            
            if (n < 0 || n > 100)
                System.out.printf("Fora de intervalo\n");
            else if (n <= 25){
                System.out.printf("Intervalo [0,25]\n");
            }
            else if (n <= 50){
                System.out.printf("Intervalo (25,50]\n");
            }
            else if (n <= 75){
                System.out.printf("Intervalo (50,75]\n");
            }
            else if (n <= 100){
                System.out.printf("Intervalo (75,100]\n");
            }
        }
    }
}