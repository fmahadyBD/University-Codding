package Mammal;

public class Crocodile extends Mammal{
    int weight,feedcap,feed;
    boolean t;
    public Crocodile(int weight, int feedcap, int feed, boolean tail){
        super(weight, feedcap, feed, tail);
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
    public void extruct(int feed){
        super.extruct(feed);
        this.feed=feed;
        this.feedcap=feedcap;

    }
}
