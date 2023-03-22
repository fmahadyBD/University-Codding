package Item;

import worker.Programmer;

public class Computer extends Programmer {
    String Brand;

    Computer(int id, String name, int age, int projectCost, int Deadline, String Brand) {
        super(id, name, age, projectCost, Deadline);
        this.Brand = Brand;

    }

    public void show() {
        super.assingcom();
        System.out.print(" Brand: " + Brand);
    }

}