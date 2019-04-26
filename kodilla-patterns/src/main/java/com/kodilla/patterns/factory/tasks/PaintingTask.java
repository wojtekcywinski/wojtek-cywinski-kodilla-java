package com.kodilla.patterns.factory.tasks;

import static com.kodilla.patterns.factory.tasks.TasksList.getList;

public class PaintingTask implements Task {

    private String taskName;
    private String color;
    private String whatToPaint;

    public PaintingTask(String taskName, String color, String whatToPaint) {
        this.taskName = taskName;
        this.color = color;
        this.whatToPaint = whatToPaint;
    }

    public void executeTask() {
        getList().add(taskName);
        System.out.println("Painting task has been done!");

    }

    public String getTaskName() {
        return taskName;
    }

    public boolean isTaskExecuted() {
        if (getList().contains(taskName)) {
            return true;
        } else {
            System.out.println("Painting task has NOT been done!");
            return false;
        }
    }
}
