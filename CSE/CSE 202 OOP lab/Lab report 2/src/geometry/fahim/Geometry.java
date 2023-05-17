
package geometry.fahim;

import geometry.rectengular.mahady.hasan.Cube;


public abstract class Geometry {
    abstract public double volume();
    abstract public double surfaceArea();


    public static void main(String[] args) {
        
              Cube c=new Cube(1.3);
              System.out.println("Volume c:"+c.volume());
              System.out.println("SA c:"+c.surfaceArea());
    
        
    }
    
}
