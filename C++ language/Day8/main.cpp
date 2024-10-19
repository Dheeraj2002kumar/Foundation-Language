// C++ program to demonstrate the working of friend function

/*
#include<iostream>
using namespace std;

class Distance {
	private:
		int meter;
		
		// friend function 
		friend int addFive(Distance);
		
	public:
		Distance(): meter(0){}
};

// freind function definition
int addFive(Distance d){
	// Accessing private members from the friend function
	d.meter += 5;
	return d.meter;
}

int main(){
	Distance D;
	cout << "Distance: " << addFive(D);
	return 0;
}
*/


/*
Distance: 5
--------------------------------
Process exited after 0.1592 seconds with return value 0
Press any key to continue . . .
*/




//===============================================
// Add members of two different classes using friend functions

/*
#include<iostream>
using namespace std;

// forward declaration
class ClassB;
class ClassA{
	public:
		// constructor to initialize numA to 12
		ClassA(): numA(12){}
	
	private:
		int numA;
		// friend funciton declaration
		friend int add(ClassA, ClassB);
};

class ClassB{
	public:
		// constructor to initialize  numB to 1
		ClassB(): numB(1){}
		
	private:
		int numB;
		// friend funciton declaration
		friend int add(ClassA, ClassB);
};

// access members of both classes
int add(ClassA objectA, ClassB objectB){
	return (objectA.numA + objectB.numB);
}

int main(){
	ClassA objectA;
	ClassB objectB;
	cout << "Sum: " << add(objectA, objectB);
	return 0;
}
*/


/*
Sum: 13
--------------------------------
Process exited after 0.1271 seconds with return value 0
Press any key to continue . . .
*/



//===================================================
// C++ program to demonstrate the working of friend class

#include <iostream>
using namespace std;

// forward declaration
class ClassB;

class ClassA{
	private:
		int numA;
		
		// friend class declaration
		friend class ClassB;
		
	public:
		// constructor to initialize numA to 12
		ClassA(): numA(12){}
};

class ClassB{
	private:
		int numB;
	
	public:
		// constructor to initialize numB to 1
		ClassB(): numB(1){}
		
		// memer friend to add numA
		// from ClassA and numB from ClassB
		int add(){
			ClassA objectA;
			return objectA.numA + numB;
		}
};

int main(){
	ClassB objectB;
	cout << "Sum: " << objectB.add();
	return 0;
}


/*
Sum: 13
--------------------------------
Process exited after 0.1059 seconds with return value 0
Press any key to continue . . .

*/
