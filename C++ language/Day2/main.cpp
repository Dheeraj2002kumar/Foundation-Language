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

ax�+bx+c=0
The program calculates the discriminant (D = b� - 4ac) to determine the nature of the roots (real and distinct, real and equal, or complex).


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

#include <iostream>
using namespace std;

int main(){
	int num, sum = 0;
	cout << "Enter positive integer number: ";
	cin >> num;
	
	// method 1:
	for(int i = 1; i <= num; i++){
		sum += i; // add each number to sum
	}
	cout << "The sum of positive integer is: " << sum << endl;
	
	// method 2:
	sum = num * (num + 1) / 2;
	cout << "The sum (using formula) is: " << sum << endl;
	return 0;
}
