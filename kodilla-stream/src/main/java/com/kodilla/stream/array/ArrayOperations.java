package com.kodilla.stream.array;

        import java.util.OptionalDouble;
        import java.util.stream.DoubleStream;
        import java.util.stream.IntStream;

public interface ArrayOperations {
    static double getAverage(int[] numbers){
        IntStream.of(numbers)
                .forEach(System.out::println);
        OptionalDouble array = IntStream.of(numbers)
                .average();
        double doubleAverage = array.getAsDouble();
        return doubleAverage;
    }

}
