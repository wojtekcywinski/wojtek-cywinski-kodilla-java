package com.kodilla.goodpatterns.food2door;

public class Product {
    private String name;
    private String type;
    private int amount;

    public Product(String name, String type, int amount) {
        this.name = name;
        this.type = type;
        this.amount = amount;
    }

    public String getType() {
        return type;
    }

    public int getAmount() {
        return amount;
    }

    public String getName() {
        return name;
    }

    public String toString() {
        return "Type: " + type + "\n" +
                "Amount: " + amount;
    }
}
