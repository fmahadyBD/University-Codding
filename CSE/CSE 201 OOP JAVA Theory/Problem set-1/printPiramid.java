import java.util.Scanner;

public class printPiramid {
    public static void main(String[] args) {
        System.out.println("Enter te row number:");
        Scanner m= new Scanner(System.in);
        int n=m.nextInt();
        for(int i=0;i<n;i++){
            for(int j=0;j<i+1;j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
