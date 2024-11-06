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


// Polymorphis using method overloading

// Note: The method that is called is determined by the compiler. Hence it is also known as compile-time polymorphism

class Pattern {
  // method without parameter
  public void display(){
    for(int i = 0; i < 10; i++){
      System.out.println("*");
    }
  }

  // method with single parameter
  public void display(char symbol){
    for(int i = 0; i < 10; i++){
      System.out.println(symbol);
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
// PS C:\Users\hp\Desktop\TCS IT\Java> java Day8.Main
// *
// *
// *
// *
// *
// *
// *
// *
// *
// *


// #
// #
// #
// #
// #
// #
// #
// #
// #
// #

