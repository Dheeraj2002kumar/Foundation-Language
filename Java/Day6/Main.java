package Day6;

/*
// Note: We cannot declare classes and interfaces private in java
// Private Access Modifier
class Data{
  // private variable
  private String name;
  
  // getter method
  public String getName(){
    return this.name;
  }

  // setter method
  public  void setName(String name){
    this.name = name;
  }
}

public class Main {
  public static void main(String[] args) {
    // create an object of Data
    Data d = new Data();

    // access the private variable using the getter and setter
    d.setName("Programming");
    System.out.println(d.getName());
  }
}

// ============= output ================
// PS C:\Users\hp\Desktop\TCS IT\Java> java Day6.Main
// Programming

 */



 //----------------------------------------------------------

 // Public Access Modifier
 // When methods, variables, classes, and so on are declared public, then we cna access them from anywhere. The public access modifier has no scope restriction. 

 class Animal {
  // public variable
  public int legCount;

  // public method
  public void display(){
    System.out.println("I am an animal.");
    System.out.println("I have " + legCount + " legs.");
  }
 }
 
 public class Main {
  public static void main(String[] args) {
    
    // accessing the public class
    Animal animal = new Animal();

    // accessing the public variable
    animal.legCount = 4;

    // accessing the public method
    animal.display();
  }
  
 }

 // ==================== output ====================
//  PS C:\Users\hp\Desktop\TCS IT\Java>  c:; cd 'c:\Users\hp\Desktop\TCS IT\Java'; & 'C:\Program Files\Java\jdk-21\bin\java.exe' '-XX:+ShowCodeDetailsInExceptionMessages' '-cp' 'C:\Users\hp\AppData\Roaming\Code\User\workspaceStorage\3f5645188fb5b1977966aea27e202e46\redhat.java\jdt_ws\Java_a379e1ef\bin' 'Day6.Main' 

// I am an animal.
// I have 4 legs.
// PS C:\Users\hp\Desktop\TCS IT\Java> 



// =============== different method to get output ===================
// PS C:\Users\hp\Desktop\TCS IT\Java> java Day6.Main
// I am an animal.
// I have 4 legs.
// PS C:\Users\hp\Desktop\TCS IT\Java> 


