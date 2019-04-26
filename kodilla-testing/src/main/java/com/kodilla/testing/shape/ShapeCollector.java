package com.kodilla.testing.shape;
import java.util.ArrayList;

public class ShapeCollector {
    private ArrayList<Shape> shapeCollector = new ArrayList<Shape>();

    public void addFigure(Shape shape){
        shapeCollector.add(shape);
}

    public void removeFigure(Shape shape){
        shapeCollector.remove(shape);
    }

    public Shape getFigure(int n){
        return shapeCollector.get(n);
    }

    public int getListSize(){
        return shapeCollector.size();
    }

    public void showFigure(){

    }
}
