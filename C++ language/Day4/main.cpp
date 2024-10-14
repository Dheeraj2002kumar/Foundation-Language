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


/*
Area of Room = 1309
Volume of Room = 25132.8

--------------------------------
Process exited after 0.1369 seconds with return value 0
Press any key to continue . . .
*/
