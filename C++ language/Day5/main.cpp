// C++ Default Constructor
/*
A constructor with no parameters is known as a default constructor.
C++ program to demonstrate the use of default constructor
*/

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


/*
Create a wall.
Length = 5.5

--------------------------------
Process exited after 0.1771 seconds with return value 0
*/
