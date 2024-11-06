// Example: Polymorphism using method overriding

// Note: The method that is called is determined during the execution of the program. Hence, method overriding is a run-time polymorphism

class Language{
  public void displayInfo(){
    System.out.println("Common English Language");
  }
}

class Java extends Language{
  @Override
  public void displayInfo(){
    System.out.println("Java Programming Language");
  }
}

public class Main{
  public static void main(String[] args){
    // create an object of java class
    Java j1 = new Java();
    j1.displayInfo();

    // create an object of Language class
    Language l1 = new Language();
    l1.displayInfo();
  }
}

// ++++++++++++++++++ output +++++++++++++++++++++++
// vscode ➜ /workspaces/Foundation-Language/Java/Day8 (main) $ javac Main.java
// vscode ➜ /workspaces/Foundation-Language/Java/Day8 (main) $ java Main
// Java Programming Language
// Common English Language