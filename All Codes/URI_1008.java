import java.util.Scanner;

/**
 * IMPORTANT: O nome da classe deve ser "Main" para que a sua solução execute
 * Class name must be "Main" for your solution to execute El nombre de la clase
 * debe ser "Main" para que su solución ejecutar
 */
public class URI_1008 {
 
    public static void main(String[] args) {

         try (Scanner input = new Scanner(System.in)) {
            int a = input.nextInt();
            int b = input.nextInt();
            float c = input.nextFloat();
            System.out.printf("NUMBER = %d\n",a);
            System.out.printf("SALARY = U$ %.2f\n", b*c);
        }
 
    }
 
}