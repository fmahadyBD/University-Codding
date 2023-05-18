
package com.mycompany.lab06;

// nono sttic holo objecter por, static holo objecter age
public class Lab06 {
    public static void main(String[] args) {
        int redW=40;
        int blueW=50;
        Red r=new Red();
        Blue b=new Blue();
        System.out.println("Red Collide with Blue and wigth: "+r.colidWith(blueW));
        System.out.println("Blue Collide with Red and wigth: "+b.colidWith(redW));
    }
   
}


class Red {
    
    int rw=40;

   int colidWith(int b){
       
       return b+rw;
       
   }

}
class Blue {
    int bw=50;
//    Blue(int rw,int bw){
//        this.rw=rw;
//        this.bw=bw;
//        
//    }
  int colidWith(int r){
       
       return r+bw;
       
   }

}
