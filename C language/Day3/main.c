// find number even or odd
// #include<stdio.h>
// int main(){
//   int number;
//   printf("Enter an integer: ");
//   scanf("%d", &number); // True if the remainder is 0

//   if(number % 2 == 0){
//     printf("%d is even. \n", number);
//   } else {
//     printf("%d is odd. \n", number);
//   }
  
//   return 0;
// }

//===========================================
// WAP  to check wheather the character entered by the user is VOWEL or CONSONENT...
// #include<stdio.h>
// int main(){
//   char ch;
//   printf("Enter a character: ");
//   scanf("%c", &ch);
  
//   if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
//     printf("%c is a vowel. \n", ch);
//   } else {
//     printf("%c is consonent. \n", ch);
//   }

//   return 0;
// }


//========================================
// find area of circle. formul is a = PI * r*r
// #include<stdio.h>
// int main(){
//   float radius, area;
//   printf("Enter the radius of circle:");
//   scanf("%f", &radius);

//   area = 3.14 * radius * radius;
  
//   printf("Area of circle is: %.2f", area);
//   return 0;
// }

// another way use #define PI 3.14
// #include<stdio.h>
// #define PI 3.14
// int main(){
//   float radius, area;
//   printf("Enter the radius of circle:");
//   scanf("%f", &radius);

//   area = PI * radius * radius;
  
//   printf("Area of circle is: %.2f", area);
//   return 0;
// }


//===============================================
// find area of rectangle
// #include<stdio.h>
// int main(){
//   float length, breadth, area;
//   printf("Enter the length of rectangle: ");
//   scanf("%f", &length);
//   printf("Enter the breadth of ractangle: ");
//   scanf("%f", &breadth);

//   area = length * breadth;

//   printf("Area of ractangle is: %.2f", area);
//   return 0;
// }


//==============================================
// find area of triangle
// #include<stdio.h>
// int main(){
//   float base, height, area;
//   printf("Enter base of trangle: ");
//   scanf("%f", &base);
//   printf("Enter height of trangle: ");
//   scanf("%f", &height);

//   area = 0.5 * base * height;
//   printf("Area of triangle is: %.2f", area);
//   return 0;
// }


//=========================================
// WAP to print number 1 to 10
// #include<stdio.h>
// int main(){
//   int i;
//   for(i = 1; i <= 10; i++){
//     printf("%d\n",i);
//   }
//   return 0;
// }





//=================================================
// find out factorial of number
// #include<stdio.h>
// int main(){
//   int num, i, fact = 1;
//   printf("Enter a number: ");
//   scanf("%d", &num);

//   for(i = 1; i <= num; i++){
//     fact = fact * i;
//   }
//   printf("Factorial of %d is: %d", num, fact);
//   return 0;
// }


//===========================================
// WAP to find out Fiboacci series up to n.
// #include<stdio.h>
// int main(){
//   int n, i, t1 = 0, t2 = 1, nextTerm;
//   printf("Enter a number: ");
//   scanf("%d", &n);
//   printf("Fibonacci Series up to %d terms are: ", n);

//   for(i = 1; i <= n; i++){
//     printf("%d ", t1);
//     nextTerm = t1 + t2;
//     t1 = t2;
//     t2 = nextTerm;
//   }
//   return 0;
// }


// another way to solve Fiboacci series =========
// #include<stdio.h>
// int main(){
//   int n, i, t1 = -1, t2 = 1, nextTerm;

//   printf("Enter number: ");
//   scanf("%d", &n);

//   printf("\nFiboacci Series: ");

//   for(i = 1; i <= n; i++){
//     nextTerm = t1 + t2;
//     printf("%d", nextTerm);
//     t1 = t2;
//     t2 = nextTerm;
//   }
//   return 0;

// }


//=========================================
// WAP to find out the sum of N natural numbers.
// #include<stdio.h>
// int main(){
//   int n, i, sum = 0;
//   printf("Enter a number: ");
//   scanf("%d", &n);
//   for(i = 1; i <= n; i++){
//     sum = sum + i;
//   }
//   printf("Sum of %d natural numbers is: %d", n, sum);
//   return 0;
// }



