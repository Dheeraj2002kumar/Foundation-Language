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
#include<stdio.h>
int main(){
  int num, count = 0;
  printf("Enter number: ");
  scanf("%d", &num);
  while(num != 0){
    num = num / 10;
    count++;
  }
  printf("Number of digits in number is: %d", count);
  return 0;
}