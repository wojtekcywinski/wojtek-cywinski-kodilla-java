package com.kodilla.goodpatterns.airlines;

public class Flight {
    private String from;
    private String to;

    public Flight(String from, String to) {
        this.from = from;
        this.to = to;
    }

    public String getFrom() {
        return from;
    }

    public String getTo() {
        return to;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) return true;
        if (!(o instanceof Flight)) return false;

        Flight flight = (Flight) o;

        if (!getFrom().equals(flight.getFrom())) return false;
        return getTo().equals(flight.getTo());
    }

    @Override
    public int hashCode() {
        int result = getFrom().hashCode();
        result = 31 * result + getTo().hashCode();
        return result;
    }

    @Override
    public String toString() {
        return from + " -> " + to;
    }
}
