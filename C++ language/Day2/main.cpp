//#include <iostream>
//
///* run this program using the console pauser or add your own getch, system("pause") or input loop */
//
//int main() {
//	if(0){
//		std::cout <<"Good bye";
//	} else {
//		std::cout << "Good";
//	}
//	return 0;
//}

////===============================================
//// This program calcuates the average of numbers entered by the user.
//// If the user enters a negative number, it ignores the number and
//// calculates the average number entered before it.
//
//#include <iostream>
//using namespace std;
//
//int main(){
//	float num, average, sum = 0.0;
//	int i, n;
//	cout << "Maximum number of inputs: ";
//	cin >> n;
//	
//	for(i = 1; i <= n; i++){
//		cout << "Enter n" << i << ": ";
//		cin >> num;
//		
//		if(num < 0.0){
//			// Control of the program move to jump:
//			goto jump;
//		}
//		sum += num;
//	}
//	jump:
//		average = sum / (i - 1);
//		cout << "\nAverage = " << average;
//		return 0;
//}


//==============================================
// C++ Program to check whether number is Even or Odd

//#include <iostream>
//using namespace std;
//
//int main(){
//	int num;
//	cout << "Enter number: ";
//	cin >> num;
//	
//	if(num % 2 == 0){
//		cout << "Number is Even...";
//	}
//	else {
//		cout << "Number is Odd...";
//	}
//	return 0;
//}



//================================================
// C++ Program to check whether a character is vowel or consonant.

//#include <iostream>
//using namespace std;
//
//int main(){
//	char ch;
//	cout << "Enter single character: ";
//	cin >> ch;
//	
//	if(ch == 'a' || ch == 'A' || ch == 'E' || ch == 'e' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U'){
//		cout << "Entered character is vowel...";
//	}
//	else {
//		cout << "Entered charater is consonant...";
//	}
//	return 0;
//} 




//============================================
// C++ program to find largest number among three numbers

//#include <iostream>
//using namespace std;
//
//int main(){
//	int num1, num2, num3;
//	cout << "Enter Three number: ";
//	cin >> num1 >> num2 >> num3;
//	
//	if ((num1 > num2) && (num1 > num3)){
//		cout << num1 << " is largest number!";
//	}
//	else if (num2 > num3){
//		cout << num2 << " is largest number!";
//	}
//	else {
//		cout << num3 << " is largest number!";
//	}
//	return 0;
//}



//====================================================
// C++ program to fnd all roots of a quadratic equation


/*
Here's a C++ program to find all roots of a quadratic equation of the form:

ax²+bx+c=0
The program calculates the discriminant (D = b² - 4ac) to determine the nature of the roots (real and distinct, real and equal, or complex).


Explanation:
Discriminant (D): Determines the nature of the roots.
If D > 0, the equation has two distinct real roots.
If D = 0, the equation has two equal real roots.
If D < 0, the equation has two complex (imaginary) roots.
*/


//#include <iostream>
//#include <cmath> // for sqrt() function
//using namespace std;
//
//int main() {
//    double a, b, c;
//    double discriminant, root1, root2, realPart, imaginaryPart;
//
//    // Input coefficients a, b, and c
//    cout << "Enter coefficients a, b and c: ";
//    cin >> a >> b >> c;
//
//    // Calculate the discriminant
//    discriminant = b * b - 4 * a * c;
//
//    // Condition for real and distinct roots
//    if (discriminant > 0) {
//        root1 = (-b + sqrt(discriminant)) / (2 * a);
//        root2 = (-b - sqrt(discriminant)) / (2 * a);
//        cout << "Roots are real and distinct." << endl;
//        cout << "Root 1 = " << root1 << endl;
//        cout << "Root 2 = " << root2 << endl;
//    }
//    // Condition for real and equal roots
//    else if (discriminant == 0) {
//        root1 = root2 = -b / (2 * a);
//        cout << "Roots are real and equal." << endl;
//        cout << "Root 1 = Root 2 = " << root1 << endl;
//    }
//    // Condition for complex roots
//    else {
//        realPart = -b / (2 * a);
//        imaginaryPart = sqrt(-discriminant) / (2 * a);
//        cout << "Roots are complex and imaginary." << endl;
//        cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i" << endl;
//        cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i" << endl;
//    }
//
//    return 0;
//}



