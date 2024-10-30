// // Increment and decrement operator
// #include <stdio.h>
// int main()
// {
//   int a = 10;
//   int b = 100;
//   float c = 10.5;
//   float d = 100.5;

//   // pre-increment or decrement
//   printf("++a = %d\n", ++a);
//   printf("--b = %d\n", --b);
//   printf("++c = %f\n", ++c);
//   printf("--d = %f\n\n", --d);

//   // post-increment or decrement
//   printf("b-- = %d\n", b--);
//   printf("a++ = %d\n", a++);
//   printf("c++ = %f\n", c++);
//   printf("d-- = %f\n\n", d--);

//   printf("post increment or decrement: a++ = %d\n", a++);
//   printf("post increment or decrement: b-- = %d\n", b--);
//   printf("post increment or decrement: c++ = %f\n", c++);
//   printf("post increment or decrement: d-- = %f\n", d--);
//   return 0;
// }


//===================================================
// // Relational operator
// #include<stdio.h>
// int main(){
//   int a = 10;
//   int b = 20;
//   int c = 10;

//   printf(" a == b %d", a == b);
//   printf("\n a == c %d", a == c);

//   printf("\n a > b %d", a > b);
//   printf("\n a < b %d", a < b);
//   printf("\n a <= b %d", a <= b);
//   printf("\n a >= b %d", a >= b);
//   printf("\n a != b %d", a != b);
//   return 0;
// }


//===================================================
// Logical Operators
// #include<stdio.h>
// int main(){
  
//   int c = 5, d = 2;
  
//   printf("This is for AND operator\n");
//   if((c = 5) && (d > 5)){
//     printf("Condition is true\n");
//   } else {
//     printf("Condition is false\n");
//   }

//   printf("\nThis is for OR operator");
//   if((c == 5) || (d > 5)){
//     printf("\nCondition is true\n");
//   } else {
//     printf("Condition is false\n");
//   }

//   printf("\nThis is for NOT operator");
//   if(!(c == 5)){
//     printf("\nCondition is true\n");
//   } else{
//     printf("\nCondition is false\n");
//   }

//   return 0;
// }


//========================================
// Other Operators
// #include<stdio.h> 
// int main(){
//   int a; 
//   float b;
//   double c;
//   char d;
  
//   printf("Size of int = %lu bytes\n", sizeof(a));
//   printf("Size of float = %lu bytes\n", sizeof(b));
//   printf("Size of double = %lu bytes\n", sizeof(c));
//   printf("Size of char = %lu bytes\n", sizeof(d));
//   return 0;
// }


//=============================================
// program to add integer number
//  1) already stored in program
//  2) take the input from user
// #include<stdio.h>
// int main(){
//   int num1, num2, sum;
//   printf("Enter first number: ");
//   scanf("%d", &num1);
//   printf("Enter second number: ");
//   scanf("%d", &num2);
//   sum = num1 + num2;
//   printf("Sum of two numbers = %d", sum);
//   return 0;
// }



//=============================================
// multiply two floating point number
// #include<stdio.h>
// int main(){
//   float num1, num2, product;

//   printf("Enter two number to multiply: ");
//   scanf("%f %f", &num1, &num2);

//   product = num1 * num2;

//   printf("Multiplication of num1 and num2 is: %f", product);
//   return 0;
// }



// multiply two floating point number
// #include<stdio.h>
// int main(){
//   float num1, num2, product;

//   printf("Enter two number to multiply: ");
//   scanf("%f %f", &num1, &num2);

//   product = num1 * num2;

//   printf("Multiplication of num1 and num2 is: %.2f", product);  // %.2f will give after decimal two digits 0.00
//   return 0;
// }



//=============================================
// find ASCII(Anerucab standard Code for Information Interchange) value of a character entered by the user.
// ASCII value is character --> %c
// but output is int --> %d

// #include<stdio.h>
// int main(){
//   char c;
//   printf("\nEnter the character: ");
//   scanf("%c", &c);

//   printf("\nASCII value of character %d", c);
//   return 0;
// }


//===============================================
// find quotient and remainder of Two integers.
// dividend / divisor = quotient
// dividend % divisor = remainder

// #include<stdio.h>
// int main(){
//   int dividend, divisor, quotient, remainder;

//   printf("\nEnter the dividend: ");
//   scanf("%d", &dividend);

//   printf("\nEnter the divisor: ");
//   scanf("%d", &divisor);

//   quotient = dividend / divisor;
//   remainder = dividend % divisor;

//   printf("\nQuotient is = %d", quotient);
//   printf("\nRemainder is = %d", remainder);
//   return 0;
// }



//==================================================
// swap two numbers
// a = 10
// b = 20
// swaped numbers is a = 20 and b = 10

#include<stdio.h>
int main(){
  int a, b, temp;
  printf("\nEnter the first number: ");
  scanf("%d", &a);

  printf("\nEnter the second number: ");
  scanf("%d", &b);

  // swap the number
  temp = a;
  a = b; 
  b = a;

  printf("\nSwaped number");
  printf("\nvalue of a = %d", a);
  printf("\nvalue of b = %d", b);
  return 0;
}