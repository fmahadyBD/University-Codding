package Public_privet_protecte.Access;

public class OfficeEmpo extends Empo{
   private double salary;
  private  double hours;

    public OfficeEmpo(int id, String name,  int age,double salary,double hours ){
        super(name, id, age);
        //supper () means calling the parent class's constrator.
        this.hours=hours;
        this.salary=salary;
    }
    public void show(){
        super.show();
       // System.out.println("Selary:"+salary+" Hours: "+hours);
        System.out.println(" Hours: "+hours);
    }
    public  void givesala(){
        System.out.println("Selary "+salary);
    }
}
