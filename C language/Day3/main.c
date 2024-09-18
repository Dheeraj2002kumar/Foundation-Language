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
#include<stdio.h>
#define PI 3.14
int main(){
  float radius, area;
  printf("Enter the radius of circle:");
  scanf("%f", &radius);

  area = PI * radius * radius;
  
  printf("Area of circle is: %.2f", area);
  return 0;
}