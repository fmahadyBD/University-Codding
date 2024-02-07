import java.util.Scanner;

public class primeNumber{
    public static void main(String[] args) {
        int s,e;
        Scanner m= new Scanner(System.in);
        System.out.println("Enter the the start");
        s=m.nextInt();
        System.out.println("Enter the the end");
        e=m.nextInt();
        for(int i=s;i<=e;i++){
            
        }

    }
    static  void w(int n){
        int c=0;
        for(int i=1;i<=n;i++){
            if(n%i==0){
                c++;
            }
        }
        if(c==2){
            System.out.println("Prime number is: "+n);
        }
    }
}