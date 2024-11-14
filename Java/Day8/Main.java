package Day8;

/*
// Example: Polymorphism using method overriding
// Note: The method that is called is determined during the execution of the program. Hence, method overriding is a run-time polymorphism

class Language{
  public void displayInfo(){
    System.out.println("Common English Language");
  }
}

class Java extends Language{
  @Override
  public void displayInfo(){
    System.out.println("Java Programming Language");
  }
}

public class Main{
  public static void main(String[] args){
    // create an object of java class
    Java j1 = new Java();
    j1.displayInfo();

    // create an object of Language class
    Language l1 = new Language();
    l1.displayInfo();
  }
}

// ++++++++++++++++++ output +++++++++++++++++++++++

// vscode ➜ /workspaces/Foundation-Language/Java/Day8 (main) $ javac Main.java
// vscode ➜ /workspaces/Foundation-Language/Java/Day8 (main) $ java Main
// Java Programming Language
// Common English Language

 */




 //------------------------------------------------------------

/*
// Polymorphis using method overloading

// Note: The method that is called is determined by the compiler. Hence it is also known as compile-time polymorphism

class Pattern {
  // method without parameter
  public void display(){
    for(int i = 0; i < 10; i++){
      System.out.print("*");
    }
  }

  // method with single parameter
  public void display(char symbol){
    for(int i = 0; i < 10; i++){
      System.out.print(symbol);
    }
  }
}

public class Main {

  public static void main(String[] args){
    // create an object of Pattern class
    Pattern d1 = new Pattern();
    d1.display();
    System.out.println("\n");
    d1.display('#');
  }
}


// +++++++++++++++++++ output ++++++++++++++++++++++
// @Dheeraj2002kumar ➜ /workspaces/Foundation-Language (main) $  /usr/bin/env /usr/lib/jvm/msopenjdk-current/bin/java -XX:+ShowCodeDetailsInExceptionMessages -cp /home/vscode/.vscode-remote/data/User/workspaceStorage/77461b5d-1/redhat.java/jdt_ws/Foundation-Language_c2e17210/bin Day8.Main 
// **********

// ##########@Dheeraj2002kumar ➜ /workspaces/Foundation-Language (main) $ 


 */



 // ----------------------------------------------

/*
 // encapsulation

class Area{
  // fields to calculate area
  int length;
  int breadth;

  // constructor to initialize values
  Area(int length, int breadth){
    this.length = length;
    this.breadth = breadth;
  }

  // method to calculate area
  public void getArea(){
    int area = length*breadth;
    System.out.println("Area: " + area);
  }
}

public class Main{
  public static void main(String[] args){
    // create object of Area
    // pass value of length and breadth
    Area rectangle = new Area(5, 6);
    rectangle.getArea();
  }
}

// +++++++++++++++++++ output +++++++++++++++++++++++++++
// @Dheeraj2002kumar ➜ /workspaces/Foundation-Language/Java (main) $ java Day8.Main
// Area: 30
 */


// ---------------------------------------------------------------

/*
// Data Hiding:-
// Data hiding is a way of restricting the access of our data members by hiding the implementation details.

class Person{
  // private field
  private int age;

  // getter method
  public int getAge(){
    return age;
  }

  // setter method
  public void setAge(int age){
    this.age = age;
  }
}

public class Main{
  public static void main(String[] args){
    // create an object of Person
    Person p1 = new Person();

    // change age using setter
    p1.setAge(24);

    // access age using getter
    System.out.println("My age is " + p1.getAge());
  }
}

// +++++++++++++++++++++++++++ output ++++++++++++++++++++++++++++
// @Dheeraj2002kumar ➜ /workspaces/Foundation-Language/Java (main) $ java Day8.Main
// My age is 24

 */


 // ----------------------------------------------


 // none-static nested class
 // Note: we use the dot(.) operator to create an instance of the inner class using the outer class
/*
 class CPU{
  double price;

  // nested class
  class Processor{
    // members of nested class
    double core;
    String manufacturer;
    double getCache(){
      return 4.3;
    }
  }

  // nested protected clas
  protected class RAM{
    // member of protected nested class
    double memory;
    String manufacturer;
    double getClockSpeed(){
      return 5.5;
    }
  }
 }

 public class Main{
  public static void main(String[] args) {
    
    // create object of Outer class CPU
    CPU cpu = new CPU();

    // create an objecte of inner class Processor using class
    CPU.Processor processor = cpu.new Processor();

    // create an object of inner class RAM using outer class CPU 
    CPU.RAM ram = cpu.new RAM();
    System.out.println("Processar Cache = " + processor.getCache());
    System.out.println("Ram Clock speed = " + ram.getClockSpeed());
  }
 }
 */

 // ++++++++++++++++++ output ++++++++++++++++++++++++++
