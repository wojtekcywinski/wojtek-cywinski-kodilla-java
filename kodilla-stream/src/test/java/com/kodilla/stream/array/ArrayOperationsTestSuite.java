package com.kodilla.stream.array;

import com.kodilla.stream.book.Book;
import com.kodilla.stream.book.BookDirectory;
import org.junit.Assert;
import org.junit.Test;

import java.util.List;
import java.util.OptionalDouble;
import java.util.stream.DoubleStream;
import java.util.stream.IntStream;

public class ArrayOperationsTestSuite {
    @Test
    public void testGetAverage() {
        //Given
        int array[] = new int[5];
        array[0] = 1;
        array[1] = 3;
        array[2] = 4;
        array[3] = 7;
        array[4] = 9;

        //When
        double averageOfArray = ArrayOperations.getAverage(array);

        //Then
        Assert.assertEquals(4.8, averageOfArray, 0.1);


    }
}
