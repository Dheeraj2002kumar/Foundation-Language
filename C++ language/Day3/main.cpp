// C++ Recursion, Arrays, Strings, Structures

// Factorial of n = 1*2*3*...*n
//#include <iostream>
//using namespace std;
//
//int factorial(int); // functoin prototype
//
//int main(){
//	int n, result;
//	cout << "Enter a non-negative number: ";
//	cin >> n;
//	result = factorial(n);
//	cout << "Factorial of " << n << " = " << result;	
//	return 0;
//}
//
//int factorial(int n) {
//	if(n > 1){
//		return n * factorial(n-1);
//	} else {
//		return 1;
//	}
//}




//======================================================
// C++ Return by Reference
/*
In C++ Programming, not only can you pass values by reference
to a function but you can also return a value by reference.
*/

#include <iostream>
using namespace std;

// Global variable
int num;

// function declaration 
int& test();

int main(){
	test() = 5;
	cout << num;
	return 0;
}

int& test(){
	return num;
}
