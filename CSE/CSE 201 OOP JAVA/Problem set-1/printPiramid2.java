import java.util.Scanner;

public class printPiramid2 {
    public static void main(String[] args) {
        System.out.println("Enter the row number");
        Scanner m = new Scanner(System.in);
        int n = m.nextInt();
        for (int i = 0; i < n; i++) {
            for (int j = n; j > i; j--) {
                System.out.print("* ");
            }
            System.out.println();

        }
    }

}