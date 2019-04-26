package com.kodilla.goodpatterns.food2door;

public class ExtraFreeShop implements ProducerService {

    public String getName() {
        return "ExtraFreeShop";
    }

    public boolean process(Product product) {
        System.out.println("The ORDER from ExtraFreeShop will be delivered within 24 hours.");
        return true;
    }
}
