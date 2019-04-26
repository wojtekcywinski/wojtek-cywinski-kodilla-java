package com.kodilla.goodpatterns.food2door;

import com.kodilla.goodpatterns.food2door.*;

public class ProducentProvider {

    public ProducerService producentProvide(Product product) {
        GlutenFreeShop glutenFreeShop = new GlutenFreeShop();
        HealthyFood healthyFood = new HealthyFood();
        ExtraFreeShop extraFreeShop = new ExtraFreeShop();
        if (product.getType().equals("Fruits") || product.getType().equals("Vegetables")) {
            return glutenFreeShop;
        } else if (product.getType().equals("Meat") || product.getType().equals("Fish")) {
            return healthyFood;
        } else if (product.getType().equals("Cheese") || product.getType().equals("Milk"));
        return extraFreeShop;
    }
}