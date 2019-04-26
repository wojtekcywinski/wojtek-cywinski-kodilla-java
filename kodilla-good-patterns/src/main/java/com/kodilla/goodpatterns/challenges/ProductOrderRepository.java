package com.kodilla.goodpatterns.challenges;

import java.time.LocalDateTime;

public class ProductOrderRepository implements OrderRepository {

    public boolean createSale(User user, LocalDateTime dateOfSale, Product product) {
        return true;
    }
}
