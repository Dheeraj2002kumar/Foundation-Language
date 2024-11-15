// Java Exception Handling

// --------------------------------------------------

// Java try...catch block

/*
class Main {
    public static void main(String[] args){

        try {
            int divideByZero = 5/0;
            System.out.println("Rest of code in try block...");
        } catch (ArithmeticException e) {
            // TODO: handle exception
            System.out.println("ArithmeticException => " + e.getMessage());
        }
    }
}

 */
// ++++++++++++++++ output +++++++++++++++++++

// @Dheeraj2002kumar ➜ /workspaces/Foundation-Language/Java (main) $ javac Day9/Main.java
// @Dheeraj2002kumar ➜ /workspaces/Foundation-Language/Java (main) $ java Day9/Main.java
// ArithmeticException => / by zero



// ---------------------------------------------

// Java finally block

/*
class Main{
    public static void main(String[] args){

        try {
            // code that generates exception
            int divideByZero = 5/0;
        } catch (ArithmeticException e) {
            // TODO: handle exception
            System.out.println("ArithmeticException => " + e.getMessage());
        }

        finally {
            System.out.println("This is the finally block...");
        }
    }
}
 */

// +++++++++++++++++++++ output +++++++++++++++++++++++++

// @Dheeraj2002kumar ➜ /workspaces/Foundation-Language/Java (main) $ javac Day9/Main.java
// @Dheeraj2002kumar ➜ /workspaces/Foundation-Language/Java (main) $ java Day9/Main.java
// ArithmeticException => / by zero
// This is the finally block...




// -------------------------------------------------------

// Java throw and throws keyword

class Main{

    public static void divideByZero(){

        // throw an exception
        throw new ArithmeticException("Trying to divide by 0");
    }

    public static void main(String[] args) {
        divideByZero();
    }
}

// ++++++++++++++++ output ++++++++++++++++++++++++

// @Dheeraj2002kumar ➜ /workspaces/Foundation-Language/Java (main) $ javac Day9/Main.java
// @Dheeraj2002kumar ➜ /workspaces/Foundation-Language/Java (main) $ java Day9/Main.java
// Exception in thread "main" java.lang.ArithmeticException: Trying to divide by 0
//         at Main.divideByZero(Main.java:72)
//         at Main.main(Main.java:76)


