import java.util.Scanner;
/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class URI_2060 {
    public static void main(String[] args) {
        try (Scanner input = new Scanner(System.in)) {
            int t = input.nextInt();
            int _2 = 0, _3 = 0, _4 = 0, _5 = 0;
            
            while (t != 0) {
                int x = input.nextInt();
                if(x%2==0) _2++;
                if(x%4==0) _4++;
                if(x%3==0) _3++;
                if(x%5==0) _5++;

                t--;
            }
            System.out.printf("%d Multiplo(s) de 2\n", _2);
            System.out.printf("%d Multiplo(s) de 3\n", _3);
            System.out.printf("%d Multiplo(s) de 4\n", _4);
            System.out.printf("%d Multiplo(s) de 5\n", _5);
        }
    }
}