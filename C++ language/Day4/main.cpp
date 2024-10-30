// Enumeration
/*
#include <iostream>
using namespace std;

enum week { Sunday, Monday, Tuesday, Wednesday, Thrsday, Friday, saturday
};

int main(){
	week today;
	today = Wednesday;
	cout << "Day" << today + 1;
	return 0;
}
*/

/*
Day4
--------------------------------
Process exited after 0.1415 seconds with return value 0
*/

//=========================================================
// Enumeration ex: 2

/*
#include <iostream>
using namespace std;

enum seasons{
	spring = 34, 
	summer = 4, 
	automn = 9, 
	winter = 32
};

int main(){
	seasons s;
	s = summer;
	cout << "Summer = " << s << endl;
	return 0;
}
*/

/*
Summer = 4

--------------------------------
Process exited after 0.01113 seconds with return value 0
*/

//=========================================================
// C++ Objects & Class
// program to illustrate the working of objects and 
// class in c++ programming

/*
#include <iostream>
using namespace std;

// create a class
class Room {
	public:
		double length;
		double breadth;
		double height;
		
		double calculateArea(){
			return length * breadth;
		}
		
		double calculateVolume(){
			return length * breadth * height;
		}
};

int main(){
	// create object of Room  class
	Room room1;
	
	// assign values to data members
	room1.length = 42.5;
	room1.breadth = 30.8;
	room1.height = 19.2;
	
	// calculate and display the area and volume of the room
	cout << "Area of Room = " << room1.calculateArea() << endl;
	cout << "Volume of Room = " << room1.calculateVolume() << endl;
	
	return 0;
}
*/

/*
Area of Room = 1309
Volume of Room = 25132.8

--------------------------------
Process exited after 0.1369 seconds with return value 0
Press any key to continue . . .
*/

//===============================================
// Program to illustrate the working of Public and private in C++ class

/*
#include <iostream>
using namespace std;

class Room{
	private:
		double length;
		double breadth;
		double height;
		
	public:
		// function to initialize private variables
		void getData(double len, double brth, double hgt){
			length = len;
			breadth = brth;
			height = hgt;
		}
		
		double calculateArea(){
			return length * breadth;
		}
		
		double calculateVolume(){
			return length * breadth * height;
		}
};

int main(){
	// create object of Room class
	Room room1;
	// pass the values of private variables as arguments
	room1.getData(42.5, 30.8, 19.2);
	
	cout << "Area of Room = " << room1.calculateArea() << endl;
	cout << "Volume of Room = " << room1.calculateVolume() << endl;
	
	return 0;
}
*/

/*
Area of Room = 1309
Volume of Room = 25132.8

--------------------------------
Process exited after 0.06076 seconds with return value 0
*/





//==========================================================
/*
In this program, we have created a class named Sample, which 
contains a public variable age and a public function displayAge().

In main(), we have created an object of the Sample class named
obj1. We then access the public elements directly by using the 
codes obj1.age and obj1.displayAge().
*/


/*
#include <iostream>
using namespace std;

// define a class
class Sample {
	// public elements
	public:
		int age;
		void displayAge(){
			cout << "Age = " << age << endl;
		}
};

int main(){
	// declare a class object 
	Sample obj1;
	cout << "Enter your age: ";
	
	// store input in age of the obj1 object
	cin >> obj1.age;
	
	// call class function
	obj1.displayAge();
	
	return 0;
}
*/


/*
Enter your age: 22
Age = 22

--------------------------------
Process exited after 2.809 seconds with return value 0
*/



//===================================================
/*
In main(), the object obj1 cannot directly acces the class
variable age.

// error
cin >> obj1.age;
We can only indirectly manipulate age through the public
funciton displayAge(), since this function initializes age
with the value of the argument passed to it i.e the funciton
parameer int a.
*/


/*
#include <iostream>
using namespace std;

// define a class 
class Sample {
	// private elements
	private:
		int age;
		
	// public elements
	public:
		void displayAge(int a){
			age = a;
			cout << "Age = " << age << endl;
		}
};

int main(){
	int ageInput;
	// declare an object 
	Sample obj1;
	
	cout << "Enter you age: ";
	cin >> ageInput;
	
	// call function and pass ageInput as argument
	obj1.displayAge(ageInput);
	return 0;
}
*/


/*
Enter you age: 22
Age = 22

--------------------------------
Process exited after 1.974 seconds with return value 0
*/



//============================================
// Protected access modifier

#include <iostream>
using namespace std;

// declare parent class 
class Sample {
	// protected elements
	protected:
		int age;
};

// declare child class
class SampleChild : public Sample {
	public:
		void displayAge(int a){
			age = a;
			cout << "Age = " << age << endl;
		}
};

int main(){
	int ageInput;
	// declare object of child class
	SampleChild child;
	cout << "Enter you age:  ";
	cin >> ageInput;
	
	// call child class function
	// pass ageInput as argument
	child.displayAge(ageInput);
	
	return 0;
}



/*
Enter you age:  22
Age = 22

--------------------------------
Process exited after 2.936 seconds with return value 0
*/
