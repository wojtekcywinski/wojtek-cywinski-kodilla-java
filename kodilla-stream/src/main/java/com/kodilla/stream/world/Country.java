package com.kodilla.stream.world;

import java.math.BigDecimal;
import java.math.BigInteger;

public class Country {
    private String name;
    private BigDecimal people;

    public Country(String name, BigDecimal people) {
        this.name = name;
        this.people = people;
    }

    public BigDecimal getPeopleQuantity() {
        return people;
    }
}
