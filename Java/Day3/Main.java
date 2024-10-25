package Day3;

import java.util.Scanner;

public class Main {
  public static void main(String[] args){

    /*
    // program to print numbers from 1 to 5
    int n = 5;
    for (int i = 1; i <= n; i++){
      System.out.println(i);
    */

    /* 
    // Program to find the sum of natural numbers from 1 to 1000.
    int sum = 0;
    int n = 1000;

    // for loop
    for(int i = 1; i <= n; i++){
      // body inside for loop
      sum += i; // sum = sum + i
    }
    System.out.println("Sum of natural numbers from 1 to 1000 is: " + sum); // 500500
    */

    /*

    // java for-each  loop
    int[] numbers = {1, 2, 3, -4, -5};
    // iterating through the array
    for(int number: numbers){
      System.out.println(number);
    }
   */


   /*
   // Calculate the sum of all element of an array
   int[] numbers = {3, 4, 5, -5, 0, 12};
   int sum = 0;

   // iterating through  each element of the array
   for(int number : numbers){
    sum += number;
   }
   System.out.println("Sum = "+ sum);

    */
  
    //--------------------------------------------------


  /*
  // for loop Vs for-each loop

    char[] vowels = {'a', 'e', 'i', 'o', 'u'};
    System.out.println("=========== for loop =============");
    // iterating through an array using a for loop
    for(int i = 0; i < vowels.length; i++){
      System.out.println(vowels[i]);
    }

    System.out.println("=========== for-each loop =============");
    System.out.println();

    // iterating through an array using the for-each loop
    for(char item: vowels){
      System.out.println(item);
    }
   */


   //---------------------------------------------------
    /*
   // Program to display numbers from 1 to 5 usng while loop
   // declare variables
   int i = 1, n = 5;

   // while loop for 1 to 5
   while (i <= n) {
    System.out.println(i);
    i++;    
   }
   */


   //-----------------------------------------------

  /*
   // java program to find the sum of positive  numbers

   int sum = 0;
   // create an object of Scanner class
   Scanner input = new Scanner(System.in);

   // take integerr input from the user
   System.out.println("Enter a number: ");
   int number = input.nextInt();

   // while loop continues
   // until entered number is positive
   while(number >= 0){
    // add the number to the sum
    sum +=  number;
    System.out.println("Enter a number: ");
    number = input.nextInt();
   }
   System.out.println("Sum of positive numbers is: " + sum);
   input.close();
   */


   //-------------------------------------------------------
    /*
   // java program to display number from 1 to 5
   int i = 1, n = 5;
   // do...while loop from 1 to 5
   do{
    System.out.println(i);
    i++;
   }while(i <= n);
     */


     //-------------------------------------------------
    /*
     // break statement
     // break statement is used to terminate the loop 
     for (int i = 1; i <= 10; i++){
      // if the value of i is 5 the loop terminates
      if(i == 5){
        break;
      }
      System.out.println(i);
     }
    */



    //-------------------------------------------------------------
    // the  fr loop is labeled as first
    first:
    for(int i = 1; i < 5; i++){
      // the for loop is labeled as second
      second:
      for(int j = 1; j < 3; j++){
        System.out.println("i = " + i + "; j = " + j);

        // the break statement breaks the first for loop
        if(i == 2){
          break first;
        }
      }
    }
  }

}
