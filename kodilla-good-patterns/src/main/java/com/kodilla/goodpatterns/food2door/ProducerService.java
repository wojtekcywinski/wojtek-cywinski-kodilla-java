package com.kodilla.goodpatterns.food2door;

public interface ProducerService {
    boolean process(Product product);
    String getName();
}
