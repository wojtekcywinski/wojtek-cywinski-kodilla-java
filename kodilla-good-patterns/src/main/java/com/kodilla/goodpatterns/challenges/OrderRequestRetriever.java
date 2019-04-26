package com.kodilla.goodpatterns.challenges;

import java.time.LocalDateTime;

public class OrderRequestRetriever {

    public OrderRequest retrieve(){
        Product product = new Product("Red Dead Redemption 2", 229.39);
        User user = new User("John");
        LocalDateTime dateOfSale = LocalDateTime.of(2019, 6, 3, 18, 40, 22);

        return new OrderRequest(user, dateOfSale, product);
    }
}
