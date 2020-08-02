import java.util.Scanner;
/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */

public class URI_1036 {
    public static void main(String[] args) {
        try (Scanner input = new Scanner(System.in)) {
            double t;
            double a = input.nextDouble();
            double b = input.nextDouble();
            double c = input.nextDouble();

            if(((b * b) - 4 * a * c) < 0 || a == 0){
                System.out.printf("Impossivel calcular\n");
            }
            else{
                t = Math.sqrt((b * b) - 4 * a * c);
                System.out.printf("R1 = %.5f\nR2 = %.5f\n", ((-b + t) / (2 * a)), ((-b - t) / (2 * a)));
            }
        }
    }
}