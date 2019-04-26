package com.kodilla.patterns.factory.tasks;

import static com.kodilla.patterns.factory.tasks.TasksList.getList;

public class DrivingTask implements Task {

    private String taskName;
    private String where;
    private String using;

    public DrivingTask(String taskName, String where, String using) {
        this.taskName = taskName;
        this.where = where;
        this.using = using;
    }

    public void executeTask() {
        getList().add(taskName);
        System.out.println("Driving task has been done!");

    }

    public String getTaskName() {
        return taskName;
    }

    public boolean isTaskExecuted() {
        if (getList().contains(taskName)) {
            return true;
        } else {
            System.out.println("Driving task has NOT been done!");
            return false;
        }
    }
}
