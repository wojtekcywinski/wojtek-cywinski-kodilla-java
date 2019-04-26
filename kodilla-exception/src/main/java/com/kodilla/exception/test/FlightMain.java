package com.kodilla.exception.test;

public class FlightMain {

    public static void main(String[] args) throws RouteNotFoundException {

        Flight flight = new Flight("Wroclaw", "London");

        FlightService flightService = new FlightService();

        try {
            flightService.findFlight(flight);

        } catch (RouteNotFoundException e) {
            System.out.println("Your arrival airport does not exist!");

        } finally {
            System.out.println("\n" + "Thank you for choosing our airlines!");
        }
    }
}
