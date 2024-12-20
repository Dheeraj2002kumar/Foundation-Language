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

//#include <iostream>
//using namespace std;
//
//// Global variable
//int num;
//
//// function declaration 
//int& test();
//
//int main(){
//	test() = 5;
//	cout << num;
//	return 0;
//}
//
//int& test(){
//	return num;
//}




//===============================================
// C++ Program to display prime number between two intervals using functions

//#include <iostream>
//using namespace std;
//
//// function to check if a number is prime 
//bool isPrime(int num){
//	if(num <= 1) // Prime numbers are greater than 1
//		return false;
//		
//	for(int i = 2; i <= num / 2; ++i){
//		if(num % 2 == 0)
//			return false;
//	}
//	return true;
//}
//
//// function to print prime numbers between two intervals
//void printPrimeInRange(int start, int end){
//	cout << "Prime number between " << start << " and " << end << " are: ";
//	for(int i = start; i <= end; ++i){
//		if(isPrime(i)){
//			cout << i << " ";
//		}
//	}
//	cout << endl;
//}
//
//int main(){
//	int start, end;
//	
//	// input from the user
//	cout << "Enter the starting number: ";
//	cin >> start;
//	cout << "Enter the ending number: ";
//	cin >> end;
//	
//	// call function to display prime numbers between the range
//	printPrimeInRange(start, end);
//	
//	return 0;
//}

/*
Enter the starting number: 1
Enter the ending number: 15
Prime number between 1 and 15 are: 2 3 5 7 9 11 13 15

--------------------------------
Process exited after 9.728 seconds with return value 0
*/






//=======================================================
// C++ program to check prime number by creating a function
//#include<iostream>
//using namespace std;
//
//// function to check if a number is prime 
//bool isPrime(int num){
//	if(num <= 1) // prime number are greater than 1
//	{
//		return false;
//	}
//	
//	for(int i = 2; i <= num/2; ++i){
//		if(num % i == 0) // if the number is divisible by any number other than 1 and itself
//		{
//			return false;
//		}
//	}
//	return true; // If no divisors found, it is prime
//}
//
//int main(){
//	int number;
//	
//	// Input from the user
//	cout << "Enter a number: ";
//	cin >> number;
//	
//	// check if the number is prime using the function 
//	if(isPrime(number)){
//		cout << number << " is a prime number." << endl;
//	} else {
//		cout << number << " is not a prime number." << endl;
//	}
//	
//	return 0;
//}

/*
Enter a number: 13
13 is a prime number.

--------------------------------
Process exited after 3.618 seconds with return value 0
*/







// ===================================================
// C++ program to check whether a number can be Express as sum of two prime numbers

#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

// Function to check if the number can be expressed as a sum of two primes
void findAllPrimeSums(int num) {
    bool found = false;  // Flag to check if any pair is found
    for (int i = 2; i <= num / 2; i++) {
        if (isPrime(i) && isPrime(num - i)) {
            cout << num << " = " << i << " + " << (num - i) << endl;
            found = true;
        }
    }
    
    if (!found) {
        cout << num << " cannot be expressed as the sum of two prime numbers." << endl;
    }
}

int main() {
    int num;

    // Input from user
    cout << "Enter a positive integer: ";
    cin >> num;

    // Find all prime sum pairs
    findAllPrimeSums(num);

    return 0;
}


/*
Enter a positive integer: 34
34 = 3 + 31
34 = 5 + 29
34 = 11 + 23
34 = 17 + 17

--------------------------------
Process exited after 2.492 seconds with return value 0
*/





// ==================================================
// C++ program to find sum of natural number using recursion












//=========================================
// C++ program to calculate factorial of a number using recursion















// ==============================================
// C++ program to find G.C.D using recursion















// ============================================
// C++ program to convert Binary number to decimal and vice-versa











// =============================================
// C++ program to convert binary number to Octal and vice-versa










// ===========================================
// C++ program to reverse a sentence using recursion 
















// ===============================================
// C++ program to calculate power using recursion




















//===============================================
// C++ Program to display marks of 5 students

/*
#include <iostream>
using namespace std;

// declare function to display marks
// take a 1d array as parameter
void display(int m[5]){
	cout << "Displaying marks: " << endl;
	
	// display array elements
	for(int i = 0; i < 5; ++i){
		cout << "Student " << i + 1 << ": " << m[i] << endl;
	}
}

int main(){
	// declare and initialize an array
	int marks[5] = {88, 76, 90, 61, 69};
	
	// call display function 
	// pass array as argument
	display(marks);
	
	return 0;
}
*/

/*
Displaying marks:
Student 1: 88
Student 2: 76
Student 3: 90
Student 4: 61
Student 5: 69

--------------------------------
Process exited after 0.06605 seconds with return value 0
*/



