import java.util.Scanner;
/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class URI_1012 {
 
    public static void main(String[] args) {
 
        try (Scanner input = new Scanner(System.in)) {
            double a, b, c;

            a = input.nextDouble();
            b = input.nextDouble();
            c = input.nextDouble();

            System.out.printf("TRIANGULO: %.3f\n", (a * c) / 2);
            System.out.printf("CIRCULO: %.3f\n", c * c * 3.14159);
            System.out.printf("TRAPEZIO: %.3f\n", ((a + b) / 2) * c);
            System.out.printf("QUADRADO: %.3f\n", b * b);
            System.out.printf("RETANGULO: %.3f\n", a * b);

        }
 
    }
 
}