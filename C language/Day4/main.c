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

// #include <stdio.h>

// int main()
// {
//   int i;
//   double number, sum = 0.0;

//   for(i = 1; i <= 10; i++){
//     printf("Enter number %d: ", i);
//     scanf("%lf", &number);
    
//     if(number < 0.0){
//       continue;
//     }
//     sum += number;
//   }
//   printf("Sum = %.2f", sum);
//   return 0;
// }



//=====================================================
// WAP for arithmetic calculator using switch case stetement.

// #include <stdio.h>

// int main(){
//   int num1, num2;
//   int choice;
//   printf("Enter num1: ");
//   scanf("%d", &num1);

//   printf("Enter num2: ");
//   scanf("%d", &num2);

//   printf("\n1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division\n");
//   printf("Choice the which type of calculation you want (+ - * /): ");
//   scanf("%d", &choice);

//   switch (choice)
//   {
//   case 1: printf("\nAddition is = %d", num1 + num2);
//     break;
  
//   case 2: printf("\nubtraction is = %d", num1 - num2);
//     break;

//   case 3: printf("\nMultiplication is = %d", num1 * num2);
//     break;

//   case 4: printf("\nDivision is = %d", num1 / num2);
//     break; 

//   default: printf("\nYou have entered wrong choice");
//     break;
//   }

// return 0;
// }


//==================================================================
// Program to calculate the sum and average of positive number
// If the user enters a negative number, the  sum and average are displayed.
// #include <stdio.h>
// int main(){

//   const int maxInput = 100;
//   int i;
//   double number, average, sum = 0.0;

//   for(i = 1; i <= maxInput; i++){
//     printf("%d Enter a number ", i);
//     scanf("%lf", &number);

//     // go to jump if the user enters a negative number
//     if(number < 0.0){
//       goto jump;
//     }
//     sum += number;
//   }
//   jump:average = sum / (i - 1);
//   printf("Sum = %.2f\n", sum);
//   printf("Average = %.2f", average);
//   return 0;
// }


//=========================================================

// Check whether number is positive or negative or zero

#include <stdio.h>
int main(){
  double num;
  printf("Enter a number: ");
  scanf("%lf", &num);

  if(num <= 0.0){

    if(num == 0.0){
      printf("You entered 0");
    } else {
      printf("You entered a negative number");
    }
    
  } else {
    printf("You entered a positive number");
  }
  return 0;
}