//  @Dheeraj2002kumar ➜ /workspaces/Foundation-Language/Java (main) $ java Day8.Main
// Processar Cache = 4.3
// Ram Clock speed = 5.5



//-----------------------------------------------------


// Java nested static class

/*
class Animal {
  // inner class
  class Reptile {
    public void displayInfo(){
      System.out.println("I am a reptile...");
    }
  }

  // static class
  static class Mammal{
    public void displayInfo(){
      System.out.println("I am a mammal...");
    }
  }
}

class Main{
  public static void main(String[] args) {
    // object creation of the outer class
    Animal animal = new Animal();
    
    // object creation of the non-static class
    Animal.Reptile reptile = animal.new Reptile();
    reptile.displayInfo();

    // object creation of the static nested class
    Animal.Mammal mammal = new Animal.Mammal();
    mammal.displayInfo();
  }
}
 */

// ++++++++++++++ output +++++++++++++++++++++++++++++++

// @Dheeraj2002kumar ➜ /workspaces/Foundation-Language/Java (main) $ javac Day8/Main.java 
// @Dheeraj2002kumar ➜ /workspaces/Foundation-Language/Java (main) $ java Day8.Main
// I am a reptile...
// I am a mammal...



// ----------------------------------------------------------

// Java Anonymous Class
/*
class Polygon {
  public void display(){
    System.out.println("Inside the Polygon class");
  }
}

class AnonymousDemo {
  public void createClass(){

    // creation of anonymous class extending class Polygon
    Polygon p1 = new Polygon(){
      public void display(){
        System.out.println("Inside an anonymous class.");
      }
    };
    p1.display();
  }
}

class Main{
  public static void main(String[] args){
    AnonymousDemo an = new AnonymousDemo();
    an.createClass();

    // Polygon p1 = new Polygon();
    // p1.display();
  }
}
 */


// ++++++++++++++++++++ output ++++++++++++++++++++++
// @Dheeraj2002kumar ➜ /workspaces/Foundation-Language/Java (main) $ javac Day8/Main.java
// @Dheeraj2002kumar ➜ /workspaces/Foundation-Language/Java (main) $ java Day8.Main
// Inside an anonymous class.





//-----------------------------------------------------------------


// Java Singleton

/*
class Database {
  private static Database dbObject;
  private Database(){

  }

  public static Database getInstance(){
    // create objet if it's not already created
    if(dbObject == null){
      dbObject = new Database();
    }

    // return the singleton object
    return dbObject;
  }

  public void getConnection(){
    System.out.println("You are now connected to the database...");
  }
}

public class Main{
  public static void main(String[] args){
    Database db1;

    // refers to the only object of Database
    db1 = Database.getInstance();

    db1.getConnection();
  }
}
*/

//+++++++++++++++++++ output +++++++++++++++++++++++++

// @Dheeraj2002kumar ➜ /workspaces/Foundation-Language/Java (main) $ javac Day8/Main.java
// @Dheeraj2002kumar ➜ /workspaces/Foundation-Language/Java (main) $ java Day8.Main
// You are now connected to the database...



//----------------------------------------------------

// Java enum
/* 
enum Size {
  SMALL, MEDIUM, LARGE, EXTRALARGE
}

class Main{
  public static void main(String[] args){
    System.out.println(Size.SMALL);
    System.out.println(Size.MEDIUM);
  }
}
*/

// ++++++++++++++++++++ output ++++++++++++++++++

// @Dheeraj2002kumar ➜ /workspaces/Foundation-Language/Java (main) $ javac Day8/Main.java
// @Dheeraj2002kumar ➜ /workspaces/Foundation-Language/Java (main) $ java Day8.Main
// SMALL
// MEDIUM



//----------------------------------------------------------

// java enum

enum Size{
  SMALL, MEDIUM, LARGE, EXTRALARGE;
  public String getSize(){
    // this will refer to the object SMALL
    switch(this){
      case SMALL:
        return "small";
      case MEDIUM:
        return "medium";
      case LARGE:
        return "large";
      case EXTRALARGE:
        return "extra large";
      default:
        return null;
    } 
  }
}

public class Main{
  public static void main(String[] args){
    // call getSize()
    // using the object SMALL
    System.out.println("The size of the pizza is " + Size.SMALL.getSize());
  }
}


// ++++++++++++++++ output +++++++++++++++++++++++++++++

// @Dheeraj2002kumar ➜ /workspaces/Foundation-Language/Java (main) $ javac Day8/Main.java
// @Dheeraj2002kumar ➜ /workspaces/Foundation-Language/Java (main) $ java Day8.Main
// The size of the pizza is small

