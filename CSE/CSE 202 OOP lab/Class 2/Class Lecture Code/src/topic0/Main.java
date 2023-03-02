package topic0;

//import java.util.Scanner;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {


        /*
        //Here we see that we need to mantioned the name of the package before thefunctions. then  WE DON'T NEED    IMPORT IT
        java.util.Scanner sc=new java.util.Scanner("System.in");
        */
        Scanner sc=new Scanner(System.in);
        int l=sc.nextInt();
        int w=sc.nextInt();
        int h=sc.nextInt();
        Box obj=new Box();
        obj.a=l;
        obj.b=w;
        obj.c=h;
        System.out.println("The area="+obj.baseArea());
        System.out.println("The volume="+obj.volume());



    }
}