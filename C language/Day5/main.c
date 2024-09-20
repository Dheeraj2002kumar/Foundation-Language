// // Example: User-defined function

// #include <stdio.h>

// int addNumbers(int a, int b);   // function prototype

// int main(){
//   int n1, n2, sum;
//   printf("Enter first number: ");
//   scanf("%d", &n1);

//   printf("Enter second number: ");
//   scanf("%d", &n2);

//   sum = addNumbers(n1, n2);   // function call

//   printf("Sum = %d", sum);
//   return 0;
// }

// int addNumbers(int a, int b){     // function definition
//   int result;
//   result = a + b;
//   return result;    // return statement
// }

//=======================================================
// Example: User-defined function
// create subtraction function

// #include <stdio.h>

// int subtraction(int a, int b);   // function prototype

// int main(){
//   int n1, n2, sub;
//   printf("Enter first number: ");
//   scanf("%d", &n1);

//   printf("Enter second number: ");
//   scanf("%d", &n2);

//   sub = subtraction(n1, n2);   // function call

//   printf("Subtraction is = %d", sub);
//   return 0;
// }

// int subtraction(int a, int b){     // function definition
//   int result;
//   result = a - b;
//   return result;    // return statement
// }

//=====================================================
// Example: User-defined function with eveOdd
// function to check whether a number is even or odd
#include <stdio.h>
int eveOdd(int n); // function prototype

int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  printf("Number is %s", eveOdd(n) == 1 ? "even" : "odd");
  return 0;
}
// function definition
int eveOdd(int n)
{ // function definition
  if (n % 2 == 0)
    return 1; // return statement
  else
    return 0;
}

