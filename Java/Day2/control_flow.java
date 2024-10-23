public class control_flow {
  public static void main(String[] args) {
    System.err.println("================ Control Flow =====================");
    System.err.println();

    /*
    // if statement
    int number = 10;
    
    // check if number is greater than 0
    if(number > 0){
      System.err.println("The number is positive.");
    }
    System.err.println("Statement outside if block");

    // create a string variable
    String languageString = "Java";

    // if statement
    if(languageString == "Java"){
      System.err.println("Best Programming Language...");
    }

       */

       /*
      // if-else
      int number = 10;
      // check if number is greater than 0
      if(number > 0){
        System.err.println("The number is positive.");
      }
        // execute this block
        // if number is not greater than 0
        else{
          System.err.println("The number is not positive.");
        }

        System.err.println("Statement outside if...else block");
       */

       // if-else ladder
       int number = 10;
       // checks if number is greater than 0
       if(number > 0){
        System.err.println("This number is positive");
       }
       // check if number is less than 0
       else if(number < 0){
        System.err.println("This number is negative");
       }
       // if both condition is false
       else{
        System.err.println("This number is 0.");
       }
  }
}
