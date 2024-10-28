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

// user input
import java.util.*;

/**
 * Main
 */
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
