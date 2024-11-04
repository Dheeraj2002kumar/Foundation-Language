package Day7;

// Inheritance, Abstraction, Interface, Polymorphism

/*  
// Method Overriding in java inheritance


class Animal{
    public void eat(){
        System.out.println("I can eat");
    }
}

class Dog extends Animal{
    // overriding the eat() method 
    @Override
    public void eat(){
        System.out.println("I eat dog food");
    }

    // new method in subclass
    public void bark(){
        System.out.println("I can bark");
    }
}

class Main {

    public static void main(String[] args) {
        // create an object of the subclass
        Dog labrador = new Dog();

        // call the eat() method 
        labrador.eat();
        labrador.bark();
    }
}

// ++++++++++++++++ output ++++++++++++++++++++
// @Dheeraj2002kumar ➜ /workspaces/Foundation-Language (main) $ cd Java/
// @Dheeraj2002kumar ➜ /workspaces/Foundation-Language/Java (main) $ javac Day7/Main.java
// @Dheeraj2002kumar ➜ /workspaces/Foundation-Language/Java (main) $ java Day7.Main
// I eat dog food
// I can bark

 */




// --------------------------------------------------------------

// super class

/* 
class Animal{
    public void eat(){
        System.out.println("I can eat");
    }
}

class Dog extends Animal{
    // overriding the eat() method
    @Override
    public void eat(){
        // call mrthod of superclass
        super.eat();
        System.out.println("I eat dog food..");
    }

    // new method in subclass
    public void bark(){
        System.out.println("I can bark...");
    }
}

public class Main {
    public static void  main(String[] args){
        Dog labrador = new Dog();

        // call the eat() method
        labrador.eat();
        labrador.bark();
    }
    
}


// +++++++++++++++++++++++ output ++++++++++++++++++++++++

// @Dheeraj2002kumar ➜ /workspaces/Foundation-Language/Java (main) $ javac Day7/Main.java
// @Dheeraj2002kumar ➜ /workspaces/Foundation-Language/Java (main) $ java Day7.Main
// I can eat
// I eat dog food..
// I can bark...
*/
 




 //-----------------------------------------------------

 // protected members in Inheritance
/*
class Animal{
    protected String name;
    protected void display(){
        System.out.println("I am an animal.");
    }
}

class Dog extends Animal{
    public void getInfo(){
        System.out.println("My name is " + name);
    }
}

 public class Main {
 
    public static void main(String[] args) {
        Dog labrador = new Dog();
        labrador.name = "Pinky";
        labrador.display();

        labrador.getInfo();
    }
 }

 //+++++++++++++++ output +++++++++++++++++
//  @Dheeraj2002kumar ➜ /workspaces/Foundation-Language/Java (main) $ javac Day7/Main.java
// @Dheeraj2002kumar ➜ /workspaces/Foundation-Language/Java (main) $ java Day7.Main
// I am an animal.
// My name is Pinky

 */