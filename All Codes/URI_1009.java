import java.util.Scanner;

/**
 * IMPORTANT: O nome da classe deve ser "Main" para que a sua solução execute
 * Class name must be "Main" for your solution to execute El nombre de la clase
 * debe ser "Main" para que su solución ejecutar
 */
public class URI_1009 {
 
    public static void main(String[] args) {

         try (Scanner input = new Scanner(System.in)) {
            // input.skip(Pattern.compile("[a-zA-Z]*"));
            input.next();
            double b = input.nextDouble();
            double c = input.nextDouble();
            double d = b + c * 0.15;
            System.out.printf("TOTAL = R$ %.2f\n", d);
        }
 
    }
 
}