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
