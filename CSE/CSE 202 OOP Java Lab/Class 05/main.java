// Press Shift twice to open the Search Everywhere dialog and type `show whitespaces`,
// then press Enter. You can now see whitespace characters in your code.
public class Main {
    public static void main(String[] args) {

    sphear obj=new sphear(2,2);
        System.out.println("Volume of sphear: "+obj.volume());
        System.out.println("Volume of sphear after double: "+obj.doubles());
        cube obj2=new cube(1,2,3);
        System.out.println("The Squear of Reectungluarsolid: "+obj2.suqer());
        System.out.println("The volume of Reectungluarsolid: "+obj2.volume());
    }
}
class  sphear extends Main{
    float r;
    float d;
    sphear(float r,float d){
        this.r=r;
        this.d=d;

    }
    float doubles(){
        return d*volume();

    }
    float volume(){
        return (float) ((4/3)*3.1416*r);
    }


}
class Rectungluar extends Main{
    int l,w,h;

    Rectungluar(int l,int w,int h){
        this.h=h;
        this.w=w;
        this.l=l;

    }


}
class cube extends Rectungluar{

    cube(int l, int w, int h) {
        super(l, w, h);
    }
    float volume(){
        return h*l*w;
    }
    float suqer(){
        return  l*w;
    }
}
