package overloding;

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
    int Volume(int a){
        return a*l;
    }
    protected void finalize(){
        System.out.println("Killing now");
    }
}
