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


// java list (ArrayList)

/*
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
 */

// ++++++++++++++++++++++++++++ output ++++++++++++++++++++++++++

// @Dheeraj2002kumar ➜ .../Foundation-Language/Java/Day9/Java_Collection_Framework (main) $ javac Main.java 
// @Dheeraj2002kumar ➜ .../Foundation-Language/Java/Day9/Java_Collection_Framework (main) $ java Main.java
// List: [4, 9, 8]
// Accessed Element: 8
// Removed Element: 9



// -----------------------------------------------------

// java list (linkedList)

import java.util.List;
import java.util.LinkedList;

public class Main {

    public static void main(String[] args) {
        
        // Creating list using the LinkedList class
        List<Integer> numbers = new LinkedList<>();

        // add elements to the list
        numbers.add(33);
        numbers.add(34);
        numbers.add(35);
        System.out.println("List: " + numbers);

        // Access element from the list
        int number = numbers.get(2); // 2 is index position
        System.out.println("Accessed Element: "+ number);

        // Using the indexOf() method
        int index1 = numbers.indexOf(2);
        int index2 = numbers.indexOf(35);
        System.out.println("Position of 2 is: " + index1);
        System.out.println("Position of 35 is: " + index2);

        // Remove element from the list
        int removedNumber = numbers.remove(1);
        System.out.println("Removed Element: " + removedNumber);

        System.out.println("Fainl linkedList is: " + numbers);
    }
}


// ++++++++++++++++++++++++ output ++++++++++++++++++++

// @Dheeraj2002kumar ➜ .../Foundation-Language/Java/Day9/Java_Collection_Framework (main) $ javac Main.java 
// @Dheeraj2002kumar ➜ .../Foundation-Language/Java/Day9/Java_Collection_Framework (main) $ java Main.java
// List: [33, 34, 35]
// Accessed Element: 35
// Position of 2 is: -1
// Position of 35 is: 2
// Removed Element: 34
// Fainl linkedList is: [33, 35]