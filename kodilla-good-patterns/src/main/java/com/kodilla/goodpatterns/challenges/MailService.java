package com.kodilla.goodpatterns.challenges;

public class MailService implements InformationService {

    public void inform(User user) {
        System.out.println("Information about the order placed by " + user.getUserName() + " has been sent to the mailbox.");
    }
}

