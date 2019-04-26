package com.kodilla.goodpatterns.food2door;

public class HealthyFood implements ProducerService {

    public String getName() {
        return "HealthyShop";
    }

    public boolean process(Product product) {
        System.out.println("The ORDER from HealthyShop will be delivered within 24 hours.");
        return true;
    }
}
