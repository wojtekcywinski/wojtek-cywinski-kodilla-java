package com.kodilla.spring.portfolio;

import java.util.ArrayList;
import java.util.List;

public class TaskList {

    private List<String> tasks;

    public TaskList() {
        this.tasks = new ArrayList<>();
    }

    public void addTask(Task task) {
        if (task.getName().equals("Delivery")) {
            tasks.add("Calculation of delivery time");
        }
    }

    public String downloadTask() {
        return tasks.get(0);
    }
}
