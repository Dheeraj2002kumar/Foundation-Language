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

/*
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
*/

/*
Sum: 13
--------------------------------
Process exited after 0.1059 seconds with return value 0
Press any key to continue . . .

*/



//===================================================

// C++ program to demonstrate the use of virtural functions
/*
#include<iostream>
using namespace std;

class Base{
	public:
		virtual void print(){
			cout << "Base Function" << endl;
		}
};

class Derived : public Base {
	public:
		void print(){
			cout << "Derived function" << endl;
		}
};

int main(){
	Derived derived1;
	
	// pointer of Base type that points to derived1
	Base*base1 = &derived1;
	
	// class member funciton of Derived class
	base1 -> print();
	return 0;
}
*/
// Virtul funcitons are runtime polymorphism.


/*
Derived function

--------------------------------
Process exited after 0.1403 seconds with return value 0
Press any key to continue . . .
*/





//============================================
// pure virtual function

/*
#include<iostream>
using namespace std;

class Base{
	public:
		virtual void show()=0; // pure virtual function
};

class Derived: public Base{
	public:
		void show(){
			cout << "Implementation of Virtual funciton in Derived class\n";
		}
};

int main(){
	//Base obj; // Compile Time Error
	Base *b;
	Derived d;
	b = &d;
	b ->show();
	return 0;
}
*/

/*
Implementation of Virtual funciton in Derived class

--------------------------------
Process exited after 0.12 seconds with return value 0
Press any key to continue . . .

*/




//==========================================
// file handling

#include<fstream>
#include<iostream>
using namespace std;

int main(){
	fstream st; // step 1: creating object of fstream class
	st.open("C:/Users/hp/Desktop/TCS IT/C++ language/Day8/program.txt", ios::out); // Step 2: create new file
	if(!st) // step 3: checking whether file exist
	{
		cout << "File creation failed";
	} else {
		cout << "New file created";
		st.close(); // step 4: Closing file
	}
	
	return 0;
}


/*
New file created
--------------------------------
Process exited after 0.1531 seconds with return value 0
Press any key to continue . . .
*/

