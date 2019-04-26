package com.kodilla.testing.forum.statistics;
import org.junit.Assert;
import org.junit.Test;
import java.util.ArrayList;

import static org.junit.Assert.*;
import static org.mockito.Mockito.mock;
import static org.mockito.Mockito.when;

public class StatisticsTestSuite {

    @Test
    public void testCalculateAdvStatisticsWhileUsers100AndPosts1000AndMoreComments() {
        //Given
        Statistics statistics = mock(Statistics.class);
        ArrayList<String> usersNames = new ArrayList<String>();
        for (int i = 0; i < 100; i++) {
            usersNames.add("User" + i);
        }
        when(statistics.usersNames()).thenReturn(usersNames);
        when(statistics.postsCount()).thenReturn(1000);
        when(statistics.commentsCount()).thenReturn(3500);
        ForumStatistics forumStatistics = new ForumStatistics();
        //When
        forumStatistics.calculateAdvStatistics(statistics);
        //Then
        assertEquals(100, forumStatistics.getNumberOfUsers());
        assertEquals(1000, forumStatistics.getPosts());
        assertEquals(3500, forumStatistics.getComments());
        assertEquals(10, forumStatistics.getAveragePostsPerUser(), 0);
        assertEquals(35, forumStatistics.getAverageCommentsPerUser(), 0);
        assertEquals(3.5, forumStatistics.getAverageCommentsPerPosts(), 0);
    }

    @Test
    public void testCalculateAdvStatisticsWhileUsersAndPostsAndCommentsAre0() {
        //Given
        Statistics statistics = mock(Statistics.class);
        ArrayList<String> usersNames = new ArrayList<String>();
        when(statistics.usersNames()).thenReturn(usersNames);
        when(statistics.postsCount()).thenReturn(0);
        when(statistics.commentsCount()).thenReturn(0);
        ForumStatistics forumStatistics = new ForumStatistics();
        //When
        forumStatistics.calculateAdvStatistics(statistics);
        //Then
        assertEquals(0, forumStatistics.getNumberOfUsers());
        assertEquals(0, forumStatistics.getPosts());
        assertEquals(0, forumStatistics.getComments());
        assertEquals(0, forumStatistics.getAveragePostsPerUser(), 0);
        assertEquals(0, forumStatistics.getAverageCommentsPerUser(), 0);
        assertEquals(0, forumStatistics.getAverageCommentsPerPosts(), 0);
    }

    @Test
    public void testCalculateAdvStatisticsWhileCommentsLessThanPosts() {
        //Given
        Statistics statistics = mock(Statistics.class);
        ArrayList<String> usersNames = new ArrayList<String>();
        for (int i = 0; i < 550; i++) {
            usersNames.add("User" + i);
        }
        when(statistics.usersNames()).thenReturn(usersNames);
        when(statistics.postsCount()).thenReturn(112);
        when(statistics.commentsCount()).thenReturn(84);
        ForumStatistics forumStatistics = new ForumStatistics();
        //When
        forumStatistics.calculateAdvStatistics(statistics);
        //Then
        assertEquals(550, forumStatistics.getNumberOfUsers());
        assertEquals(112, forumStatistics.getPosts());
        assertEquals(84, forumStatistics.getComments());
        assertEquals(0.23, forumStatistics.getAveragePostsPerUser(), 0.1);
        assertEquals(0.15, forumStatistics.getAverageCommentsPerUser(), 0.1);
        assertEquals(0.75, forumStatistics.getAverageCommentsPerPosts(), 0.1);
        }
    }