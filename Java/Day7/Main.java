package Day7;

// Inheritance, Abstraction, Interface, Polymorphism

/*  
// Method Overriding in java inheritance


class Animal{
    public void eat(){
        System.out.println("I can eat");
    }
}

class Dog extends Animal{
    // overriding the eat() method 
    @Override
    public void eat(){
        System.out.println("I eat dog food");
    }

    // new method in subclass
    public void bark(){
        System.out.println("I can bark");
    }
}

class Main {

    public static void main(String[] args) {
        // create an object of the subclass
        Dog labrador = new Dog();

        // call the eat() method 
        labrador.eat();
        labrador.bark();
    }
}

// ++++++++++++++++ output ++++++++++++++++++++
// @Dheeraj2002kumar ➜ /workspaces/Foundation-Language (main) $ cd Java/
// @Dheeraj2002kumar ➜ /workspaces/Foundation-Language/Java (main) $ javac Day7/Main.java
// @Dheeraj2002kumar ➜ /workspaces/Foundation-Language/Java (main) $ java Day7.Main
// I eat dog food
// I can bark

 */




// --------------------------------------------------------------

// super class

/* 
class Animal{
    public void eat(){
        System.out.println("I can eat");
    }
}

class Dog extends Animal{
    // overriding the eat() method
    @Override
    public void eat(){
        // call mrthod of superclass
        super.eat();
        System.out.println("I eat dog food..");
    }

    // new method in subclass
    public void bark(){
        System.out.println("I can bark...");
    }
}

public class Main {
    public static void  main(String[] args){
        Dog labrador = new Dog();

        // call the eat() method
        labrador.eat();
        labrador.bark();
    }
    
}


// +++++++++++++++++++++++ output ++++++++++++++++++++++++

// @Dheeraj2002kumar ➜ /workspaces/Foundation-Language/Java (main) $ javac Day7/Main.java
// @Dheeraj2002kumar ➜ /workspaces/Foundation-Language/Java (main) $ java Day7.Main
// I can eat
// I eat dog food..
// I can bark...
*/
 




 //-----------------------------------------------------

 // protected members in Inheritance
/*
class Animal{
    protected String name;
    protected void display(){
        System.out.println("I am an animal.");
    }
}

class Dog extends Animal{
    public void getInfo(){
        System.out.println("My name is " + name);
    }
}

 public class Main {
 
    public static void main(String[] args) {
        Dog labrador = new Dog();
        labrador.name = "Pinky";
        labrador.display();

        labrador.getInfo();
    }
 }

 //+++++++++++++++ output +++++++++++++++++
//  @Dheeraj2002kumar ➜ /workspaces/Foundation-Language/Java (main) $ javac Day7/Main.java
// @Dheeraj2002kumar ➜ /workspaces/Foundation-Language/Java (main) $ java Day7.Main
// I am an animal.
// My name is Pinky

 */



 // ---------------------------------------

/*
 // super class constructor

 class Animal{
    // default ro no-argument constructor of class Animal
    Animal(){
        System.out.println("I am an animal");
    }
 }

 class Dog extends Animal{
    // default or no-argument constructor of class Dog
    Dog(){
        // calling default constructor of the superclass
        super();
        System.out.println("I am a dog...");
    }
 }

 public class Main{
    public static void main(String[] args) {
        Dog dog1 = new Dog();
    }
 }


 // ++++++++++++++++++++++++ output ++++++++++++++++++++++++++++
//  @Dheeraj2002kumar ➜ /workspaces/Foundation-Language/Java (main) $ javac Day7/Main.java
// @Dheeraj2002kumar ➜ /workspaces/Foundation-Language/Java (main) $ java  Day7.Main
// I am an animal
// I am a dog...

 */



 //-----------------------------------------------------

