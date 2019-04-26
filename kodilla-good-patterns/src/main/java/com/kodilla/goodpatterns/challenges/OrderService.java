package com.kodilla.goodpatterns.challenges;

import java.time.LocalDateTime;

public interface OrderService {
    boolean sale(User user, LocalDateTime dateOfSale, Product product);
}
