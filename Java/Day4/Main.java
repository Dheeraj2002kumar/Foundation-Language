package Day4;

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

    // looping through Array elements

    // create an array
    int[] age = {12, 4, 5};

    // loop through the array
    // using for loop
    System.out.println("============ Using for loop=============\n");
    for(int i = 0; i < age.length; i++){
      System.out.println(age[i]);
    }


  }
}
