package com.kodilla.goodpatterns.challenges;

public class OrderDTO {
    public User user;
    public boolean isSaled;

    public OrderDTO(User user, boolean isSaled) {
        this.user = user;
        this.isSaled = isSaled;
    }

    public User getUser() {
        return user;
    }

    public boolean isSaled() {
        return isSaled;
    }
}
