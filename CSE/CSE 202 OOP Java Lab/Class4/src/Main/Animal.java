package Main;

import Mammal.Crocodile;

public class Animal {
    int weight,feedcap,feed;
    boolean tail;
    Animal(int weight ){
        this.feed=feed;
        this.feedcap=feedcap;
        this.weight=weight;
        this.tail=tail;

    }

    public Animal(int weight, int feedcap, int feed, boolean tail) {
    }

    public void eat(int feed,int feedcap){
        this.feed=feed;
        this.feedcap=feedcap;

        if(feed>=0){
            if(feed<=feedcap)
            System.out.println("Will eat: "+feed);
            else if(feed>=feedcap)
                System.out.println("Will eat: "+(feed-feedcap));
        }
    }
    public void eat(String animal){
        int k=0;
        int a=;
        if(a>=0){
            if(a<=feedcap)
                System.out.println("Will eat: "+a);
            else if(a>=feedcap)
                System.out.println("Will eat: "+(a-feedcap));
        }
    }
    public void extruct(int a){
        if(a>weight){
            System.out.println("Extruct: "+(a-weight));
        }else{
            System.out.println("He is alread hungry");
        }

    }
    public static void main(String[] args) {
        Crocodile obj1=new Crocodile(200,80,120,true);



    }
}
