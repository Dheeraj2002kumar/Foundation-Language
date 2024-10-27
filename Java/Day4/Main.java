package Day4;

import java.util.Arrays;

public class Main {
  public static void main(String[] args) {
    // access array elements

    /*
    // create an array
    int[] age = {12, 4, 5, 2, 5};

    // access each  array elements
    System.out.println("Accessing Elements of Array:");
    System.out.println("First Element: "+ age[0]);
    System.out.println("Second Element: "+ age[1]);
    System.out.println("Third Element: "+ age[2]);
    System.out.println("Fourth Element: "+ age[3]);
    System.out.println("Fifth Element: "+ age[4]);

    for(int i = 0; i < age.length; i++){
      System.out.println(age[i]);
    }
     */


    //---------------------------------------------------------------
    /*    // looping through Array elements

    // create an array
    int[] age = {12, 4, 5};

    // loop through the array
    // using for loop
    System.out.println("============ Using for loop=============\n");
    for(int i = 0; i < age.length; i++){
      System.out.println(age[i]);
    }
   */


   //---------------------------------------------------------

   /*
   // using the for-each loop

   // create an array
   int[] age = {12, 4, 5};

   // loop through  the array
   // using for loop 
   System.out.println("============ Using for-each loop ==============\n ");
   for(int a : age){
    System.out.println(a);
   }
   */



   // -------------------------------------------------------------
   
   /*
   // Example: Computer Sum and Average of Array Elements
   int[] numbers = {2, -9, 0, 5, 12, -25, 22, 9, 8, 12};
   int sum = 0;
   Double average;
   
   // access all element using for each loop
   // add each element in sum
   for(int number: numbers){
    sum += number;
   }

   // get the total number of elements 
   int arrayLength = numbers.length;

   // claculate the average 
   // convert the average from int to double
   average = ((double)sum / (double)arrayLength);
   System.out.println("Sum = "+ sum);
   System.out.println("Average = " + average);
     */


  

  //-------------------------------------------------------
  
  /*
  // Example: print all element of 2d array using loop

  int[][] a = {
    {1, 2, 3},
    {4, 5, 6, 7},
    {8}
  };

  for(int i = 0; i < a.length; i++){
    for(int j = 0; j < a[i].length; j++){
      System.out.println(a[i][j]);
    }
    System.out.println();
  }
 */




 //--------------------------------------------------------

 /*
 // java copy Arrays

 int[] numbers = {1,2,3,4,5,6};
 int[] copy = Arrays.copyOf(numbers, numbers.length);
 System.out.println(Arrays.toString(copy)); // [1, 2, 3, 4,5,6]
 // copyOfRange() method is used to copy a range of elements from the original array to 
 // the new array. The method takes two parameters: the original array and the range of
 // elements to be copied. The range is specified by the start and end indices.

 
 int[] posityveNumbers = numbers; // copying arrays
 for(int number : posityveNumbers){
  System.out.println(number + ", ");
 } */


 
 
 //------------------------------------------------------------

 // Using looping construct to copy arrays
 
 int[] source = {1,2,3,4,5,6};
 int[] destination = new int[6];

 // iterate and  copy elements from source to destination
 for(int i = 0; i < source.length; i++){
  destination[i] = source[i];
 }

 // converting array to string
 System.out.println(Arrays.toString(destination)); // [1, 2, 3, 4, 5, 6]


  }
}
