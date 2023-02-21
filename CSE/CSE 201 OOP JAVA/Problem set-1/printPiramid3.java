import java.util.Scanner;
public class printPiramid3 {
    public static void main(String[] args)
    {    Scanner scanner = new Scanner(System.in);     
        System.out.println("Enter the number of rows  ");
        int rows = scanner.nextInt();
        System.out.println("Printing the pattern");
        for (int i = 1; i <= rows; i++)
        {   for (int j = rows; j > i; j--)
            {
                System.out.print(" ");
            }
            for (int k = 1; k <= (i * 2) - 1; k++)
            {
                System.out.print("*");
            }
            System.out.println();
        }
        scanner.close();
    }
    
}
