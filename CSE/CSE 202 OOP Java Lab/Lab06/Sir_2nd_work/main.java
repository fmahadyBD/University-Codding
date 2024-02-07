
package com.mycompany.lab06;

import java.awt.Color;


public class Ball {
    
    private double weigth;
    private Color color;
    private boolean exits;
    
    
    public Ball (double weight,Color color){
        this.weigth=weight;
        this.color=color;
        this.exits=true;
    }
    public Ball(boolean exits){
        this.exits=exits;
                
    }
    public void kill(){
        this.exits=false;
    }
    public Ball collideWth(Ball ball){
        if(this.exits&&ball.exits){
             int r=(this.color.getRed()+ball.color.getRed())/2;
        int g=(this.color.getGreen()+ball.color.getGreen())/2;
        int b=(this.color.getBlue()+ball.color.getBlue())/2;
        this.kill();
        ball.kill();
        return new Ball(this.weigth+ball.weigth,new Color(r, g, b));
            
        }
//        return null;
//        for that we don't need else
//       
            return new Ball(false);
}
    
    
    public void show(){
        if(this.exits){
            System.out.println("Weigth: "+weigth+", Color: "+color.toString());
        }
        
    }
    public static void main(String[] args) {
        Ball a=new Ball(40,Color.RED);
          Ball b=new Ball(50,new Color(100,25,200));
          Ball c=a.collideWth(b);
          Ball err= a.collideWth(b);
          a.show();
          b.show();
          c.show();
          err.show();
    }
}
