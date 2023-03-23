package Bird;

public class Duck extends  Bird{
    int weight,feedcap,feed;
    boolean t;

    Duck(int weight,int feedcap,int feed,boolean tail){
        super(weight,feedcap,feed,tail);
        this.weight=weight;
        this.feedcap=feedcap;
        this.feed=feed;
        this.t=t;
    }

 public void eat(int feed,int feedcap){
        super.eat(feed,feedcap);
        this.feed=feed;
        this.feedcap=feedcap;

 }
}
