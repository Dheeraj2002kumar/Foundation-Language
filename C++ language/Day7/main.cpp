
/*
#include <iostream>
using namespace std;

class MyClass {
	private:
		int value;
		
	public:
		MyClass() : value(0){}
		
		// Prefic increment
		MyClass& operator++(){
			++value;
			return *this;
		}
		
		// Postfix increment
		MyClass operator++ (int){
			MyClass temp = *this;
			++value;
			return temp;
		}
		
		// Prefix decrement
		MyClass& operator-- (){
			--value;
			return *this;
		}
		
		// Postfix decrement
		MyClass operator--(int){
			MyClass temp = *this;
			--value;
			return temp;
		}
		
		void display() const {
	 		 cout << "Value: " << value << endl;
		}
};

int main(){
	MyClass obj;
	
	cout << "Initial ";
	obj.display();
	
	cout << "After prefix increment ";
	++obj;
	obj.display();
	
	cout << "After postfix increment ";
	obj++;
	obj.display();
	
	cout << "After prefix decrement ";
	--obj;
	obj.display();
	
	cout << "After postfix decrement ";
	obj--;
	obj.display();
	
	return 0;
}
*/


/*
Initial Value: 0
After prefix increment Value: 1
After postfix increment Value: 2
After prefix decrement Value: 1
After postfix decrement Value: 0

--------------------------------
Process exited after 0.1404 seconds with return value 0
*/




//======================================================

/*
#include <iostream>

class Complex {
private:
    double real;
    double imag;

public:
    // Constructor
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    // Overloading the - operator
    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }

    // Display function
    void display() const {
        std::cout << real << " + " << imag << "i" << std::endl;
    }
};

int main() {
    double real1, imag1, real2, imag2;

    std::cout << "Enter real and imaginary part of the first complex number: ";
    std::cin >> real1 >> imag1;

    std::cout << "Enter real and imaginary part of the second complex number: ";
    std::cin >> real2 >> imag2;

    Complex c1(real1, imag1);
    Complex c2(real2, imag2);

    Complex c3 = c1 - c2;

    std::cout << "Result of subtraction: ";
    c3.display();

    return 0;
}
*/


/*
Enter real and imaginary part of the first complex number: 4
3
Enter real and imaginary part of the second complex number: 6
5
Result of subtraction: -2 + -2i

--------------------------------
Process exited after 4.799 seconds with return value 0
Press any key to continue . . .
*/


//=======================================================
// C++ Inheritance

// C++ program to demonstrate inheritance

/*
#include<iostream>
using namespace std;

// base class
class Animal{
	public:
		void eat(){
			cout << "I can eat!" << endl;
		}
		
		void sleep(){
			cout << "I can sleep!" << endl;
		}
};

// derived class
class Dog : public Animal{
	public:
		void bark(){
			cout << "I can bark! Woof woof!!" << endl;
		}
};

int main(){
	// Create object of the Dog class
	Dog dog1;
	
	// Calling members of the base class
	dog1.eat();
	dog1.sleep();
	
	// Calling member of the derived class
	dog1.bark();
	return 0;
}
*/

/*
I can eat!
I can sleep!
I can bark! Woof woof!!

--------------------------------
Process exited after 0.06775 seconds with return value 0
*/



//==============================================
// C++ Inheritance
// Multi-level inheritance

/*
#include <iostream>
using namespace std;

class A{
	public:
		void display(){
			cout << "Base class content.";
		}
};

class B :  public A{};

class C : public B{};

int main(){
	C obj;
	obj.display();
	return 0;
}
*/


/*
Base class content.
--------------------------------
Process exited after 0.1374 seconds with return value 0
*/



//================================================

/*
#include<iostream>
using namespace std;

class A; // forward declaration
class B{
	public:
		int  a;
		
		void getdata(int n){
			a = n;
		}
		
		friend int sum(A, B);
};

class A{
	public:
		int b;
		void getdata(int m){
			b = m;
		}
		
		friend int sum(A, B);
};

int sum(A m, B n){
	int result;
	result = m.b + n.a;
	return result;
}

int main(){
	B obj1;
	A obj2;
	obj2.getdata(10);
	obj1.getdata(20);
	
	cout << "Result of sum = " << sum(obj2, obj1);
	return 0;
}
*/


/*
Result of sum = 30
--------------------------------
Process exited after 0.1154 seconds with return value 0
Press any key to continue . . .
*/



//============================================
// Multiple Inheritance

#include<iostream>
using namespace std;

class Mammal{
	public:
		Mammal(){
			cout << "Mammals can give direct birth." << endl;
		}
};

class WingedAnimal{
	public:
		WingedAnimal(){
			cout << "Winged animal can flap." << endl;
		}
};

class Bat: public Mammal, public WingedAnimal{};

int main(){
	Bat b1;
	return 0;
}



/*
Mammals can give direct birth.
Winged animal can flap.

--------------------------------
Process exited after 0.1364 seconds with return value 0
*/
