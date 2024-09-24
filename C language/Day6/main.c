//============================================================
// Example: Sum of natural Number using recursion

// #include<stdio.h>

// int sum(int n);

// int main(){
//   int number, result;
//   printf("Enter a positive integer: ");
//   scanf("%d", &number);

//   result = sum(number);

//   printf("Sum = %d", result);
//   return 0;
// }

// int sum(int n){
//   if(n != 0){
//     // sum() function call itself
//     return n + sum(n-1);
//   } else {
//     return n;
//   }
// }

//====================================================================

// C storage class: Local Variable
// A local variable is a variable that is declared inside a function or a block of code. It
// is used to store a value that is only accessible within that function or block of code.
// The storage class of a local variable is auto by default.

// The auto storage class is used to declare local variables. It is the default storage class
// for local variables.
// The auto storage class is used to declare local variables. It is the default storage class
// for local variables.
// The auto storage class is used to declare local variables. It is the default storage class
// for local variables.

// #include<stdio.h>
// int main(void) {
//   for(int i = 0; i<5; i++){
//     printf("C programming");
//   }

//   // Error: i is not declared at this point
//   printf("%d",i);
//   return 0;
// }

//========================================================
// Global Variable

// #include<stdio.h>

// void display();
// int n = 5; // Global variable
// int main(){
//   ++n;
//   display();
//   return 0;
// }

// void display(){
//   ++n;
//   printf("n = %d", n);
// }

//=====================================================

// Static Variable

// # include<stdio.h>
// void display();
// int main(){
//   display();
//   display();
// }
// void display(){
//   static int c = 1;
//   c += 5;
//   printf("\nc = %d", c);
// }

//===============================================
// Display all prime numbers between two intervals. using recursion method

// #include <stdio.h>
// #include <math.h>
// int isPrime(int n);
// int main()
// {
//   int lower, upper, i;
//   printf("Enter lower limit: ");
//   scanf("%d", &lower);
//   printf("Enter upper limit: ");
//   scanf("%d", &upper);
//   printf("Prime numbers between %d and %d are: ", lower, upper);
//   for (i = lower; i <= upper; i++)
//   {
//     if (isPrime(i))
//       printf("%d ", i);
//   }
//   return 0;
// }
// int isPrime(int n)
// {
//   if (n <= 1)
//     return 0;
//   for (int i = 2; i <= sqrt(n); i++)
//   {
//     if (n % i == 0)
//       return 0;
//   }
//   return 1;
// }

//==============================================================

// Find the sum of natural number using recursion

// #include <stdio.h>
// int sum(int n);
// int main()
// {
//   int n;
//   printf("Enter a number: ");
//   scanf("%d", &n);
//   printf("Sum of natural numbers from 1 to %d is: %d", n, sum(n));
//   return 0;
// }
// int sum(int n)
// {
//   if (n == 1)
//   {
//     return 1;
//   }
//   else
//   {
//     return n + sum(n - 1);
//   }
// }

//==========================================
// Calculate the factorial of number using recursion

// #include <stdio.h>
// int factorial(int n);

// int main()
// {
//   int n;
//   printf("\nEnter the number: ");
//   scanf("%d", &n);

//   printf("\nfactorial is = %d", factorial(n));

//   return 0;
// }

// int factorial(int n)
// {
//   if(n >= 1){
//     return n * factorial(n - 1);
//   } else {
//     return 1;
//   }
// }


//====================================================
// finding the greatest common diviser (G.C.D) using recursion.
// #include <stdio.h>
// int gcd(int a, int b);
// int main()
// {
//   int a, b;
//   printf("\nEnter the first number: ");
//   scanf("%d", &a);
//   printf("\nEnter the second number: ");
//   scanf("%d", &b);
//   printf("\nGCD is = %d", gcd(a, b));
//   return 0;
// }

// int gcd(int a, int b){
//   if (b == 0) return a;
//   else return gcd(b, a % b);  
// }


//===================================================
// Convert binary number to decimal number and vice versa using recursion
// #include <stdio.h>

// int binaryToDecimal(int binary) {
//     static int decimal = 0;
//     static int base = 1;

//     if (binary == 0) {
//         return decimal;
//     }

//     decimal += (binary % 10) * base;
//     base *= 2;
//     binary /= 10;

//     return binaryToDecimal(binary);
// }

// int main() {
//     int binary;
//     printf("Enter a binary number: ");
//     scanf("%d", &binary);

//     int decimal = binaryToDecimal(binary);
//     printf("The decimal equivalent is: %d\n", decimal);

//     return 0;
// }



// different method =======================================
// #include<stdio.h>
// #include<math.h>

// int binary_to_decimal(long n);

// int main(){
//   long binary_num;
//   printf("\nEnter binary number: ");
//   scanf("%ld", &binary_num);

//   printf("\nResult is %d", binary_to_decimal(binary_num));
//   return 0;
// }
// int binary_to_decimal(long n){
//   int i = 0, res, dec = 0;
//   while(n != 0){
//     res = n % 10;
//     n = n/10;
//     dec = dec + res * pow(2, i);
//     i++;
//   }
//   return dec;
// }



//=================================================================
// Calculate power of a number using recursion

// #include<stdio.h>
// #include<math.h>
// int power_of_number(int n1, int n2); // function prototyping
// int main(){
//   int a, result, base;

//   printf("\nEnter the base value: ");
//   scanf("%d", &base);
//   printf("\nEnter the power: ");
//   scanf("%d", &a);

//   result = power_of_number(base, a);
//   printf("\nResult is = %d", result);
//   return 0;
// }

// int power_of_number(int n1, int n2){
//   if(n2 == 0) return 1;
//   else return n1 * power_of_number(n1, n2 - 1);
// }


//==============================================================
// Example: Array Input/Output
// Program to take 5 values from the user and store them in an array
// print the elements stored in the array

// #include<stdio.h>
// int main(){
//   int values[5];
//   printf("Enter 5 integers: ");

//   // taking inputs and storing in an array
//   for(int i = 0; i < 5; i++){
//     scanf("%d", &values[i]);
//   }

//   printf("Displaying integers: ");
//   // Printing elements of an array
//   for(int i = 0; i < 5; i++){
//     printf("%d ", values[i]);
//   }
//   return  0;
// }


//=================================================================
// Proram to find the average of n numbers using arrays

// #include<stdio.h>
// int main(){
//   int marks[10], i, n, sum = 0, average;
//   printf("Enter number of elements: ");
//   scanf("%d", &n);
//   for(i = 0; i < n; i++){
//     printf("Enter number %d ", i+1);
//     scanf("%d", &marks[i]);
//     // adding integers entered by the user to the sum variable
//     sum += marks[i];
//   }
//   average = sum / n;
//   printf("Average = %d", average);
//   return 0;
// }


//=======================================================
#include<stdio.h>
int func(){
  return (double)(char)5.0;
}