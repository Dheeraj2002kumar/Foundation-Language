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
#include<iostream>
using namespace std;
int main(){
  cout << "Size of int: " << sizeof(int) << endl;
  cout << "Size of float: " << sizeof(float) << endl;
  cout << "Size of double: " << sizeof(double) << endl;
  cout << "Size of char: " << sizeof(char) << endl;
  return 0;
}