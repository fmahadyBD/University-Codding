package Inheritanc;

public abstract class Empo  {
    String name;
    int id,age;
    Empo(String name,int id,int age)
    {
        this.age=age;
        this.id=id;
        this.name=name;
    }
    void show(){
        System.out.println("Id"+id+" Name:"+" Age:"+age);
    }
    abstract void givesala();
}
