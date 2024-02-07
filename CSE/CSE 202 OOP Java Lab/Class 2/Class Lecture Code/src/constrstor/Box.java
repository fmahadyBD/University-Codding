package constrstor;

public class Box {
    int l;
    int w;
    int h;

    // this is the class's propartics
    Box(int lc,int wc,int hc){
        //this is varriable
        l=lc;
        w=wc;
        h=hc;

    }
    int baseArea(){
        return h+l+w;
    }
    int Volume(){
        return l*w*h;
    }

}
