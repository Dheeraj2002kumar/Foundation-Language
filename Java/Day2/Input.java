import java.util.Scanner;

public class Input {
  public static void main(String[] args){
    Scanner input = new Scanner(System.in);
    System.out.println("Enter an integer: ");

    int number = input.nextInt();
    System.out.println("You entered: " + number);
    // closing the scanner object
    input.close();
  }
}