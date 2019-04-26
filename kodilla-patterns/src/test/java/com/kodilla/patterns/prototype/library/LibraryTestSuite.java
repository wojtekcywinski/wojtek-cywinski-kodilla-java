package com.kodilla.patterns.prototype.library;

import com.kodilla.patterns.prototype.Board;
import org.junit.Assert;
import org.junit.Test;

import java.time.LocalDate;
import java.util.Set;

public class LibraryTestSuite {
        @Test
        public void testGetBooks() {
            //Given
            Library library = new Library("MyFirstLibrary");
            Book HarryPotter1 = new Book("Harry Potter and the Philosopher's Stone", "J.K. Rowling", LocalDate.of(1997, 6, 30));
            Book HarryPotter2 = new Book("Harry Potter and the Chamber of Secrets", "J.K. Rowling", LocalDate.of(1998, 7, 2));
            Book HarryPotter3 = new Book("Harry Potter and the Prisoner of Azkaban", "J.K. Rowling", LocalDate.of(1999, 7, 8));
            Book HarryPotter4 = new Book("Harry Potter and the Goblet of Fire", "J.K. Rowling", LocalDate.of(2000, 7, 8));
            Book HarryPotter5 = new Book("Harry Potter and the Order of the Phoenix", "J.K. Rowling", LocalDate.of(2003, 6, 21));
            Book HarryPotter6 = new Book("Harry Potter and the Half-Blood Prince", "J.K. Rowling", LocalDate.of(2006, 7, 17));
            Book HarryPotter7 = new Book("Harry Potter and the Deathly Hallows", "J.K. Rowling", LocalDate.of(2007, 7, 21));

            //When
            Set<Book> myLibrary = library.getBooks();
            myLibrary.add(HarryPotter1);
            myLibrary.add(HarryPotter2);
            myLibrary.add(HarryPotter3);
            myLibrary.add(HarryPotter4);
            myLibrary.add(HarryPotter5);
            myLibrary.add(HarryPotter6);
            myLibrary.add(HarryPotter7);

            //making a shallow copy of object board
            Library clonedLibrary = null;
            try {
                clonedLibrary = library.shallowCopy();
                clonedLibrary.setName("MySecondLibrary");
            } catch (CloneNotSupportedException e) {
                System.out.println(e);
            }

            //making a deep copy of object board
            Library deepClonedLibrary = null;
            try {
                deepClonedLibrary = library.deepCopy();
                deepClonedLibrary.setName("MyThirdLibrary");
                deepClonedLibrary.getBooks().remove(HarryPotter7);
            } catch (CloneNotSupportedException e) {
                System.out.println(e);
            }

            //Then
            System.out.println(myLibrary);
            System.out.println(clonedLibrary);
            System.out.println(deepClonedLibrary);
            Assert.assertEquals(7, myLibrary.size());
            Assert.assertEquals(7, clonedLibrary.getBooks().size());
            Assert.assertEquals(6, deepClonedLibrary.getBooks().size());
            Assert.assertEquals(clonedLibrary.getBooks(), library.getBooks());
            Assert.assertNotEquals(deepClonedLibrary.getBooks(), library.getBooks());
        }
}
