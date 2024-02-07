package Item;

import worker.Programmer;

public class Computer extends Programmer{
    String Brand;

    Computer(int id, String name, int age, int projectCost, int Deadline,String Brand) {
        super(id, name, age, projectCost, Deadline);
        
    }

}