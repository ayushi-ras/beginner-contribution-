import java.util.Scanner;

public class fastExponentiation {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the number : ");
        int n1 = sc.nextInt();
        System.out.println("Enter the power : ");
        int n2 = sc.nextInt();

        int ans = 1;

        while (n2 > 0) {

            if ((n2 & 1) == 1) {
                ans = ans * n1;
            }
            n1 = n1 * n1;

            n2 = n2 >> 1;

        }

        System.out.println("Ans : " + ans);

        // System.out.println("Ans : " + (n1 & (n1-1)));
    }
}
