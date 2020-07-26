import java.util.Scanner;

/**
 * URI_1015
 */
public class URI_1015 {

    public static void main(String[] args) {
        try (Scanner input = new Scanner(System.in)) {
            double x1 = input.nextDouble();
            double y1 = input.nextDouble();
            double x2 = input.nextDouble();
            double y2 = input.nextDouble();

            double d = Math.sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
            System.out.printf("%.4f\n",d);
        }
    }
}