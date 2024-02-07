//Constrator overloading
class HelloWorld {
    public static void main(String[] args) {
        TimeBook obj=new TimeBook();
        // no argument 1st constrator called
        TimeBook obj1=new TimeBook(" name");
        // one argument pass
    TimeBook obj2=new TimeBook("email", "pass");
    // minimuminformation passes called 3rd constrator
    TimeBook obj3=new TimeBook( "email", "pass", "name");
    // all information passed
        
        
        
    }
}
class TimeBook{
    TimeBook(){
        System.out.println("Sorry Invallied information!\n");
        // we dont pass any think
    }
      TimeBook(String name){
       System.out.println("Sorry inccompelete information!\n");
        // we dont pass email and pass
    }
      TimeBook(String email,String Pass){
        System.out.println("Registration compelete!\n");
        // we t pass email and pass regi comfrimed!
    }
      TimeBook(String email,String Pass,String name){
       System.out.println(" all information given!rigistration done\n");
        // we pass all of informations
    }
}
