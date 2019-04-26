package com.kodilla.stream.world;

import org.junit.Assert;
import org.junit.Test;

import java.math.BigDecimal;
import java.util.ArrayList;
import java.util.List;

public class WorldTestSuite {
    @Test
    public void testGetPeopleQuantity() {
        //Given
        List<Country> europeCountries = new ArrayList<>();
        europeCountries.add(new Country("Poland", new BigDecimal(38433600)));
        europeCountries.add(new Country("France", new BigDecimal(66993000)));
        europeCountries.add(new Country("Germany", new BigDecimal(82887000)));
        europeCountries.add(new Country("England", new BigDecimal(55268100)));
        europeCountries.add(new Country("Russia", new BigDecimal(146877088)));
        Continent europe = new Continent(europeCountries);
        List<Country> asiaCountries = new ArrayList<>();
        asiaCountries.add(new Country("China", new BigDecimal(1420000000)));
        asiaCountries.add(new Country("India", new BigDecimal(1316896000)));
        asiaCountries.add(new Country("Japan", new BigDecimal(125878370)));
        asiaCountries.add(new Country("Indonesia", new BigDecimal(261989000)));
        Continent asia = new Continent(asiaCountries);
        List<Country> africaCountries = new ArrayList<>();
        africaCountries.add(new Country("Nigeria", new BigDecimal(190632261)));
        africaCountries.add(new Country("Etiopia", new BigDecimal(105350020)));
        africaCountries.add(new Country("Egipt", new BigDecimal(97041072)));
        africaCountries.add(new Country("Democratic Republic of the Congo", new BigDecimal(83301151)));
        africaCountries.add(new Country("RSA", new BigDecimal(54841552)));
        Continent africa = new Continent(africaCountries);
        List<Country> northAmericaCountries = new ArrayList<>();
        northAmericaCountries.add(new Country("USA", new BigDecimal(313232044)));
        northAmericaCountries.add(new Country("Canada", new BigDecimal(34030589)));
        northAmericaCountries.add(new Country("Mexico", new BigDecimal(113724226)));
        Continent northAmerica = new Continent(northAmericaCountries);
        List<Country> southAmericaCountries = new ArrayList<>();
        southAmericaCountries.add(new Country("Brazil", new BigDecimal(203429773)));
        southAmericaCountries.add(new Country("Argentina", new BigDecimal(41769726)));
        southAmericaCountries.add(new Country("Columbia", new BigDecimal(44725543)));
        Continent southAmerica = new Continent(southAmericaCountries);
        List<Country> oceaniaCountries = new ArrayList<>();
        oceaniaCountries.add(new Country("Australia", new BigDecimal(23268319)));
        oceaniaCountries.add(new Country("New Zealand", new BigDecimal(6310129)));
        oceaniaCountries.add(new Country("Papua New Guinea", new BigDecimal(4570038)));
        Continent oceania = new Continent(oceaniaCountries);
        List<Continent> continents = new ArrayList<>();
        continents.add(europe);
        continents.add(asia);
        continents.add(africa);
        continents.add(northAmerica);
        continents.add(southAmerica);
        continents.add(oceania);
        //When
        World world = new World(continents);
        BigDecimal people = world.getPeopleQuantity();
        //Then
        BigDecimal expectedPeople = new BigDecimal("4831448601");
        Assert.assertEquals(expectedPeople, people);

    }
}
