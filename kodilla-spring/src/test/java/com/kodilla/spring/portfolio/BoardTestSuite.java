package com.kodilla.spring.portfolio;

import com.kodilla.spring.library.Library;
import org.junit.Assert;
import org.junit.Test;
import org.junit.runner.RunWith;
import org.springframework.boot.test.context.SpringBootTest;
import org.springframework.context.ApplicationContext;
import org.springframework.context.annotation.AnnotationConfigApplicationContext;
import org.springframework.test.context.junit4.SpringRunner;

@RunWith(SpringRunner.class)
@SpringBootTest
public class BoardTestSuite {
    @Test
    public void testTaskAdd() {
        //Given
        ApplicationContext context =
                new AnnotationConfigApplicationContext("com.kodilla.spring");
        Board board = context.getBean(Board.class);
        Task task = new Task("Delivery");
        //When
        board.getToDoList().addTask(task);
        board.getInProgressList().addTask(task);
        board.getDoneList().addTask(task);
        //Then
        Assert.assertEquals("Calculation of delivery time", board.getToDoList().downloadTask());
        Assert.assertEquals("Calculation of delivery time", board.getInProgressList().downloadTask());
        Assert.assertEquals("Calculation of delivery time", board.getDoneList().downloadTask());
    }
}
