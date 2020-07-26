import java.util.Scanner;

/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class URI_1006 {
 
    public static void main(String[] args) {

        try (Scanner input = new Scanner(System.in)) {
            float A = input.nextFloat();
            float B = input.nextFloat();
            float C = input.nextFloat();
            float M = ( (A * 2) + (B * 3) + (C * 5) ) / 10;
            System.out.printf("MEDIA = %.1f\n",M);
        }
    }
 
}