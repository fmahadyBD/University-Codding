package worker;

public class Programmer extends Employee {
    protected int projectCost;
    protected int Deadline;

    public Programmer(int id, String name, int age, int projectCost, int Deadline) {
        super(id, name, age);
        this.projectCost = projectCost;
        this.Deadline = Deadline;

    }

    public void assingcom() {

        super.show();
        System.out.print(" Deadline:" + Deadline + " projectcost: " + projectCost);

    }

    @Override
    void giveselary() {
        System.out.print(" Monthy Programmer selary: " + (projectCost / Deadline) * 30);
    }

}
