package Public_privet_protecte.Access;

public class prog extends Empo{
    private int cost;
    private int deadline;
   public prog(int id, String name, int age,int cost,int deadline) {
        super(name, id, age);
        this.cost=cost;
        this.deadline=deadline;
    }
    public void show(){
        super.show();
        System.out.println("Cost:"+cost+" Dadline: " +deadline);
    }
    public void givesala(){
        System.out.println("Pro selary: "+cost/deadline*30);
    }
}
