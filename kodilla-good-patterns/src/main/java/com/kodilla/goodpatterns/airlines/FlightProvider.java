package com.kodilla.goodpatterns.airlines;

import java.util.ArrayList;
import java.util.List;

public class FlightProvider {

    public List<Flight> getFlight() {
        List<Flight> flights = new ArrayList<>();
            flights.add(new Flight("Warsaw", "Moscow"));
            flights.add(new Flight("Warsaw", "London"));
            flights.add(new Flight("Warsaw", "Berlin"));
            flights.add(new Flight("Moscow", "Warsaw"));
            flights.add(new Flight("Moscow", "Berlin"));
            flights.add(new Flight("Moscow", "London"));
            flights.add(new Flight("Berlin", "Warsaw"));
            flights.add(new Flight("Berlin", "Moscow"));
            flights.add(new Flight("Berlin", "London"));
            flights.add(new Flight("London", "Berlin"));
            flights.add(new Flight("London", "Moscow"));
            flights.add(new Flight("London", "Warsaw"));
            flights.add(new Flight("Madrid", "Warsaw"));
            flights.add(new Flight("Madrid", "Rome"));
            flights.add(new Flight("Madrid", "London"));
            flights.add(new Flight("Madrid", "Moscow"));
            flights.add(new Flight("Moscow", "Tokio"));
            flights.add(new Flight("Tokio", "Warsaw"));
            flights.add(new Flight("Helsinki", "Berlin"));
        return flights;
    }
}
