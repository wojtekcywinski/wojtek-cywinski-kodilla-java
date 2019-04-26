package com.kodilla.goodpatterns.food2door;

public class Application {
    public static void main (String[] args) {
        Product product = new Product("Apple", "Fruits", 5);
        OrderProcessor orderProcessor = new OrderProcessor();
        ProducentProvider producentProvider = new ProducentProvider();
        ProducerService provider = producentProvider.producentProvide(product);
        orderProcessor.orderProcess(product, provider);
    }
}
