import java.util.Scanner;

/**
 * URI_1021
 */
public class URI_1021 {

    public static void main(String[] args) {
        try (Scanner input = new Scanner(System.in)) {
            int arr[] = {10000, 5000, 2000, 1000, 500, 200, 100, 50, 25, 10, 5, 1};
            String title = "nota(s) de R$";
            int temp, n;
            double N = input.nextDouble();

            n = (int)(N * 100 + 0.00001);
            System.out.printf("NOTAS:\n");

            for (int i = 0; i < arr.length; i++) {
                temp = n / arr[i];
                n %= arr[i];
                if (i == 6) {
                    title = "moeda(s) de R$";
                    System.out.printf("MOEDAS:\n");
                }
                System.out.printf("%d %s %.2f\n", temp, title, arr[i]/100.00);
            }

        }
    }
}