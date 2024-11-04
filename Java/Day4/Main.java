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

   // calculate the average 
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

 int[] positiveNumbers = numbers; // copying arrays
 for(int number : positiveNumbers){
  System.out.print(number + ", ");
 }
System.out.println();

 int[] copy = Arrays.copyOf(numbers, numbers.length);
 System.out.println(Arrays.toString(copy)); // [1, 2, 3, 4,5,6]
 // copyOfRange() method is used to copy a range of elements from the original array to 
 // the new array. The method takes two parameters: the original array and the range of
 // elements to be copied. The range is specified by the start and end indices.

 
 */


 
 
 //------------------------------------------------------------

 /*
 // Using looping construct to copy arrays
 
 int[] source = {1,2,3,4,5,6};
 int[] destination = new int[6];

 // iterate and  copy elements from source to destination
 for(int i = 0; i < source.length; i++){
  destination[i] = source[i];
 }

 // converting array to string
 System.out.println(Arrays.toString(destination)); // [1, 2, 3, 4, 5, 6]
 */




 //---------------------------------------------------------------------

 /* 
 // To use Arrays.toString() method

 int[] n1 = {2, 3, 12, 4, 12, -2};

 int[] n3 = new int[5];

 // Creating n2 array of having length of n1 array
 int[] n2 = new int[n1.length];

 // copying entire n1 array to n2
 System.arraycopy(n1, 0, n2, 0, n1.length);
 // copying entire n1 array to n3
 System.out.println("n2 = " + Arrays.toString(n2));

 // copying elements from index 2 on n1 array
 // copying element to index 1 of n3 array
 // 2 elements wil be copied
 System.arraycopy(n1, 2, n3, 1, 2);
 // printing n3 array
 System.out.println("n3 = "  + Arrays.toString(n3));


 // ========== output ===============
//  n2 = [2, 3, 12, 4, 12, -2]
// n3 = [0, 12, 4, 0, 0]


*/





//==================================================================

/*
// Copying Arrays Using copyOfRange() method
// we can also use the copyOfRange() method defined in java Arrays class arrays.for example, 

// To use toString() and copyOfRange() method

int[] source = {2, 3, 12, 4, 12, -2};

// copying entire source array to destination
int[] destination1 = Arrays.copyOfRange(source, 0, source.length);
System.out.println("Destination1 = " + Arrays.toString(destination1));

// copying from index 2 to 5 (5 is not included)
int[] destination2 = Arrays.copyOfRange(source, 2, 5);
System.out.println("Destination2 = " + Arrays.toString(destination2));


// ================== output: ================== 

// Destination1 = [2, 3, 12, 4, 12, -2]
// Destination2 = [12, 4, 12]

*/



//=====================================================================


// Copying 2d Arrays using loop

int[][] source = {
  {1, 2, 3, 4},
  {5, 6},
  {0, 2, 42, -4, 5}
};

int[][] destination = new int[source.length][];

for(int i = 0; i < destination.length; i++){
  // allocating space for each row of destination array
  destination[i] = new int[source[i].length];
  for(int j = 0; j < destination[i].length; j++){
    destination[i][j] = source[i][j];
  }
}

// displaying destination array
System.out.println("Destination = " + Arrays.deepToString(destination));


// ================== output ======================
// PS C:\Users\hp\Desktop\TCS IT\Java\Day4> java .\Main.java
// Destination = [[1, 2, 3, 4], [5, 6], [0, 2, 42, -4, 5]]




  }
}