//=====================================================
// C++ Program to display a string entered by user.
/*
The extraction operator >> works as scanf() in c and considers 
a space " " has a terminating character.
*/

/*
#include<iostream>
using namespace std;

int main(){
	char str[100];
	
	cout << "Enter a string: ";
	cin >> str;
	cout << "You entered: " << str << endl;
	
	cout << "\nEnter another string: ";
	cin >> str;
	cout<< "You entered: " << str << endl;
	
	return 0;
}
*/

/*
Enter a string: best
You entered: best

Enter another string: C++_language
You entered: C++_language

--------------------------------
Process exited after 16.61 seconds with return value 0
*/


//================================================
// C++ program to read and display an entre line entered by user.

/*
#include<iostream>
using namespace std;

int main(){
	char str[100];
	cout << "Enter a string: ";
	cin.get(str, 100);
	
	cout << "You entered: " << str << endl;
	return 0;
}
/

/*
Enter a string: Best language is C++ for window application
You entered: Best language is C++ for window application

--------------------------------
Process exited after 63.44 seconds with return value 0
Press any key to continue . . .
*/



//==================================================
/*
In this program, a string str is declared. Then the 
string is asked from the user

Instead of using cin >> or cin.get() function, 
you can get the entered line of text using getline().

getline() function takes the input stream as the first 
parameter which is cin and str as the location of the line 
to be stored.
*/

/*
#include<iostream>
using namespace std;

int main(){
	// declaring a string object
	string str;
	cout << "Enter a string: ";
	getline(cin, str);
	
	cout << "You entered: " << str << endl;
	return 0;
}
*/


/*
Enter a string: This is the best programming language. I want to crack Google as a software engineer.
You entered: This is the best programming language. I want to crack Google as a software engineer.

--------------------------------
Process exited after 41.87 seconds with return value 0
*/



//=======================================================
// C++ structues

/*
#include<iostream>
using namespace std;

struct Person {
	char name[50];
	int age;
	float salary;
};

int main(){
	Person p1;
	
	cout << "Enter Full name: ";
	cin.get(p1.name, 50);
	
	cout << "Enter age: ";
	cin >> p1.age;
	
	cout << "Enter salary: ";
	cin >> p1.salary;
	
	cout << "\nDisplaying Information."<<endl;
	cout << "Name: " << p1.name << endl;
	cout << "Age: " << p1.age << endl;
	cout << "Salary: " << p1.salary;
	
	return 0;
}
*/

/*
Enter Full name: Dheeraj Kumar
Enter age: 22
Enter salary: 900000

Displaying Information.
Name: Dheeraj Kumar
Age: 22
Salary: 900000
--------------------------------
Process exited after 24.99 seconds with return value 0
*/


//====================================================
// C++ Structure and function 
// passing structure to function in C++
/*
A stucture variable can be passed to a function in similar
way as normal argument. Consider this example:
*/

/*
#include<iostream>
using namespace std;

struct Person {
	char name[50];
	int age;
	float salary;
};

void displayData(Person); // Function declaration

int main(){
	Person p;
	cout << "Enter full name: ";
	cin.get(p.name, 50);
	cout << "Enter age: ";
	cin >> p.age;
	cout << "Enter salary: ";
	cin >> p.salary;
	
	// function call with structure variable as an argument
	displayData(p);
	return 0;
}

void displayData(Person p){
	cout << "\nDisplaying Information." << endl;
	cout << "Name: " << p.name << endl;
	cout << "Age: " << p.age << endl;
	cout << "Salary: " << p.salary;
}
*/

/*
Enter full name: Dheeraj
Enter age: 22
Enter salary: 900000.99

Displaying Information.
Name: Dheeraj
Age: 22
Salary: 900001
--------------------------------
Process exited after 22.84 seconds with return value 0
*/





//===================================================
// C++ Pointers to structure
/*
A pointer variable can be created not only for native types like 
(int, float, double etc.) but they can also be created for user
defined types like structure.
*/

// Here is how you can create pointer for structures:

/*
#include<iostream>
using namespace std;
struct temp {
	int i;
	float f;
};

int main(){
	temp *ptr;
	return 0;
}
*/



//============================================
// C++ structure

/*
#include<iostream>
using namespace std;
struct Distance{
	int feet;
	float inch;
};

int main(){
	Distance *ptr, d;
	ptr = &d;
	cout << "Enter feet: ";
	cin >> (*ptr).feet;
	cout << "Enter inch: ";
	cin >> (*ptr).inch;
	
	cout << "Displaying information." << endl;
	cout << "Distance = " << (*ptr).feet << " feet " << (*ptr).inch << "inches";
	
	return 0;
}
*/


/*
Enter feet: 5.5
Enter inch: Displaying information.
Distance = 5 feet 0.5inches
--------------------------------
Process exited after 2.339 seconds with return value 0
*/