//==================================================
// C++ program to calculate sum of Natural Numbers

/*

Explanation:
Method 1 (Using Loop): The program adds each natural number from 1 to n using a loop and accumulates the sum.
Method 2 (Using Formula): The program directly calculates the sum using the formula for the sum of the first n natural numbers.

Sum= n(n+1)/2
 

For n = 5, the sum is:
				1+2+3+4+5=15
*/

//#include <iostream>
//using namespace std;
//
//int main(){
//	int num, sum = 0;
//	cout << "Enter positive integer number: ";
//	cin >> num;
//	
//	// method 1:
//	for(int i = 1; i <= num; i++){
//		sum += i; // add each number to sum
//	}
//	cout << "The sum of positive integer is: " << sum << endl;
//	
//	// method 2:
//	sum = num * (num + 1) / 2;
//	cout << "The sum (using formula) is: " << sum << endl;
//	return 0;
//}




//=============================================
// C++ program to check leap year

//#include <iostream>
//using namespace std;
//
//int main() {
//    int year;
//
//    // Input year from user
//    cout << "Enter a year: ";
//    cin >> year;
//
//    // Leap year is divisible by 4 and (not divisible by 100 or divisible by 400)
//    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//        cout << year << " is a leap year." << endl;
//    } else {
//        cout << year << " is not a leap year." << endl;
//    }
//
//    return 0;
//}



//=================================================
// C++ program to find factorial

/*
Here's a C++ program to find the factorial of a given number. The factorial of a number n is the product of all positive integers less than or equal to n. It is denoted as n! and can be calculated as:

n!=n×(n-1)×(n-2)×?×1
For example, 5! = 5 × 4 × 3 × 2 × 1 = 120.

Explanation:
The program asks for a positive integer.
It checks if the number is negative since the factorial of a negative number does not exist.
If the number is non-negative, it calculates the factorial using a for loop.
The factorial is stored in the variable factorial, which is of type unsigned long long to handle large numbers.

This program computes the factorial of a non-negative integer using an iterative approach. For larger inputs, the unsigned long long type is used to prevent overflow.


*/

//#include <iostream>
//using namespace std;
//
//int main(){
//	int n;
//	unsigned long long factorial = 1;
//	
//	cout << "Enter number: ";
//	cin >> n;
//	
//	// ensure user enter a non negative integer
//	if(n < 0){
//		cout << "Error! Factorial of negative number doesn't exist." << endl;
//	}
//	else {
//		// calculate the factorial using for loop
//		for(int i = 1; i <= n; ++i){
//			factorial *= i;
//		}
//	}
//	cout << "factorial of " << n << " = " << factorial << endl;
//	return 0;
//}



//======================================================
// C++ program to Generate Multiplication Table

//#include <iostream>
//using namespace std;
//
//int main(){
//	int n;
//	cout << "Enter number which you want to print the table: ";
//	cin >> n;
//	
//	for(int i = 1; i <= 10; ++i){
//		cout << n << " * " << i << " = " << n*i << endl;
//	}
//	return 0;
//}



//==================================================
// C++ program to display fibonacci series

/*
Here’s a C++ program to display the Fibonacci series up to a specified number of terms. The Fibonacci series is a sequence in which each number is the sum of the two preceding ones, typically starting with 0 and 1.

The Fibonacci sequence looks like this:
				0,1,1,2,3,5,8,13,21,34,…
				
t1 and t2 store the first two terms of the Fibonacci series, which are initialized to 0 and 1 respectively.
The program loops through and calculates the next term in the series by adding the previous two terms.
It continues to print the series until it reaches the specified number of terms.
*/

//#include <iostream>
//using namespace std;
//
//int main(){
//	int n, t1=0, t2 = 1, nextTerm = 0;
//	
//	// input the number of term
//	cout << "Enter the number of term: ";
//	cin >> n;
//	
//	cout << "Fibonacci series: ";
//	
//	for(int i = 1; i <= n; ++i){
//		// print first two term
//		if(i == 1){
//			cout << t1 << ", ";
//			continue;
//		}
//		
//		if(i == 2){
//			cout << t2 << ", ";
//			continue;
//		}
//		
//		// calculate the next term
//		nextTerm = t1 + t2;
//		t1 = t2;
//		t2 = nextTerm;
//		
//		cout << nextTerm << ", ";
//	}
//	
//	return 0;
//}



