package com.kodilla.patterns.strategy.social;

import com.kodilla.patterns.strategy.social.publishers.TwitterPublisher;
import org.junit.Assert;
import org.junit.Test;

public class UserTestSuite {
    @Test
    public void testDefaultSharingStrategies() {
        //Given
        User hubert = new Millenials("Hubert Rosiński");
        User wojtek = new YGeneration("Wojtek Cywiński");
        User kodilla = new ZGeneration("Kodilla Kodilla");

        //When
        String hubertPost = hubert.sharePost();
        System.out.println("Hubert: " + hubertPost);
        String wojtekPost = wojtek.sharePost();
        System.out.println("Wojtek: " + wojtekPost);
        String kodillaPost = kodilla.sharePost();
        System.out.println("Kodilla: " + kodillaPost);

        //Then
        Assert.assertEquals("You've just published on Facebook!", hubertPost);
        Assert.assertEquals("You've just published on Snapchat!", wojtekPost);
        Assert.assertEquals("You've just published on Twitter!", kodillaPost);
    }

    @Test
    public void testIndividualSharingStrategy() {
        //Given
        User robert = new Millenials("Robert Duvall");

        //When
        String robertPost = robert.sharePost();
        System.out.println("Robert: " + robertPost);
        robert.setSocialPublisher(new TwitterPublisher());
        robertPost = robert.sharePost();
        System.out.println("Robert now: " + robertPost);

        //Then
        Assert.assertEquals("You've just published on Twitter!", robertPost);
    }
}