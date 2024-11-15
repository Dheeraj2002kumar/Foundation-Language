package Java_Collection_Framework;

// ArrayList class of collections
// The collection framework is defined in the java.util package
/*
import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        
        ArrayList<String> animals = new ArrayList<>();

        // add elements
        animals.add("Dog");
        animals.add("Cat");
        animals.add("Horse");

        System.out.println("ArrayList: " + animals);
    }    
}
 */

// +++++++++++++++++++++++ output ++++++++++++++++++++++++

// @Dheeraj2002kumar ➜ .../Foundation-Language/Java/Day9/Java_Collection_Framework (main) $ javac Main.java 
// @Dheeraj2002kumar ➜ .../Foundation-Language/Java/Day9/Java_Collection_Framework (main) $ java Main.java
// ArrayList: [Dog, Cat, Horse]



// ---------------------------------------------------


// java list

import java.util.List;
import java.util.ArrayList;

public class Main {

    public static void main(String[] args) {
        
        // Creating list using the ArrayList class
        List<Integer> numbers = new ArrayList<>();

        // add elements to the list
        numbers.add(4);
        numbers.add(9);
        numbers.add(8);
        System.out.println("List: "+ numbers);

        // Access element from the list
        int number = numbers.get(2); // 2 is index 
        System.out.println("Accessed Element: " + number);

        // Remove element from the list
        int removedNumber = numbers.remove(1); // 1 is index position
        System.out.println("Removed Element: " + removedNumber);
    }
}


// ++++++++++++++++++++++++++++ output ++++++++++++++++++++++++++

// @Dheeraj2002kumar ➜ .../Foundation-Language/Java/Day9/Java_Collection_Framework (main) $ javac Main.java 
// @Dheeraj2002kumar ➜ .../Foundation-Language/Java/Day9/Java_Collection_Framework (main) $ java Main.java
// List: [4, 9, 8]
// Accessed Element: 8
// Removed Element: 9