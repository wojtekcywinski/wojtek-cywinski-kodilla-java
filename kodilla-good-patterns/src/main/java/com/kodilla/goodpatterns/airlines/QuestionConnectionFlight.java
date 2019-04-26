package com.kodilla.goodpatterns.airlines;

public class QuestionConnectionFlight {
    private String from;
    private String to;
    private String inter;

    public QuestionConnectionFlight(String from, String to, String inter) {
        this.from = from;
        this.to = to;
        this.inter = inter;
    }

    public String getFrom() {
        return from;
    }

    public String getTo() {
        return to;
    }

    public String getInter() {
        return inter;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) return true;
        if (!(o instanceof QuestionConnectionFlight)) return false;

        QuestionConnectionFlight that = (QuestionConnectionFlight) o;

        if (!from.equals(that.from)) return false;
        if (!to.equals(that.to)) return false;
        return inter.equals(that.inter);
    }
}
