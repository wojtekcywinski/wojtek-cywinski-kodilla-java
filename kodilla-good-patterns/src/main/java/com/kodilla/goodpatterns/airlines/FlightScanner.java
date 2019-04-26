package com.kodilla.goodpatterns.airlines;

public class FlightScanner {

    public void findFlightFrom(String question) {
        FlightProvider flightProvider = new FlightProvider();
        System.out.println("Loty dostępne z miasta " + question + ":");
        flightProvider.getFlight().stream()
                .filter(flight -> flight.getFrom().equals(question))
                .forEach(System.out::println);
    }

    public void findFlightTo(String question) {
        FlightProvider flightProvider = new FlightProvider();
        System.out.println("Loty dostępne do miasta " + question + ":");
        flightProvider.getFlight().stream()
                .filter(flight -> flight.getFrom().equals(question))
                .forEach(System.out::println);
    }

    public void findConnectingFlight(QuestionConnectionFlight questionConnectionFlight) {
        FlightProvider flightProvider = new FlightProvider();
        System.out.println("Loty dostępne do/z " + questionConnectionFlight.getTo() + ":");
        flightProvider.getFlight().stream()
                .filter(flight -> flight.getFrom().equals(questionConnectionFlight.getFrom()) ||  flight.getTo().equals(questionConnectionFlight.getTo()))
                .filter(f -> f.getFrom().equals(questionConnectionFlight.getInter()) || f.getTo().equals(questionConnectionFlight.getInter()))
                .forEach(System.out::println);
    }
}