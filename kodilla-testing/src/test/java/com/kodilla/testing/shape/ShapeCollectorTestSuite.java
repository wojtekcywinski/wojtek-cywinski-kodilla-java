package com.kodilla.testing.shape;
import com.kodilla.testing.shape.ShapeCollector;
import org.junit.*;

import java.util.ArrayList;

public class ShapeCollectorTestSuite {

    @Test
    public void testAddFigure(){
        //Given
        ShapeCollector shapeCollector = new ShapeCollector();
        Triangle triangle = new Triangle(8.5, 7.6);
        Circle circle = new Circle (9.7);
        Square square = new Square (7.5);
        //When
        shapeCollector.addFigure(triangle);
        shapeCollector.addFigure(circle);
        shapeCollector.addFigure(square);
        //Then
        Assert.assertEquals(3, shapeCollector.getListSize());
    }

    @Test
    public void testRemoveFigure(){
        //Given
        ShapeCollector shapeCollector = new ShapeCollector();
        Triangle triangle = new Triangle(8.5, 7.6);
        Circle circle = new Circle (9.7);
        Square square = new Square (7.5);
        //When
        shapeCollector.addFigure(circle);
        shapeCollector.addFigure(square);
        shapeCollector.addFigure(triangle);
        shapeCollector.removeFigure(triangle);
        //Then
        Assert.assertEquals(2, shapeCollector.getListSize());
    }

    @Test
    public void testGetFigure(){
        //Given
        ShapeCollector shapeCollector = new ShapeCollector();
        Triangle triangle = new Triangle(8.5, 7.6);
        Circle circle = new Circle (9.7);
        Square square = new Square (7.5);
        shapeCollector.addFigure(triangle);
        shapeCollector.addFigure(circle);
        shapeCollector.addFigure(square);
        //When
        Shape testGetTriangle = shapeCollector.getFigure(0);
        //Then
        Assert.assertEquals(testGetTriangle, triangle);
        //When
        Shape testGetCircle = shapeCollector.getFigure(1);
        //Then
        Assert.assertEquals(testGetCircle, circle);
        //When
        Shape testGetSquare = shapeCollector.getFigure(2);
        //Then
        Assert.assertEquals(testGetSquare, square);

    }

    @Test
    public void getShapeName(){
        //Given
        ShapeCollector shapeCollector = new ShapeCollector();
        Triangle triangle = new Triangle(8.5, 7.6);
        Circle circle = new Circle (9.7);
        Square square = new Square (7.5);
        //When
        String triangleName = triangle.getShapeName();
        String circleName = circle.getShapeName();
        String squareName = square.getShapeName();
        //Then
        Assert.assertEquals("Triangle", triangleName);
        Assert.assertEquals("Circle", circleName);
        Assert.assertEquals("Square", squareName);
    }

    @Test
    public void getField() {
        //Given
        ShapeCollector shapeCollector = new ShapeCollector();
        Triangle triangle = new Triangle(8.5, 7.6);
        Circle circle = new Circle (9.7);
        Square square = new Square (7.5);
        //When
        double triangleField = triangle.getField();
        double circleField = circle.getField();
        double squareField = square.getField();
        //Then
        Assert.assertEquals(32.3, triangleField, 1);
        Assert.assertEquals(295.5, circleField, 1);
        Assert.assertEquals(56.2, squareField,1);
    }
}
