package worker;

import Item.Cpu;

public class Programmer extends Employee{
   protected int projectCost;
   protected int Deadline;

    public Programmer(int id, String name, int age,int  projectCost,int Deadline) {
        super(id, name, age);
        this.projectCost=projectCost;
        this.Deadline=Deadline;
        
    }
    public void assingcom(){
       // Cpu obj=new Cpu(10,"fahim",10,1000,20,"lenevo",4,5000 );
        Cpu obj=new Cpu(01,"Mahady",22,200000,100,"Lenevo",4,10000);
        obj.show();
    }

    
}
