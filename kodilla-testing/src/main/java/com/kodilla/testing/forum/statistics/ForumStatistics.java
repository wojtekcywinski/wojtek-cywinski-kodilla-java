package com.kodilla.testing.forum.statistics;
import java.util.ArrayList;

public class ForumStatistics {

    private int numberofUsers;
    private int posts;
    private int comments;
    private double averagePostsPerUser;
    private double averageCommentsPerUser;
    private double averageCommentsPerPosts;

    public void calculateAdvStatistics(Statistics statistics) {
        numberofUsers = statistics.usersNames().size();
        posts = statistics.postsCount();
        comments = statistics.commentsCount();
        averagePostsPerUser = (double) posts / numberofUsers;
        averageCommentsPerUser = (double) comments / numberofUsers;
        averageCommentsPerPosts = (double) comments / posts;
    }

    public int getNumberOfUsers() {
        return numberofUsers;
    }

    public int getPosts() {
        return posts;
    }

    public int getComments() {
        return comments;
    }

    public double getAveragePostsPerUser() {
        if (numberofUsers == 0){
            return 0;
        }
        return averagePostsPerUser;
    }

    public double getAverageCommentsPerUser() {
        if (numberofUsers == 0){
            return 0;
        }
        return averageCommentsPerUser;
    }

    public double getAverageCommentsPerPosts() {
        if (numberofUsers == 0){
            return 0;
        }
        return averageCommentsPerPosts;
    }

    public void showStatistics(){
        System.out.println("Liczba użytkowników: " + getNumberOfUsers());
        System.out.println("Liczba postów: " + getPosts());
        System.out.println("Liczba komentarzy: " + getComments());
        System.out.println("Średnia liczba postów na użytkownika: " + getAveragePostsPerUser());
        System.out.println("Średnia liczba komentarzy na użytkownika: " + getAverageCommentsPerUser());
        System.out.println("Średnia liczba komentarzy na post:" + getAverageCommentsPerPosts());
    }
}
