package com.kodilla.testing.shape;

public class Triangle implements Shape {
    private double side;
    private double height;

    public Triangle(double side, double height) {
        this.side = side;
        this.height = height;
    }

    public String getShapeName(){
        return "Triangle";
    }

    public double getField(){
        return side * height * (0.5);
    }
}
