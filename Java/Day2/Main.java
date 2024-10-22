// Instanceof Operator : 
//        The instanceof operator checks whether an object is an instanceof a particular class.

/**
 * Main
 */
public class Main {

  public static void main(String[] args){
    String str = "Programming";
    boolean result;

    // checks if str is an instance of
    // the String class
    result = str instanceof String;
    System.out.println("Is str an object of String? " + result);


    // ternary operator
    result = str instanceof String ? true : false;
    System.out.println("Is str an object of String? " + result);

    int februaryDay = 29;
    String result1;

    result1 = (februaryDay == 28) ? "Not a leap year" : "Leap year";
    System.out.println(result1);


  }
}