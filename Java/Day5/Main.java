package Day5;
// Method
/*
public class Main {
  
  
  // create a method
  public int addNumbers(int a, int b){
    int sum = a + b;
    // return value
    return sum;
  }

  public static void main(String[] args){
    int num1 = 25;
    int num2 = 15;

    // create an object of Main
    Main obj = new Main();
    // calling method
    int result = obj.addNumbers(num1, num2);
    System.out.println("Sum is: " + result);

    // =========== output ================
    // PS C:\Users\hp\Desktop\TCS IT\Java> java Day5/Main.java
    // Sum is: 40

  }
  
}
 */

//================================================================

 // Method Parameters in java
/*
 public class Main {
 
  // method with no parameter
  public void display1(){
    System.out.println("Method without parameter");
  }

  // Method with single parameter
  public void display2(int a){
    System.out.println("Method with a single parameter: " + a);
  }

  public static void main(String[] args) {
    // create an object of Main
    Main obj = new Main();

    // calling method with no parameter
    obj.display1();

    // calling method with the single parameter
    obj.display2(24);

    // ======== output =============
    // PS C:\Users\hp\Desktop\TCS IT\Java> java Day5/Main.java
    // Method without parameter
    // Method with a single parameter: 24
  }
 }
   */


//==================================================================

// Stander library method
/*
public class Main {

  public static void main(String[] args) {
    // using the sqrt() method
    System.out.println("Square root of 4 is: " + Math.sqrt(4));
  }
}
 */



 /*
// user input
import java.util.*;

public class Main {

  public static void main(String[] args) {
    // taking input from user
    System.out.println("Enter a number: ");

    double num;

    Scanner obj = new Scanner(System.in);
    num = obj.nextFloat();

    double result = Math.sqrt(num);

    System.out.println("Square Root of entered value is: " + result);

    // ============== output =============== 
      // PS C:\Users\hp\Desktop\TCS IT\Java> java Day5/Main.java
      // Enter a number: 
      // 25
      // Square Root of entered value is: 5.0
      // PS C:\Users\hp\Desktop\TCS IT\Java> 
  }
}
 */


 //===========================================================

 /*
 // what are advantages of using methods?
 // 1. Reusability of code
 // 2. Code organization
 // 3. Code readability

 public class Main {

  // method defined
  private static int getSquare(int x){
    return x * x;
  }

  public static void main(String[] args) {
    for (int i = 1; i <= 5; i++){
      // method call
      int result = getSquare(i);
      System.out.println("Square of " + i + " is: " + result);
    }
  }
 }

 // ============ output ================
  // PS C:\Users\hp\Desktop\TCS IT\Java> java Day5/Main.java
  // Square of 1 is: 1
  // Square of 2 is: 4
  // Square of 3 is: 9
  // Square of 4 is: 16
  // Square of 5 is: 25

 */



 //============================================================

 /*
 // Constructor
 public class Main {
  
  private String name;

  // constructor
  Main(){
    System.out.println("Constructor Called: ");
    name = "Programming";
  }

  public static void main(String[] args) {
    // constructor is invoked while
    // creating an object of the Main class
    Main obj = new Main();
    System.out.println("The name is " + obj.name);
  }  
 }

 // =========== output ===============
  // PS C:\Users\hp\Desktop\TCS IT\Java> java Day5/Main.java
  // Constructor Called: 
  // The name is Programming

 */


 //=====================================================

 /*
 // No argument constructor
 public class Main {
  int i;
  // constructor with no parameter
  private Main(){
    i = 5;
    System.out.println("Constructor is called ");
  }

  public static void main(String[] args) {
    // calling the constructor without any parameter
    Main obj = new Main();
    System.out.println("Value of i: " + obj.i);
  }
 }


 // =============== output ======================
  // PS C:\Users\hp\Desktop\TCS IT\Java> java Day5/Main.java
  // Constructor is called 
  // Value of i: 5

 */




//=========================================================

/* 
// Example 1: Java program to create a private constructor
class Test{
  // create private constructor
  private Test(){
    System.out.println("Private constructor called");
  }

  // create a public static method
  public static void instanceMethod(){
    // create an instance of Test class
    Test obj = new Test();
  }
}
public class Main {

  public static void main(String[] args) {
    // call the instanceMethod()
    Test.instanceMethod();
  }
}

// ============== output ================
// PS C:\Users\hp\Desktop\TCS IT\Java> javac .\Day5\Main.java
// PS C:\Users\hp\Desktop\TCS IT\Java> java Day5.Main
// Private constructor called
// PS C:\Users\hp\Desktop\TCS IT\Java> 

*/



//====================================================


/*
// 2. Java parameterized constructor
// A java constructor can also accept one or more parameters. Such constructors are known as parameterized constructors (constructor with parameters)


public class Main {

  String languages;
  // constructor accepting single value
  Main(String lang){
    languages = lang;
    System.out.println(languages + " Programming Languages");
  }

  public static void main(String[] args) {
    // call constructor by passing a single value
    Main obj1 = new Main("Java");
    Main obj2 = new Main("Python");
    Main obj3 = new Main("C++");
  }
}

// =========== output ================
// PS C:\Users\hp\Desktop\TCS IT\Java> javac .\Day5\Main.java
// PS C:\Users\hp\Desktop\TCS IT\Java> java Day5/Main.java   
// Java Programming Languages
// Python Programming Languages
// C++ Programming Languages
// PS C:\Users\hp\Desktop\TCS IT\Java>
 */


 //======================================================

/*
 // 3. Java Default constructor
 // If we do not create any constructor, the java compiler automatically create a no-argument constructor during the execution of the program. This constructor is called default constructor.

 
 public class Main {
  int a; 
  boolean b;

  public static void main(String[] args) {
    // a default constructor is called
    Main obj = new Main();
    System.out.println("Default value: ");
    System.out.println("a = " + obj.a);
    System.out.println("b = " + obj.b);
  }
  
 }


 // ============================= output =============================
  // PS C:\Users\hp\Desktop\TCS IT\Java> java Day5/Main.java
  // Default value: 
  // a = 0
  // b = false
  // PS C:\Users\hp\Desktop\TCS IT\Java> 

 */




 //===============================================================


 // Constructors Overloading in java
 // Similar to java method overloading, we can also create two or more constructors with different paramenters. This is called constructors overloading.

 
 public class Main {
  String language;
  Main(){
    this.language = "Java";
  }

  Main(String language){
    this.language = language;
  }

  public void getName(){
    System.out.println("Programming Language: " + this.language);
  }

  public static void main(String[] args) {
    Main obj1 = new Main();
    Main obj2 = new Main("Python");
    obj1.getName();
    obj2.getName();
  }  
 }

 // =============== output ======================
//  PS C:\Users\hp\Desktop\TCS IT\Java> java Day5/Main.java
//  Programming Language: Java
//  Programming Language: Python
//  PS C:\Users\hp\Desktop\TCS IT\Java> 