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
// #include <stdio.h>
// int eveOdd(int n); // function prototype

// int main()
// {
//   int n;
//   printf("Enter a number: ");
//   scanf("%d", &n);
//   printf("Number is %s", eveOdd(n) == 1 ? "even" : "odd");
//   return 0;
// }
// // function definition
// int eveOdd(int n)
// { // function definition
//   if (n % 2 == 0)
//     return 1; // return statement
//   else
//     return 0;
// }



//===============================================
// Example: User-defined function with no argument pass and no return value
// create function for prime number
// #include<stdio.h>

// void prime(); // function prototype

// int main(){
//   prime(); // function call
//   return 0;
// }

// void prime(){   // function definition
//   int n, i, flag = 0;

//   printf("Enter the number: ");
//   scanf("%d", &n);

//   for(i=2; i <= n/2; i++){
//     if(n % i == 0){
//       flag = 1;
//     } 
//   }

//   if(flag == 1){
//     printf("%d is not a prime number", n);
//   } else {
//     printf("%d is a prime number", n);
//   }
// }



//=================================================

// Example: User-defined function with no argument pass but return  value
// create getvalue function and find prime number

// #include <stdio.h>

// int getValue();

// int main(){
//   int n, i, flag = 0;
//   n = getValue();

//   for(i = 2; i <= n/2; i++){
//     if(n % i == 0){
//       flag = 1;
//       break;
//     }
//   }

//   if(flag == 1){
//     printf("%d is not a prime number", n);
//   } else{
//     printf("%d is a prime number", n);
//   }

//   return 0;
// }

// int getValue(){
//   int n; 
//   printf("Enter the number: ");
//   scanf("%d", &n);

//   return n;
// }


//=============================================

// Example: User-defined function with argument pass and no return value
// create prime number function

#include<stdio.h>

void prime(int n);

int main(){
  int n; 

  printf("Enter the number: ");
  scanf("%d", &n);

  prime(n);
  return 0;
}

void prime(int n){
  int i, flag = 0;
  //   int n, i, flag = 0;
   for(i = 2; i <= n/2; i++){
    if(n % i == 0){
      flag = 1;
      break;
    }
  }

  if(flag == 1){
    printf("%d is not a prime number", n);
  } else{
    printf("%d is a prime number", n);
  }
}