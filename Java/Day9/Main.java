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
/*
class Main{

    public static void divideByZero(){

        // throw an exception
        throw new ArithmeticException("Trying to divide by 0");
    }

    public static void main(String[] args) {
        divideByZero();
    }
}

 */
// ++++++++++++++++ output ++++++++++++++++++++++++

// @Dheeraj2002kumar ➜ /workspaces/Foundation-Language/Java (main) $ javac Day9/Main.java
// @Dheeraj2002kumar ➜ /workspaces/Foundation-Language/Java (main) $ java Day9/Main.java
// Exception in thread "main" java.lang.ArithmeticException: Trying to divide by 0
//         at Main.divideByZero(Main.java:72)
//         at Main.main(Main.java:76)




// ----------------------------------------------

// Multiple Catch blocks

/*
class ListOfNumbers {
    public int[] arr = new int[10];

    public void writeList(){
        try {
            arr[10] = 11;
        } catch (NumberFormatException e) {
            // TODO: handle exception
            System.out.println("NumberFormatException => " + e.getMessage());
        } catch (IndexOutOfBoundsException e){
            System.out.println("IndexOutOfBoundsException => " + e.getMessage());
        }
    }
}

class Main{
    public static void main(String[] args){
        ListOfNumbers list = new ListOfNumbers();
        list.writeList();
    }
}

 */

// ++++++++++++++++ output ++++++++++++++++++++++++

// @Dheeraj2002kumar ➜ /workspaces/Foundation-Language/Java/Day9 (main) $ javac Main.java
// @Dheeraj2002kumar ➜ /workspaces/Foundation-Language/Java/Day9 (main) $ java Main
// IndexOutOfBoundsException => Index 10 out of bounds for length 10



//-----------------------------------------------------

// What is the output of the following code snippet?

public class Main {

    public void checkForExceptions(int num1, int num2){
        int intArr[] = {1,2,3};
        String str = null;
        System.out.println("Befor any exception!");

        try {
            str.charAt(0);
            System.out.println(num1 / num1);
            System.out.println("Enjoy no exception!");
        } 
        catch (ArithmeticException e) {
            // TODO: handle exception
            System.out.println("ArithmeticException Handler!");
        }
        catch (NullPointerException e){
            System.out.println("NullPointerException handler!");
        }
        catch (Exception e){
            System.out.println("Default exception handler!");
        }
        finally{
            System.out.println("In finally!");
        }

        System.out.println("After handling exception!");
    }

    public static void main(String[] args) {
        Main exceptionMain = new Main();
        try {
            exceptionMain.checkForExceptions(2, 0);     
        } 
        catch (ArithmeticException e) {
            // TODO: handle exception
            System.out.println("ArithmeticException handler in main!");
        }

        System.out.println("End of main...");
    }
}


// +++++++++++++++++++++ output ++++++++++++++++++++++++++

// @Dheeraj2002kumar ➜ /workspaces/Foundation-Language/Java/Day9 (main) $ javac Main.java
// @Dheeraj2002kumar ➜ /workspaces/Foundation-Language/Java/Day9 (main) $ java Main
// Befor any exception!
// NullPointerException handler!
// In finally!
// After handling exception!
// End of main...
