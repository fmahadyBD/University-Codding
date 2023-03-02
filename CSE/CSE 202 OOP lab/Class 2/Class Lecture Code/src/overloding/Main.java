package overloding;



public class Main {
    public static void main(String[] args) {

        Box obj=new Box(2,3,4);
        System.out.println("The Area is   :"+obj.baseArea());
        System.out.println("The Volume is :"+obj.Volume());
        System.out.println();
        Box obj1=new Box(5,6,7);
        System.out.println("The Area is  :"+obj1.baseArea());
        System.out.println("The Volume is:"+obj1.Volume());
        System.out.println();
        Box obj2=new Box(10,11,12);
        System.out.println("The Area is   :"+obj2.baseArea());
        System.out.println("The Volume is :"+obj2.Volume());
        System.out.println();

        System.out.println("The overloading :"+obj2.Volume(4));
    }
}
