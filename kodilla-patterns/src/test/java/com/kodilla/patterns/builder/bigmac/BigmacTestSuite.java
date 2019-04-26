package com.kodilla.patterns.builder.bigmac;

import org.junit.Assert;
import org.junit.Test;

public class BigmacTestSuite {
    @Test
    public void testBigMacCreate() {
        //Given
        BigMac bigMac = new BigMac.BigMacBuilder()
                .bun("With sesame")
                .burgers(2)
                .sauce("standard")
                .ingredient("Salad")
                .ingredient("Onion")
                .ingredient("Bacon")
                .ingredient("Cucumber")
                .build();
        System.out.println(bigMac);
        //When
        int howManyIngredients = bigMac.getIngredients().size();
        //Then
        Assert.assertEquals(4, howManyIngredients);
    }
}