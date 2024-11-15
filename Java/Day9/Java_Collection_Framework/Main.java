package Java_Collection_Framework;

// ArrayList class of collections
// The collection framework is defined in the java.util package

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


// +++++++++++++++++++++++ output ++++++++++++++++++++++++

// @Dheeraj2002kumar ➜ .../Foundation-Language/Java/Day9/Java_Collection_Framework (main) $ javac Main.java 
// @Dheeraj2002kumar ➜ .../Foundation-Language/Java/Day9/Java_Collection_Framework (main) $ java Main.java
// ArrayList: [Dog, Cat, Horse]