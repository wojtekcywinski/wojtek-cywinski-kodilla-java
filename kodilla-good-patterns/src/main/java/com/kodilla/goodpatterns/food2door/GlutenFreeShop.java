package com.kodilla.goodpatterns.food2door;

public class GlutenFreeShop implements ProducerService {

    public String getName() {
        return "GlutenFreeShop";
    }

    public boolean process(Product product) {
        System.out.println("The ORDER from GlutenFreeShop will be delivered within 48 hours.");
        return true;
    }


}
