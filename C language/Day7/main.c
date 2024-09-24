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

#include<stdio.h>
int main(){
  char name[20];
  printf("Enter name: ");
  scanf("%s", &name);
  printf("Your name is %s", name);
  return 0;
}