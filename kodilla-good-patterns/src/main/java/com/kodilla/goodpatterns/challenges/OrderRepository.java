package com.kodilla.goodpatterns.challenges;

import java.time.LocalDateTime;

public interface OrderRepository {
    boolean createSale(User user, LocalDateTime dateOfSale, Product product);
}
