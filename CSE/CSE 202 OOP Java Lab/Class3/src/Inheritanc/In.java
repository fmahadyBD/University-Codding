package Inheritanc;

public class In {
    public static void main(String[] args) {
        OfficeEmpo obj=new OfficeEmpo(01,"Fahim",22,222,2);
        prog obj2=new prog(02,"Mahady",23,222,7);
        obj.show();;
        obj2.show();
//        Empo e=new Empo(" ",0,0) {
//            @Override
//            void givesala() {
//
//            }
//        };
        obj.givesala();
        obj2.givesala();
       // System.out.println(obj2.givesala());
        //it will be done when our code is return something;
    }
}
