package com.kodilla.patterns.factory.tasks;

public final class TaskFactory {
    public static final String SHOPPINGTASK = "SHOPPINGTASK";
    public static final String PAINTINGTASK = "PAINTINGTASK";
    public static final String DRIVINGTASK = "DRIVINGTASK";

    public final Task makeTask(final String taskClass) {
        switch (taskClass) {
            case SHOPPINGTASK:
                return new ShoppingTask("Home shopping", "Milk", 7);
            case PAINTINGTASK:
                return new PaintingTask("Car painting", "Blue", "BMW x5");
            case DRIVINGTASK:
                return new DrivingTask("Take mom for a shopping", "To the shopping centre", "BMW x 5");
            default:
                return null;
        }
    }
}
