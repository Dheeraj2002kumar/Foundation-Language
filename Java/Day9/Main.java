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


// +++++++++++++++++++++ output +++++++++++++++++++++++++

// @Dheeraj2002kumar ➜ /workspaces/Foundation-Language/Java (main) $ javac Day9/Main.java
// @Dheeraj2002kumar ➜ /workspaces/Foundation-Language/Java (main) $ java Day9/Main.java
// ArithmeticException => / by zero
// This is the finally block...