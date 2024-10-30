// Working of implicit type-conversion

// #include<iostream>
// using namespace std;

// int main(){
//   // assigning an int value to num_int
//   int num_int = 9;

//   // declaring a double type variable
//   double num_double;

//   // implicit conversion
//   // assigning int value to a double variable
//   num_double = num_int;
//   cout<<"num_int = "<< num_int << endl;
//   cout<<"num_double ="<< num_double << endl;
//   return 0;
// }

// //==================================================================
// // C++ "Hello, World!" Program

// #include<iostream>
// using namespace std;

// int main(){
//   cout<<"Hello, world!"<<endl;
//   return 0;
// }

//=================================================
// C++ Program to Print Number Entered by User

// #include <iostream>
// using namespace std;

// int main() {
//     // Write C++ code here
//     int num;
//     cout << "Enter the number: "<< endl;
//     cin >> num;
//     cout << "You entered the number is "<< num << endl;

//     return 0;
// }

// =========================================
// C++ Program to Add Two Numbers
// #include <iostream>
// using namespace std;

// int main() {
//     // Write C++ code here
//     int num1, num2, sum;
//     cout << "Enter num1: " << endl;
//     cin >> num1;

//     cout << "Enter num2: " << endl;
//     cin >> num2;

//     sum = num1 + num2;
//     cout << "The sum of " << num1 << " + " << num2 << " = " << sum << endl;

//     return 0;
// }

//========================================================
// C++ Program to find Quotient and Remainder
// #include<iostream>
// using namespace std;
// int main(){
//   int num1, num2, quotient, remainder;
//   cout << "Enter num1: " << endl;
//   cin >> num1;
//   cout << "Enter num2: " << endl;
//   cin >> num2;
//   quotient = num1 / num2;
//   remainder = num1 % num2;
//   cout << "Quotient: " << quotient << endl;
//   cout << "Remainder: " << remainder << endl;
//   return 0;
// }

//======================================================
// C++ Program to find size of int, float, double and char in Your system
// #include<iostream>
// using namespace std;
// int main(){
//   cout << "Size of int: " << sizeof(int) << endl;
//   cout << "Size of float: " << sizeof(float) << endl;
//   cout << "Size of double: " << sizeof(double) << endl;
//   cout << "Size of char: " << sizeof(char) << endl;
//   return 0;
// }


//============================================================
// C++ Program to Swap two Numbers
// #include<iostream>
// using namespace std;
// int main(){
//   int num1, num2, temp;
//   cout << "Enter num1: " << endl;
//   cin >> num1;
//   cout << "Enter num2: " << endl;
//   cin >> num2;

//   temp = num1;
//   num1 = num2;
//   num2 = temp;

//   cout << "Value of num1 is: " << num1 << endl;
//   cout << "Value of num2 is: " << num2 << endl;

//   return 0;
// }

//=========================================================
// C++ Program to Find ASCII Value of a Caracter
// #include<iostream>
// using namespace std;
// int main(){
//   char ch;
//   cout << "Enter a character: " << endl;
//   cin >> ch;
//   cout << "ASCII value of " << ch << " is: " << int(ch) << endl;

//   return 0;
// }

//====================================================
// C++ Program to Multiply  two number
// #include <iostream>
// using namespace std;
// int main(){
//   int num1, num2, Multiply;
//   cout << "Enter num1: " << endl;
//   cin >> num1;
//   cout << "Enter num2: " << endl;
//   cin >> num2;

//   Multiply = num1 * num2;

//   cout << "Multiplication of " << num1 << " * " << num2 << " = " << Multiply << endl;
//   return 0;
// }


//=======================================================
// C++ Program to Find Factorial of a Number
// #include <iostream>
// using namespace std;
// int main(){
//   int num, i, factorial = 1;
//   cout << "Enter a number: " << endl;
//   cin >> num;
//   for (i = 1; i <= num; i++)
//   {
//     factorial = factorial * i;
//   }
//   cout << "Factorial of " << num << " = " << factorial << endl;
//   return 0;
// }

//===========================================================
// C++ program to find if an integer is even or odd or neither (0) using nested if statements.
// #include<iostream>
// using namespace std;

// int main(){
//   int num;
//   cout << "Enter an integer: ";
//   cin >> num;

