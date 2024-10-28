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

import java.lang.reflect.Method;

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

// Standerd library method
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
 // what are advantaes of using methods?
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