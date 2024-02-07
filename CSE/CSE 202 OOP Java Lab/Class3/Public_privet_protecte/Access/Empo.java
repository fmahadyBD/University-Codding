package Public_privet_protecte.Access;

public abstract class Empo  {
   protected String name;
    protected int id,age;
    public Empo(String name,int id,int age)
    {
        this.age=age;
        this.id=id;
        this.name=name;
    }
    public void show(){
        System.out.println("Id"+id+" Name:"+" Age:"+age);
    }
   public abstract void givesala();
}
