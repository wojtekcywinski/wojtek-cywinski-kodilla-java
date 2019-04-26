package com.kodilla.testing.shape;

public class Circle implements Shape{
    private double radius;

    public Circle(double radius) {
        this.radius = radius;
    }

    public String getShapeName(){
        return "Circle";
    }

    public double getField(){
        return (3.14 * radius * radius);
    }
}
