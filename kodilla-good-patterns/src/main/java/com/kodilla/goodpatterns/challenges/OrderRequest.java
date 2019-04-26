package com.kodilla.goodpatterns.challenges;

import java.time.LocalDateTime;

public class OrderRequest {

    private User user;
    private LocalDateTime dateOfSale;
    private Product product;

    public OrderRequest(User user, LocalDateTime dateOfSale, Product product) {
        this.user = user;
        this.dateOfSale = dateOfSale;
        this.product = product;
    }

    public User getUser() {
        return user;
    }

    public LocalDateTime getDateOfSale() {
        return dateOfSale;
    }

    public Product getProduct() {
        return product;
    }
}
