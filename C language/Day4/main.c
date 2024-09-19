// C program to check whether the given number is the perfect number
// #include<stdio.h>

// int main(){

//   // declare and initialize the  variables
//   int num, rem, sum = 0, i;

//   // take an input from the user
//   printf("Enter a number: ");
//   scanf("%d", &num);

//   // find all divisors and then 
//   for(i = 1; i < num; i++){
//     rem = num % i;
//     if(rem == 0){
//       sum = sum + i;
//     }
//   }

//   if(sum == num){
//     printf("%d is a perfect number", num);
//   } else {
//     printf("%d is not a perfect number",num);
//   }

//   return 0;
// }



//=====================================================

// Program to add numbers until the user enters zero
// #include <stdio.h>

// int main(){
//   double number, sum = 0;

//   // the body of the loop is executed at least once 
//   do {
//     printf("Enter a number: ");
//     scanf("%lf", &number);
//     sum += number;
//   }
//   while (number != 0.0);
//   printf("sum = %.2lf", sum);
//   return 0;
// }



//==============================================

// Program to calculate the sum of numbers (10 numbers max) // if the user enters a negative number, the loop terminates

// #include <stdio.h>

// int main(){

//   int i;
//   double number, sum = 0.0;

//   for(i = 1; i <= 10; ++i){
//     printf("Enter number %d: ", i);
//     scanf("%lf", &number);

//     // if the user enters a negative number, break the loop
//     if(number < 0.0){
//       break;
//     }
//     sum += number;
//     // sum = sum + number
//   }

//   printf("Sum = %.2f", sum);
//   return 0;
// }



//==============================================================

// Program to calculate the sum of numbers (10 numbers max) // if the user enters a negative number. It's not added to the result.

#include <stdio.h>

int main()
{
  int i;
  double number, sum = 0.0;

  for(i = 1; i <= 10; i++){
    printf("Enter number %d: ", i);
    scanf("%lf", &number);
    
    if(number < 0.0){
      continue;
    }
    sum += number;
  }
  printf("Sum = %.2f", sum);
  return 0;
}