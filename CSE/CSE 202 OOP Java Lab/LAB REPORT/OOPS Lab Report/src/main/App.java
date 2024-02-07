package main;

import Item.Cpu;
import worker.OfficeEMpo;

public class App {
    public static void main(String[] args) throws Exception {

        System.out.print("The Office Empolyee:   ");
        OfficeEMpo obj0 = new OfficeEMpo(00, "Mahady", 22, 8, 50000);
        obj0.show();

        System.out.println("");
        
        System.out.print("Programmer:   ");
        Cpu obj = new Cpu(01, "Mahady", 22, 200000, 100, "Lenevo", 4, 10000);
        obj.show();

    }
}
