package com.kodilla.testing.collection;
import org.junit.*;
import java.util.*;

public class CollectionTestSuite {
    @Before
    public void before(){
        System.out.println("Test Case: begin");
    }
    @After
    public void after(){
        System.out.println("Test Case: end");
    }
    @BeforeClass
    public static void beforeClass() {
        System.out.println("Test Suite: begin");
    }
    @AfterClass
    public static void afterClass() {
        System.out.println("Test Suite: end");
    }
    @Test
    public void testOddNumbersExterminatorEmptyList(){
        //Given
        OddNumbersExterminator exterminator = new OddNumbersExterminator();
        ArrayList<Integer> testNumbers = new ArrayList<Integer>();
        //When
        ArrayList<Integer> result = exterminator.exterminate(testNumbers);
        System.out.println("Testing: OddNumbersExterminatorEmptyList");
        //Then
        ArrayList<Integer> emptyTestList = new ArrayList<Integer>();
        Assert.assertEquals(emptyTestList, result);

    }
}