package com.kodilla.goodpatterns.airlines;

public class Application {

    public static void main (String[] args) {

        FlightScanner flightScanner = new FlightScanner();

        QuestionConnectionFlight questionConnectionFlight1 = new QuestionConnectionFlight("Warsaw", "Tokio", "Moscow");
        flightScanner.findFlightFrom("Warsaw");
        flightScanner.findFlightTo("Warsaw");
        flightScanner.findConnectingFlight(questionConnectionFlight1);
    }
}