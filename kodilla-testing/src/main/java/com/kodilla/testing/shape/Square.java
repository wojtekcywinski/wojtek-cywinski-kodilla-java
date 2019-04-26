package com.kodilla.testing.shape;

public class Square implements Shape {
    private double side;

    public Square(double side) {
        this.side = side;
    }

    public String getShapeName(){
        return "Square";
    }

    public double getField(){
        return (side * side);
    }
}
