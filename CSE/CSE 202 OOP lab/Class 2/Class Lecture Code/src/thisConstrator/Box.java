package thisConstrator;

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
            //this means the object name of the class where it stay , and it not need creat object, this is the object name :)
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


}
