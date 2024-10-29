package Day5;
// java String

/*public class java_String {
  public static void main(String[] args) {
    // create strings
    String first = "java";
    String second = "Python";
    String third = "JavaScript";

    // print strings
    System.out.println(first); // print java
    System.out.println(second); // print Python
    System.out.println(third); // print JavaScript
  }
}


// ============= output ========================
// PS C:\Users\hp\Desktop\TCS IT\Java> javac .\Day5\java_String.java
// PS C:\Users\hp\Desktop\TCS IT\Java> java .\Day5\java_String.java 
// java
// Python
// JavaScript
// PS C:\Users\hp\Desktop\TCS IT\Java> 


 */




 //------------------------------------------------------------

 // java string operation


 /*
 // 1. Get Length of a string
 // To find the length of a string, we use the length() method of the String. For example:

 public class java_String {
 
  public static void main(String[] args) {
    // create strings
    String greet = "Hello! World";
    System.out.println("Length of the string is: " + greet.length());

    // get the length of greet
    int length = greet.length();
    System.out.println("Length: " + length);
  }
 }

 // ============= output ==============
//  PS C:\Users\hp\Desktop\TCS IT\Java> java .\Day5\java_String.java
// Length of the string is: 12
// Length: 12
// PS C:\Users\hp\Desktop\TCS IT\Java> 

 */


//---------------------------------------------------------------

/*
// 2. Join two Strings
// We can join two strings in java using the concat() method. For example:

public class java_String {

  public static void main(String[] args) {
    // create strings
    String first = "Java";
    System.out.println("First String: " + first);

    // create second 
    String second = "Programming";
    System.out.println("Second String: " + second);

    // join two strings
    String joinedString = first.concat(second);
    System.out.println("Joined String: " + joinedString);
  }
}

// ========== output ==============
// PS C:\Users\hp\Desktop\TCS IT\Java> java .\Day5\java_String.java
// First String: Java
// Second String: Programming
// Joined String: JavaProgramming
 */


 // ---------------------------------------------------------


 // 3. Compare two Strings
 // In java, we can make comparisons between two strings using the equals() method. for example:

 public class java_String {
 
  public static void main(String[] args) {
    // create strings
    String first = "Java Programming";
    String second = "Java Programming";
    String third = "C++ Programming";

    // compare first and second strings
    boolean result1 = first.equals(second);
    System.out.println("First and Second Strings are equal: " + result1);

    // compare first and third strings
    boolean result2 = first.equals(third);
    System.out.println("First and Third Strings are equal: " + result2);
  }
 }

 //============== output ==================
//  PS C:\Users\hp\Desktop\TCS IT\Java> java .\Day5\java_String.java
// First and Second Strings are equal: true
// First and Third Strings are equal: false