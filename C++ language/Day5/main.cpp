// C++ Default Constructor
/*
A constructor with no parameters is known as a default constructor.
C++ program to demonstrate the use of default constructor
*/

/*
#include <iostream>
using namespace std;

// declare a class
class Wall{
	private:
		double length;
	
	public:
		// create a constructor
		Wall(){
			// initialize private variables
			length = 5.5;
			
			cout << "Create a wall." << endl;
			cout << "Length = " << length << endl;
		}
};

int main(){
	// create an object
	Wall wall1;
	
	return 0;
}
*/

/*
Create a wall.
Length = 5.5

--------------------------------
Process exited after 0.1771 seconds with return value 0
*/



//==============================================
/*
C++ Parameterized Constructor
In C++, a constructor with parameters is known as a parameterized
constructor. This is the preferred method to initialize member data.

C++ Program to calculate the area of a wall
*/

/*
#include <iostream>
using namespace std;

// declare a class
class Wall{
	private:
		double length;
		double height;
		
	public:
		// creae parameterized constructor
		Wall(double len, double hgt){
			// initialize private variables
			length = len;
			height = hgt;
		}
		double calculateArea(){
			return length * height;
		}
};

int main(){
	// create object and initialize data members
	Wall wall1(10.5, 8.6);
	Wall wall2(8.5, 6.3);
	
	cout << "Area of Wall1: " << wall1.calculateArea() << endl;
	cout << "Area of Wall2: " << wall2.calculateArea() << endl;
	
	return 0;
}
*/

/*
Area of Wall1: 90.3
Area of Wall2: 53.55

--------------------------------
Process exited after 0.1177 seconds with return value 0
Press any key to continue . . .
*/



//==================================================
// C++ Copy Constructor
// The copy constructor in C++ is used to copy data of one object to another

#include <iostream>
using namespace std;

// declare a class 
class Wall{
	private:
		double length;
		double height;
		
	public:
		// parameterized constructor
		Wall(double len, double hgt){
			// initialize private variables
			length = len;
			height = hgt;
		}
		
		// copy constructor with a wall object as parameter
		Wall(Wall &obj){
			// initialize private variables
			length = obj.length;
			height = obj.height;
		}
		
		double calculateArea(){
			return length * height;
		}
};

int main(){
	// Create an object of Wall class
	Wall wall1(10.5, 8.6);
	
	// print area of wall1
	cout << "Area of Wall 1: " << wall1.calculateArea() << endl;
	
	// Copy contents of wall1 to another object wall2
	Wall wall2 = wall1;
	
	// print area of wall2
	cout << "Area of Wall 2: " << wall2.calculateArea() << endl;
	
	return 0;
}


/*
Area of Wall 1: 90.3
Area of Wall 2: 90.3

--------------------------------
Process exited after 0.1467 seconds with return value 0
Press any key to continue . . .
*/
