package finalizeMethhod;

public class Box {


    int l;
    int w;
    int h;

    // this is the class's propartics
    Box(int l,int w,int h){
        //this is varriable
        this.l=l;
        this.w=w;
        this.h=h;
            /* frist l means the propertices of class ,
            2nd l means the the methos's veriable;


             */

    }
    int baseArea(){
        return h+l+w;
    }
    int Volume(){
        return l*w*h;
    }
protected void finalize(){
    System.out.println("Killing now");
}
}
