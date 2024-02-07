package Inheritanc;

public class prog extends Empo{
    int cost;
    int deadline;
    prog(int id, String name, int age,int cost,int deadline) {
        super(name, id, age);
        this.cost=cost;
        this.deadline=deadline;
    }
    void show(){
        super.show();
        System.out.println("Cost:"+cost+" Dadline: " +deadline);
    }
    void givesala(){
        System.out.println("Pro selary: "+cost/deadline*30);
    }
}
