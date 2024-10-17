// C++ program to overload the binary operator + 
//This program adds two complex numbers

/*
#include<iostream>
using namespace std;

class Complex{
	private:
		float real;
		float imag;
		
	public:
		// Constructor to initialize real and image to 0
		Complex() : real(0), imag(0){}
		
		void input(){
			cout << "Enter real and imaginary parts respectively: ";
			cin >> real;
			cin >> imag;
		}
		
		// Overload the + operator
		Complex operator +(const Complex& obj){
			Complex temp;
			temp.real = real + obj.real;
			temp.imag = imag + obj.imag;
			return temp;
		}
		
		void output(){
			if(imag < 0){
				cout << "Output Complex number: " << real << imag << "i";
			}
			else{
				cout << "Output Complex number: " << real << " + " << imag << "i";
			}
		}
		
};

int main(){
	Complex complex1, complex2, result;
	
	cout << "Enter first complex number:\n";
	complex1.input();
	
	cout << "Enter second complex number:\n";
	complex2.input();
	
	// complex1 call the operator function
	// complex2 is passed as an argument to the function
	result = complex1 + complex2;
	result.output();
	
	return 0;
}
*/


/*
Enter first complex number:
Enter real and imaginary parts respectively: 4
3
Enter second complex number:
Enter real and imaginary parts respectively: 3
5
Output Complex number: 7 + 8i
--------------------------------
Process exited after 4.714 seconds with return value 0
Press any key to continue . . .
*/



//===============================================
// C++ pointer 

/*
#include <iostream>
using namespace std;

int main(){
	// declare variiables
	int var1 = 3;
	int var2 = 24;
	int var3 = 17;
	
	// print address of var1
	cout << "Address of var1: " << &var1 << endl;
	
	// print address of var2
	cout << "Address of var2: " << &var2 << endl;
	
	// print address of var3
	cout << "Address of var3: " << &var3 << endl;
	
	return 0;
}
*/


/*
Address of var1: 0x6ffe1c
Address of var2: 0x6ffe18
Address of var3: 0x6ffe14

--------------------------------
Process exited after 0.06599 seconds with return value 0
*/




//=========================================

/*
#include<iostream>
using namespace std;

int main(){
	int a = 3;
	int *p;
	p = &a;
	
	cout << "Address of a: " << p << endl;
	cout << "Value of a: " << *p << endl;
	return 0;
}
*/


/*
Address of a: 0x6ffe04
Value of a: 3

--------------------------------
Process exited after 0.07587 seconds with return value 0
*/


//========================================
// c++ pointer

/*
#include<iostream>
using namespace std;

int main(){
	int var = 5;
	
	// declare pointer variable
	int* pointVar;
	
	// store address of var 
	pointVar = &var;
	
	// print value of var
	cout << "var = " << var << endl;
	
	// print address of var
	cout << "Address of var (&var) = " << &var << endl << endl;
	
	// print pointer pointVar
	cout << "pointVar = " << pointVar << endl;
	
	// print the content of the address pointVar points to 
	cout << "Content of the address pointed to by pointVar (*pointVar) = "<< *pointVar << endl;
	return 0;
}
*/

/*
var = 5
Address of var (&var) = 0x6ffe04

pointVar = 0x6ffe04
Content of the address pointed to by pointVar (*pointVar) = 5

--------------------------------
Process exited after 0.07561 seconds with return value 0
*/




//=================================================
// Passing by reference without pointers

#include<iostream>
using  namespace std;

// function definition to swap values
void swap(int &n1, int &n2){
	int temp;
	temp = n1;
	n1 = n2;
	n2 = temp;
}

int main(){
	// initialize variables
	int a = 1, b = 2;
	
	cout << "Before swapping" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	
	// call function to swap numbers 
	swap(a, b);
	
	cout << "\nAfter swapping" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	return 0;
}



/*
Before swapping
a = 1
b = 2

After swapping
a = 2
b = 1

--------------------------------
Process exited after 0.117 seconds with return value 0
*/
