package Day7;

// Inheritance, Abstraction, Interface, Polymorphism


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