//   // outer if condition
//   if(num != 0){
//     // inner if condition
//     if((num % 2) == 0){
//       cout << "The number is even." << endl;
//     }
//     // inner else condition
//     else{
//       cout << "The number is odd." << endl;
//     }
//   }
//   // outer else condition
//   else {
//     cout << "The number is 0 and it is neither even nor odd." << endl;
//   }
//   cout << "This line is always printed." << endl;
//   return 0;
// }

//==========================================================
// C++ program to check whether number is even or odd
//#include<iostream>
//using namespace std;
//
//int main(){
//  int num;
//  cout << "Enter number: ";
//  cin >> num;
//  if(num % 2 == 0){
//    cout << "Number is even";
//  } else {
//    cout << "Number is odd";
//  }
//
//  return 0;
//}


//==========================================
// C++ program to check whether a character is vowel or consonant.

//#include <iostream>
//using namespace std;
//
//int main(){
//	char c;
//	cout << "Enter a character: ";
//	cin >> c;
//	if(c == 'a' || c == 'A' || c == 'E' || c == 'e' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U'){
//		cout << "Entered character is vowel";
//	} else {
//		cout << "Entered character is consonant";
//	}
//	
//	return 0;
//}


//==========================================

// C++ program to find largest number among three number
//#include <iostream>
//using namespace std;
//
//int main(){
//	int num1, num2, num3;
//	
//	cout << "Enter Three number: ";
//	cin >> num1 >> num2 >> num3;
//	
//	if((num1 > num2) && (num1 > num3))
//	{
//		cout << num1 << " is largest number";
//	}
//	else if(num2 > num3){
//		cout << num2 << " is largest number";
//	} else {
//		cout << num3 << " is largest number";
//	}
//	return 0;
//}




//=============================================
// Example: Range Based for loop

//#include <iostream>
//using namespace std;
//int main(){
//	int num_arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//	int n;
//	for(n : num_arr){
//		cout<<n<<" ";
//	}
//	
//	return 0;
//}

////===================================
//// Program to print value of i
//#include <iostream>
//using namespace std;
//
//int main(){
//	for(int i = 1; i <= 5; i++){
//		// condtion to continue
//		if(i == 3){
//			continue;
//		}
//		cout << i << endl;
//	}
//	return 0;
//}


////==================================
//// Example: Create a Calculator using the switch statement
//
//#include<iostream>
//using namespace std;
//
//int main(){
//	float num1, num2, sum;
//	int C;
//	
//	cout << "Enter first number: ";
//	cin >> num1;
//	cout << "\nEnter second number: ";
//	cin >> num2;
//	cout << "1. Addintion, 2. Subtraction, 3. Multiplication, 4. Division";
//	cout << "\nEnter the give number above: "<< endl;
//	cin >> C;
//	
//	switch(C){
//		case 1: 
//		cout << "Addition is: " << num1 + num2;
//		break;
//		
//		case 2: 
//		cout << "Subtraction is: " << num1 - num2;
//		break;
//		
//		case 3: 
//		cout << "Multiplication is: " << num1 * num2;
//		break;
//		
//		case 4: 
//		cout << "Division is: " << num1 / num2;
//		break;
//		
//		defaul:
//			cout << "Entered number is not valid!";
//			break;
//	}
//	return 0;
//}
//

////==========================================
//
//#include<iostream>
//using namespace std;
//
//int main(){
//	float num1, num2, sum;
//	char Oper;
//	
//	cout << "Enter first number: ";
//	cin >> num1;
//	cout << "\nEnter second number: ";
//	cin >> num2;
//	//cout << "1. Addintion, 2. Subtraction, 3. Multiplication, 4. Division";
//	cout << "\nEnter an operator (+, -, *, /): "<< endl;
//	cin >> Oper;
//	
//	switch(Oper){
//		case '+': 
//		cout << "Addition is: " << num1 + num2;
//		break;
//		
//		case '-': 
//		cout << "Subtraction is: " << num1 - num2;
//		break;
//		
//		case '*': 
//		cout << "Multiplication is: " << num1 * num2;
//		break;
//		
//		case '/': 
//		cout << "Division is: " << num1 / num2;
//		break;
//		
//		defaul:
//			cout << "Entered number is not valid!";
//			break;
//	}
//	return 0;
//}














