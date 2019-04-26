package com.kodilla.stream.forumuser;

import java.time.LocalDate;
import java.util.ArrayList;
import java.util.List;


public final class Forum {
    private final List<ForumUser> listOfUsers = new ArrayList<>();

    public Forum(){
        listOfUsers.add(new ForumUser(1, "Oleksiandr", 'M', LocalDate.of(2014, 2,1), 2));
        listOfUsers.add(new ForumUser(2, "Kontemplator", 'M', LocalDate.of(2012, 4,28), 41));
        listOfUsers.add(new ForumUser(3, "Furios", 'F', LocalDate.of(2010, 5,2), 3));
        listOfUsers.add(new ForumUser(4, "ProGamer", 'M', LocalDate.of(2000, 8,11), 18));
        listOfUsers.add(new ForumUser(5, "Lipton", 'F', LocalDate.of(1993, 11,12), 15));
        listOfUsers.add(new ForumUser(6, "Proseco", 'F', LocalDate.of(1988, 5,2), 39));
        listOfUsers.add(new ForumUser(7, "Muzio", 'M', LocalDate.of(1963, 8,11), 16));
        listOfUsers.add(new ForumUser(8, "Abras", 'F', LocalDate.of(1993, 11,12), 28));
    }

    public List<ForumUser> getUserList(){
        return listOfUsers;
    }
}
