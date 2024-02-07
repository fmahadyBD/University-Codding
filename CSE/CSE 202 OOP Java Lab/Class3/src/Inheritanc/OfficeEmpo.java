package Inheritanc;

public class OfficeEmpo extends Empo{
    double salary;
    double hours;

    OfficeEmpo(int id, String name,  int age,double salary,double hours ){
        super(name, id, age);
        //supper () means calling the parent class's constrator.
        this.hours=hours;
        this.salary=salary;
    }
    void show(){
        super.show();
       // System.out.println("Selary:"+salary+" Hours: "+hours);
        System.out.println(" Hours: "+hours);
    }
    void givesala(){
        System.out.println("Selary "+salary);
    }
}
