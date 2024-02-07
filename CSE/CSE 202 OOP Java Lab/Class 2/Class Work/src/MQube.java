public class MQube {
    void mg(int b,int a){
        Qube obj=new Qube(b*a);
        System.out.println("The area is :"+obj.are());
        System.out.println("The volume id :"+obj.volume());
        System.out.println("The surface area is: "+obj.are()*4);
        System.out.println("The Triangle is: "+(float)obj.are()/2);
        MQube obj2=new MQube();
    }
}
