package com.kodilla.patterns.factory.com.kodilla.patterns.factory.tasks;

import com.kodilla.patterns.factory.tasks.Task;
import com.kodilla.patterns.factory.tasks.TaskFactory;
import org.junit.*;

import static com.kodilla.patterns.factory.tasks.TasksList.getList;

public class TaskFactoryTestSuite {

    @After
        public void clearList() {
            getList().clear();
    }

    @Test
    public void testShoppingTaskFactory() {
        //Given
        TaskFactory factory = new TaskFactory();
        //When
        Task shoppingTask = factory.makeTask(TaskFactory.SHOPPINGTASK);
        shoppingTask.executeTask();
        boolean isShoppingTaskDone = shoppingTask.isTaskExecuted();
        //Then
        Assert.assertTrue(isShoppingTaskDone);
    }

    @Test
    public void testPaintingTaskFactory() {
        //Given
        TaskFactory factory = new TaskFactory();
        //When
        Task paintingTask = factory.makeTask(TaskFactory.PAINTINGTASK);
        paintingTask.executeTask();
        boolean isPaintingTaskDone = paintingTask.isTaskExecuted();
        //Then
        Assert.assertTrue(isPaintingTaskDone);
    }

    @Test
    public void testDrivingTaskFactory() {
        //Given
        TaskFactory factory = new TaskFactory();
        //When
        Task drivingTask = factory.makeTask(TaskFactory.DRIVINGTASK);
        drivingTask.executeTask();
        boolean isDrivingTaskDone = drivingTask.isTaskExecuted();
        //Then
        Assert.assertTrue(isDrivingTaskDone);
    }

    @Test
    public void testShoppingTaskFactoryNotExecuted() {
        //Given
        TaskFactory factory = new TaskFactory();
        //When
        Task shoppingTask = factory.makeTask(TaskFactory.SHOPPINGTASK);
        boolean isShoppingTaskDone = shoppingTask.isTaskExecuted();
        //Then
        Assert.assertFalse(isShoppingTaskDone);
    }

    @Test
    public void testPaintingTaskFactoryNotExecuted() {
        //Given
        TaskFactory factory = new TaskFactory();
        //When
        Task paintingTask = factory.makeTask(TaskFactory.PAINTINGTASK);
        boolean isPaintingTaskDone = paintingTask.isTaskExecuted();
        //Then
        Assert.assertFalse(isPaintingTaskDone);
    }

    @Test
    public void testDrivingTaskFactoryNotExecuted() {
        //Given
        TaskFactory factory = new TaskFactory();
        //When
        Task drivingTask = factory.makeTask(TaskFactory.DRIVINGTASK);
        boolean isDrivingTaskDone = drivingTask.isTaskExecuted();
        //Then
        Assert.assertFalse(isDrivingTaskDone);
    }
}