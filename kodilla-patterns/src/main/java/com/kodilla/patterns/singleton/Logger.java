package com.kodilla.patterns.singleton;

public class Logger {
    private static Logger logger = null;
    private String lastLog = "";

    private Logger() {
        this.lastLog = lastLog;
    }

    public static Logger getInstance() {
        synchronized (Logger.class) {
            if (logger == null) {
                logger = new Logger();
            }
            return logger;
        }
    }

    public void log(String log) {
        lastLog = log;
        System.out.println("Log: [" + log + "]");
    }

    public String getLastLog() {
        return lastLog;
    }
}