// =============================================
// C++ program to find GCD

/*

Here's a C++ program to find the GCD (Greatest Common Divisor) of two numbers. The GCD of two integers is the largest number that divides both of them without leaving a remainder. One of the most efficient ways to calculate the GCD is using Euclid's Algorithm.

Euclid’s Algorithm:
If b is 0, then GCD(a, b) = a.
Otherwise, GCD(a, b) = GCD(b, a % b).

Explanation:
-> The function findGCD() uses Euclid's algorithm to recursively compute the GCD.
-> In the main() function, two integers are input by the user.
-> The findGCD() function is called, and the result is displayed.

the program calculates the GCD of two input numbers using recursion. Euclid's algorithm is efficient for finding the GCD, even for large numbers.
*/

//#include <iostream>
//using namespace std;
//
//// Function to find GCD using Euclid's algorithm
//int findGCD(int a, int b) {
//    if (b == 0)
//        return a;
//    return findGCD(b, a % b);
//}
//
//int main() {
//    int num1, num2;
//
//    // Input two integers from user
//    cout << "Enter two integers: ";
//    cin >> num1 >> num2;
//
//    // Calculate GCD
//    int gcd = findGCD(num1, num2);
//
//    // Output the result
//    cout << "GCD of " << num1 << " and " << num2 << " is " << gcd << endl;
//
//    return 0;
//}



//===================================================
// C++ program to find LCM






//===============================================
// C++ program to Reverse a number







// ===================================================
// C++ program to calculate power of a number








//=============================================
// C++ program to Check whether a number is Palindrome or Not








//============================================
// C++ program to display prime number between two intervals







// =============================================
// C++ program to check whether a Number is prime or not















// ============================================
// C++ program to check Armstrong number










//============================================
// C++ program to display Armstrong Number Between Two Intervals













//=====================================================
// C++ program to display factors of a Number
















// ============================================
// C++ program to create Pyramid and pattern











// ============================================
// C++ program to Make a simple calculator to Add, Subtract, 
// Multiply or Divide Using switch ... case




































//====================================================
// C++ function
//#include <iostream>
//using namespace std;
//
//// display a number
//void displayNum(int n1, float n2){
//	cout << "The int number is " << n1 << endl;
//	cout << "The double number is " << n2 << endl;
//}
//
//int main(){
//	int num1 = 5;
//	double num2 = 5.5;
//	
//	// calling the function 
//	displayNum(num1, num2);
//	
//	return 0;
//}



//===============================================
// functon prototype
//#include <iostream>
//using namespace std;
//
//// function prototype
//void add(int, int);
//
//int main(){
//	// calling the function before declaration.
//	add(5, 3);
//	return 0;
//}
//
//// function definition
//void add(int a, int b){
//	cout << (a + b);
//}




//=============================================
// function library 
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main(){
//	double number, squareRoot;
//	
//	number = 25.0;
//	
//	// sqrt() is a library function to calculate the square root
//	squareRoot = sqrt(number);
//	cout << "Square root of " << number << " = " << squareRoot << endl;
//	
//	return 0;
//}


//============================================
// function with no argument and no return value

//#include <iostream>
//using namespace std;
//
//void checkPrime();  // function prototype
//
//int main(){
//	checkPrime();  // function call
//	return 0;
//}
//
//void checkPrime(){
//	int n, i, flag = 0;
//	cout << "Enter the  number: ";
//	cin >> n;
//	
//	for(i = 2; i <= n/2; i++){
//		if(n % i == 0){
//			flag = 1;
//		}
//	}
//	
//	if(flag == 1) cout << "\nIt is not Prime number";
//	else cout << "\nIt is a Prime number";
//}



//============================================
// function with no argument but return value

#include <iostream>
using namespace std;

int getNumber();  // function prototype

int main(){
	int n, i, flag = 0;
	n = getNumber();  // function call
	
	for(i = 2; i <= n/2; i++){
		if(n % i == 0){
			flag = 1;
		}
	}
	
	if(flag == 1) cout << "\nIt is not Prime number";
	else cout << "\nIt is a Prime number";
	return 0;
}

int getNumber(){
	int n;
	cout << "Enter the  number: ";
	cin >> n;
	

}
