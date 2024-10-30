// C program to store tempreture of two cities of a week and display it.

// #include<stdio.h>

// const int CITY = 2;
// const int WEEK = 7;

// int main(){
//   int temperature[CITY][WEEK];
//   int i, j;

//   // Using nested loop to store values in a 2d array
//   for(i = 0; i < CITY; i++){
//     for(j = 0; j < WEEK; j++){
//       printf("City %d, Day %d ", i+1, j+1);
//       scanf("%d", &temperature[i][j]);
//     }
//     printf("\n");
//   }
//   printf("\nDisplaying values: \n\n");

//   // Using nested toop to display values of a 2d array
//   for(i = 0; i < CITY; i++){
//     for(j = 0; j<WEEK; j++){
//       printf("City %d, Day %d = %d\n", i+1, j+1, temperature[i][j]);
//     }
//     printf("\n");
//   }
//   return 0;
// }


// //==========================================================
// // C Program to store and print 12 values entered by the user

// #include<stdio.h>
// int main(){
//   int test[2][3][2];
//   int i, j, k;

//   printf("Enter 12 values: \n");

//   for(i = 0; i < 2; i++){
//     for(j = 0; j < 3; j++){
//       for(k = 0; k < 2; k++){
//         scanf("%d", &test[i][j][k]);
//       }
//     }
//   }

//   // printing values with proper index.
//   printf("\nDisplaying values:\n");

//   for(i = 0; i < 2; i++){
//     for(j = 0; j < 3; j++){
//       for(k = 0; k < 2; k++){
//         printf("test[%d][%d][%d] = %d\n", i, j, k, test[i][j][k]);
//       }
//     }
//   }

//   return 0;
// }

//=====================================================
// Pass arrays to a function in C

// #include<stdio.h>
// void display(int age1, int age2);  // function prototyping

// int main(){
//   int ageArray[] = {2, 8, 4, 12};

//   // Passing second and third elements to display()
//   display(ageArray[1], ageArray[2]);
//   return 0;
// }

// void display(int age1, int age2){
//   printf("%d\n", age1);
//   printf("%d\n", age2);
// }


//=====================================================================
//================= String =============================
// Example: scanf() to read a string

// #include<stdio.h>
// int main(){
//   char name[20];
//   printf("Enter name: ");
//   scanf("%s", &name);
//   printf("Your name is %s", name);
//   return 0;
// }

//=========================================================
// You can use the fgets() function to read a line of string. And, 
// You use puts() to display the string.

// #include<stdio.h>
// int main(){
//   char name[30];
//   printf("Enter name: ");
//   fgets(name, sizeof(name), stdin); // read string
//   printf("Name: ");
//   puts(name);  // display string 
//   return 0;
// }

//===================================================
// Passing string to a function
// #include<stdio.h>
// void displayString(char str[]); // funciton prototyping

// int main(){
//   char str[50];
//   printf("Enter string: ");
//   fgets(str, sizeof(str), stdin);
//   displayString(str);  // passing string to a function
//   return 0;
// }

// void displayString(char str[]){
//   printf("String Output: ");
//   puts(str);
// }


//==============================================
// find the frequency of character in a string
// #include<stdio.h>
// int main(){
//   char frequency[50], ch;
//   int count = 0;

//   printf("\nEnter the string: ");
//   fgets(frequency, sizeof(frequency), stdin);

//   printf("\nEnter the character that needs to be checked for frequency: ");
//   scanf("%c", &ch);

//   int i;
//   for(i = 0; frequency[i] != '\0'; i++){
//     if(ch == frequency[i]) count++;
//   }

//   printf("\nFrequency of character is = %d", count);
//   return 0;
// }

//===============================================================
// Find the number of vowels, consonants, digits and white spaces

// #include<stdio.h>
// #include<ctype.h> // for tolower() and isdigit()

// int main(){
//   char str[100];
//   int i, vowels = 0, consonants = 0, digits = 0, spaces = 0;

//   // Input a string from user
//   printf("Enter a string: ");
//   fgets(str, sizeof(str), stdin);  // Use fgets to take input with spaces

//   // Loop through each character of the string
//   for(i = 0; str[i] != '\0'; i++){
//     // Convert to lowercase to simplify comparison
//     char ch = tolower(str[i]);

//     // check for vowels
//     if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
//       ++vowels;
//     }
//     // check for consonants(alphabetic but not vowels)
//     else if((ch >= 'a' && ch <= 'z')){
//       ++consonants;
//     }
//     // check for digits
//     else if (isdigit(ch)){
//       ++digits;
//     }
//     // check for white spaces
//     else if (ch == ' '){
//       ++spaces;
//     }
//   }

//   // output the result
//   printf("Vowels: %d\n", vowels);
//   printf("Consonants: %d\n", consonants);
//   printf("Digits: %d\n", digits);
//   printf("White spaces: %d\n", spaces);

//   return 0;
// }



// =====================================================
// find the length of string
#include<stdio.h>
#include<string.h>

int main(){
  char a[20] = "Programming";  // length = 11
  char b[20] = {'p', 'r', 'o', 'g', 'r', 'a', 'm', '\0'}; // length = 7 (null  value will be exluded)
  char c[20];

  int result1, result2, result3;

  printf("\nEnter the string: ");
  fgets(c, sizeof(c), stdin); // 1 will be included because of nul value

  result1 = strlen(a);
  result2 = strlen(b);
  result3 = strlen(c);

  printf("\nLength of the string a is = %d", result1);
  printf("\nLength of the string b is = %d", result2);
  printf("\nLength of the string c is = %d", result3); 

  return 0;

}