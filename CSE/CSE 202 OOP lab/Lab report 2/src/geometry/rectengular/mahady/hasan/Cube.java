/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package geometry.rectengular.mahady.hasan;

import geometry.fahim.Colorable;
import geometry.fahim.Expandable;
import geometry.fahim.Rolable;

/**
 *
 * @author Mahady Hasan Fahim
 */
public class Cube extends RectengularSolid implements Expandable,Colorable,Rolable{
 
    public Cube(double lenght){
        super(lenght,1,1);
       
    }


    public double volume() {
        return Math.pow(super.getLength(),3);
       
    }

    public double surfaceArea() {
        return 6*Math.pow(super.getLength(),2);
    }

    @Override
    public void exapand() {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public void shrink() {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public void show() {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public void rollLeft() {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public void rollRight() {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }
    
}
