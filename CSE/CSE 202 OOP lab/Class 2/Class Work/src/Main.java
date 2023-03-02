import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        System.out.println("Enter the frist qube lenth");
        Scanner sc = new Scanner(System.in);
        int a= sc.nextInt();
        Qube obj=new Qube(a);
        System.out.println("The area is :"+obj.are());
        System.out.println("The volume id :"+obj.volume());
        System.out.println("The surface area is: "+obj.are()*4);
        System.out.println("The Triangle is: "+(float)obj.are()/2);
        MQube obj2=new MQube();
        System.out.println("Enter the megnitude:");
        obj2.mg(sc.nextInt(),a);



    }
}