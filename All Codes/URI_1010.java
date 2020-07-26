import java.util.Scanner;

/**
 * IMPORTANT: O nome da classe deve ser "Main" para que a sua solução execute
 * Class name must be "Main" for your solution to execute El nombre de la clase
 * debe ser "Main" para que su solución ejecutar
 */
public class URI_1010 {
 
    public static void main(String[] args) {

         try (Scanner input = new Scanner(System.in)) {
            input.nextInt();
            int b = input.nextInt();
            float g = input.nextFloat();
            input.nextInt();
            int d = input.nextInt();
            float h = input.nextFloat();
            float e = (b * g) + (d * h);
            System.out.printf("VALOR A PAGAR: R$ %.2f\n",e);
        }
 
    }
}