import java.util.Scanner;

/**
 * URI_1014
 */
public class URI_1014 {

    public static void main(String[] args) {
        try (Scanner input = new Scanner(System.in)) {
    
            int a = input.nextInt();
            double b = input.nextDouble();
            input.close();
	        System.out.printf("%.3f km/l\n", a/b);
            
        }
    }
}