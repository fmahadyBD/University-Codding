package Bird;

public class Parot extends Bird{
    int weight,feedcap,feed;
    boolean t;
    Parot(int weight,int feedcap,int feed,boolean tail){
        super(weight, feedcap, feed, tail);


    }
    public void eat(int feed,int feedcap){
        super.eat(feed,feedcap);
        this.feed=feed;
        this.feedcap=feedcap;

    }
}