//==============================================
// WAP to find out sum of numbers within range.
// #include<stdio.h>
// int main(){
//   int start, end, sum = 0;
//   printf("Enter start and end of range: ");
//   scanf("%d %d", &start, &end);
//   for(int i = start; i <= end; i++){
//     sum = sum + i;
//   }
//   printf("Sum of numbers within range is: %d", sum);
//   return 0;
// }

//=================================================
// WAP to find factors of numbers.
// #include<stdio.h>
// int main(){
//   int num, i, count = 0;
//   printf("Enter number: ");
//   scanf("%d", &num);
//   for(i = 1; i <= num; i++){
//     if(num % i == 0){
//       count++;
//       printf("\n%d ", i);
//     }
//   }
//   printf("\nNumber of factors of %d is: %d", num, count);
//   return 0;
// }


// =====================================
// Print numbers from 1 to 5 using while loop
// #include<stdio.h>
// int main(){
//   int i = 1;
//   while(i <= 5){
//     printf("%d\n", i);
//     i++;
//   }
//   return 0;
// }


//===========================================
// WAP to find number of digits in number using while loop
// #include<stdio.h>
// int main(){
//   int num, count = 0;
//   printf("Enter number: ");
//   scanf("%d", &num);
//   while(num != 0){
//     num = num / 10;
//     count++;
//   }
//   printf("Number of digits in number is: %d", count);
//   return 0;
// }

//============================================
// WAP to find sum of digits of number using while loop
// #include<stdio.h>
// int main(){
//   int num, sum = 0;
//   printf("Enter number: ");
//   scanf("%d", &num);
//   while(num != 0){
//     sum = sum + num % 10;
//     num = num / 10;
//   }
//   printf("Sum of digits of number is: %d", sum);
//   return 0;
// }


//=============================================
// WAP to reverse digits of number.
// #include<stdio.h>
// int main(){
//   int num, rev = 0;
//   printf("Enter number: ");
//   scanf("%d", &num);

//   while(num != 0){
//     rev = rev * 10 + num % 10;
//     // printf("\n rev --> %d", rev);
//     num = num / 10;
//     // printf("\n num--> %d \n", num);
//   }

//   printf("Reverse of number is: %d", rev);

//   return 0;
// }

// input num is 123
// rev = 0 * 10 + 123 % 10 ==> 0 + 3 ==> 3
// num = 123 / 10 ==> 12

// rev = 3 * 10 + 12 % 10 ==> 30 + 2 ==> 32
// num = 12 / 10 ==> 1

// rev = 32 * 10 + 1 % 10 ==> 320 + 1 ==> 321    
// num = 1/10 ==> 0

// Reverse of number is: 321

// // =================================================
// // WAP to find if Number is Perfect Number using while loop.
// #include <stdio.h>

// // Function to check if a number is perfect
// int isPerfectNumber(int num) {
//     int sum = 0;
//     int i = 1;

//     // Loop to find divisors and add them using a while loop
//     while (i <= num / 2) {
//         if (num % i == 0) {
//             sum += i;
//         }
//         i++;
//     }

//     // If sum of divisors equals the number, it's a perfect number
//     return sum == num;
// }

// int main() {
//     int number;

//     // Ask user for input
//     printf("Enter a number: ");
//     scanf("%d", &number);

//     // Check if the number is perfect and display result
//     if (isPerfectNumber(number)) {
//         printf("%d is a perfect number.\n", number);
//     } else {
//         printf("%d is not a perfect number.\n", number);
//     }

//     return 0;
// }



//=========================================
// WAP to identify if the number is Palindrome or not
#include <stdio.h>

int main() {
    int number, originalNumber, reversedNumber = 0, remainder;

    // Ask user for input
    printf("Enter a number: ");
    scanf("%d", &number);

    // Store the original number to compare later
    originalNumber = number;

    // Reverse the number
    while (number != 0) {
        remainder = number % 10;  // Get the last digit
        reversedNumber = reversedNumber * 10 + remainder;  // Add it to the reversed number
        number /= 10;  // Remove the last digit from the original number
    }

    // Check if the original number is equal to the reversed number
    if (originalNumber == reversedNumber) {
        printf("%d is a palindrome.\n", originalNumber);
    } else {
        printf("%d is not a palindrome.\n", originalNumber);
    }

    return 0;
}
