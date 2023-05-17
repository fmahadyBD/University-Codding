/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package geometry.rectengular.mahady.hasan;

import geometry.fahim.Geometry;

/**
 *
 * @author Mahady Hasan Fahim
 */
public class RectengularSolid extends Geometry{

    double length;
    double breadth;
    double heigth;
    public RectengularSolid(double length,double breath,double heigth){
        this.length=length;
        this.breadth=breath;
        this.heigth=heigth;
    }
    public RectengularSolid(RectengularSolid rs, double times){
        this.length=rs.length*times;
        this.breadth=rs.breadth*times;
        this.heigth=rs.heigth*times;
    }
    

    public double volume() {
        
        return length*breadth*heigth;    
    }
    protected double getLength(){
        return this.length;
    }

 
    public double surfaceArea() {
        return 2*(length*breadth+breadth*heigth+length*heigth);
    }
    
}
