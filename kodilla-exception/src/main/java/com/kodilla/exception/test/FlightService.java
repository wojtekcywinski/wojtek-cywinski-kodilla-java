package com.kodilla.exception.test;

import java.util.HashMap;
import java.util.Map;

public class FlightService {
    public void findFlight(Flight flight) throws RouteNotFoundException{
        Map<String, Boolean> airports = new HashMap<>();
        airports.put("London", true);
        airports.put("Warsaw", false);
        airports.put("Paris", false);
        airports.put("Madrid", true);
        airports.put("Rome", true);
        airports.put("Moscow", false);

        if (airports.containsKey(flight.getArrivalAirport()) && airports.get(flight.getArrivalAirport())) {
            System.out.println("Your flight: " + flight.getDepartureAirport() + " - " + flight.getArrivalAirport() + " is available!");

        } else if (airports.containsKey(flight.getArrivalAirport())) {
            System.out.println("Unfortunately, the selected airport is not available!");

        } else {
            throw new RouteNotFoundException();
        }
    }
}
