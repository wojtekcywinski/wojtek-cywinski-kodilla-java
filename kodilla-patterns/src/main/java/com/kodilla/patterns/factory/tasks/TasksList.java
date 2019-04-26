package com.kodilla.patterns.factory.tasks;

import com.kodilla.patterns.prototype.Task;

import java.util.ArrayList;
import java.util.List;

public class TasksList {

    private static ArrayList<Task> tasksList;

    private TasksList() {
    }

    public static List getList() {
        if (tasksList == null)
            tasksList = new ArrayList<>();

        return tasksList;
    }
}