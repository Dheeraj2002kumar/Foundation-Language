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