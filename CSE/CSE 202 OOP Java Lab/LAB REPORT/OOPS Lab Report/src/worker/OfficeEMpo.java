package worker;

public class OfficeEMpo extends Employee {
    private double hours;
    private double selary;

    public OfficeEMpo(int id, String name, int age, double hours, double selary) {
        super(id, name, age);
        this.hours = hours;
        this.selary = selary;
    }

    public void show() {
        super.show();
        System.out.print(" Hours:" + hours);
        giveselary();
    }

    @Override
    void giveselary() {
        // throw new UnsupportedOperationException("Unimplemented method 'giveselary'");
        System.out.print(" Selary:" + selary);
    }

}
