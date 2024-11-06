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
  p
 