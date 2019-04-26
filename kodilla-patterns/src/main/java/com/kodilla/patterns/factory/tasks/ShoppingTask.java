package com.kodilla.patterns.factory.tasks;

import static com.kodilla.patterns.factory.tasks.TasksList.getList;

public class ShoppingTask implements Task {

    private String taskName;
    private String whatToBuy;
    private double quantity;

    public ShoppingTask(String taskName, String whatToBuy, double quantity) {
        this.taskName = taskName;
        this.whatToBuy = whatToBuy;
        this.quantity = quantity;
    }

    public void executeTask() {
        getList().add(taskName);
        System.out.println("Shopping task has been done!");

    }

    public String getTaskName() {
        return taskName;
    }

    public boolean isTaskExecuted() {
        if (getList().contains(taskName)) {
            return true;
        } else {
            System.out.println("Shopping task has NOT been done!");
            return false;
        }
    }
}
