package worker;

public abstract class Employee {
    protected int id;
    protected int age;
    protected String name;

    Employee(int id, String name, int age) {
        this.id = id;
        this.name = name;
        this.age = age;

    }

    abstract void giveselary();

    public void show() {
        System.out.print(" Id:" + id + " Name: " +name+ " age:" + age);
    }
}