/*
 // Abstract class

 abstract class Language{
    // method of abstract class
    public void display(){
        System.out.println("This is Java Programming...");
    }
 }

 class Main extends Language {
    public static void main(String[] args) {
        // create an object of Main 
        Main obj = new  Main();

        // access method of abstract class
        // using object of Main class
        obj.display();
    }
 }


 // ++++++++++++++++++++++ output +++++++++++++++++++++++++++
//  @Dheeraj2002kumar ➜ /workspaces/Foundation-Language/Java (main) $ javac Day7/Main.java
// @Dheeraj2002kumar ➜ /workspaces/Foundation-Language/Java (main) $ java  Day7.Main
// This is Java Programming...

 */


//---------------------------------------------------------------------

/*

// Implementing Abstract Methods:-
// If the abstract class include any abstract method, then all the child classes inherited from the abstract superclass must provide the implementation of the abstrac method. 

abstract class Animal{
    abstract void makeSound();
    public void eat(){
        System.out.println("I can eat..");
    }
}

class Dog extends Animal{
    // provide implementation of abstract method
    public void makeSound(){
        System.out.println("Bark bark...");
    }
}


class Main{
    public static void main(String[] args) {
        // create an object of Dog Class
        Dog d1 = new Dog();
        d1.makeSound();
        d1.eat();
    }
}


// ++++++++++++++++++ output +++++++++++++++++++++++++

// @Dheeraj2002kumar ➜ /workspaces/Foundation-Language/Java (main) $ javac Day7/Main.java
// @Dheeraj2002kumar ➜ /workspaces/Foundation-Language/Java (main) $ java  Day7.Main
// Bark bark...
// I can eat..

 */


// -------------------------------------------------------

/*
// java Abstraction

abstract class Animal{
    abstract void makeSound();
}

class Dog extends Animal{
    // implementation of abstract method
    public void makeSound(){
        System.out.println("Bark bark....");
    }
}

class Cat extends Animal{
    // implementation of abstract method
    public void makeSound(){
        System.out.println("Meows...");
    }
}

class Main{
    public static void main(String[] args){
        Dog d1 = new Dog();
        d1.makeSound();
        Cat c1 = new Cat();
        c1.makeSound();
    }
}

// ++++++++++++++++++++ output +++++++++++++++++++++
// @Dheeraj2002kumar ➜ /workspaces/Foundation-Language/Java (main) $ java  Day7.Main
// Bark bark....
// Meows...


 */



 //------------------------------------------------------

/*
 // Implementing an interface:-
 // Like abstract classes, we cannot create objects of interfaces.

 // To use an interface, other classes must implement it. We use the implements keyword to implement an interface.

 interface Polygon{
    void getArea(int length, int breadth);
 }

 // implement the  Polygon interface
 class Rectangle implements Polygon{
    // implementation of abstract method
    public void getArea(int length, int breadth){
        System.out.println("The area of the rectangle is " + (length * breadth));
    }
 }

 class Main{
    public static void main(String[] args) {
        Rectangle r1 = new Rectangle();
        r1.getArea(5, 6);
    }
 }

 // ++++++++++++++++++++++++  output ++++++++++++++++
//  @Dheeraj2002kumar ➜ /workspaces/Foundation-Language/Java (main) $ javac Day7/Main.java
// @Dheeraj2002kumar ➜ /workspaces/Foundation-Language/Java (main) $ java  Day7.Main
// The area of the rectangle is 30

 */



 // --------------------------------------------------------

// Example: Default Method in java Interface

interface Polygon{
    void getArea();
    // default method
    default void getSides(){
        System.out.println("I can get sides of a polygon...");
    }
}

// implements the interface
class Rectangle implements Polygon{
    public void getArea(){
        int length = 6;
        int breadth = 5;
        int area = length * breadth;
        System.out.println("The area of the rectangle is " + area);
    }

    // overrides the getSides()
    public void getSides(){
        System.out.println("I have 4 sides.");
    }
}

// implements the interface
class Square implements Polygon{
    public void getArea(){
        int length = 5;
        int area = length * length;
        System.out.println("The area of the square is " + area);
    }
}

class Main{
    public static void main(String[] args){
        // create an object of Rectangle
        Rectangle r1 = new Rectangle();
        r1.getArea();
        r1.getSides();

        // create an object of Square 
        Square s1 = new Square();
        s1.getArea();
        s1.getSides();
    }
}



// ++++++++++++++++++++++ output