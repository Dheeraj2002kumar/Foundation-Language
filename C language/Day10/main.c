// File handaling
// #include<stdio.h>
// #include<stdlib.h>  // for exit()
// int main(){
//   char someDetails[100]; // declare an array to store a string
//   FILE *fptr;

//   // use appropriate Location if you are using MacOS or Linux
//   fptr = fopen("C:/Users/hp/Desktop/TCS IT/C language/Day10/test.txt", "w"); // use double backslashes for windows-style path
//   if(fptr == NULL){
//     printf("Error! Could not open file \n");
//     exit(1);
//   }

//   printf("Enter some details: ");
//   fgets(someDetails, 100, stdin); // prevnt buffer overflow
//   someDetails[strcspn(someDetails, "\n")] = 0;  // remove the newline character
//   fprintf(fptr, "%s\n", someDetails); // add a newine character to the file
//   fclose(fptr);
//   return 0;
// }


//=============================================================
// File handling
// #include <stdio.h>
// #include <stdlib.h> // for exit()

// int main(){
//     int num;
//     FILE *fptr;

//     // use appropriate Location if you are using MacOS or Linux
//     fptr = fopen("C:\\Users\\hp\\Desktop\\TCS IT\\C language\\Day10\\test1.txt", "w"); // use double backslashes for Windows-style path
//     if(fptr == NULL){
//         printf("Error! Could not open file \n");
//         exit(1);
//     }

//     printf("Enter num: ");
//     scanf("%d", &num); // prevent buffer overflow
//     fprintf(fptr, "%d\n", num); // add a newline character to the file
//     fclose(fptr);
//     return 0;
// }

//====================================================================
//=============================================================
// File handling
// #include <stdio.h>
// #include <stdlib.h> // for exit()

// int main(){
//     int num;
//     FILE *fptr;

//     // use appropriate Location if you are using MacOS or Linux
//     fptr = fopen("C:\\Users\\hp\\Desktop\\TCS IT\\C language\\Day10\\binary.bin", "wb"); // use double backslashes for Windows-style path
//     if(fptr == NULL){
//         printf("Error! Could not open file \n");
//         exit(1);
//     }

//     printf("Enter num: ");
//     scanf("%d", &num); // prevent buffer overflow
//     fprintf(fptr, "%d\n", num); // add a newline character to the file
//     fclose(fptr);
//     return 0;
// }

//===========================================================
// read mode
// #include <stdio.h>
// #include <stdlib.h> // for exit()
// int main(){
//   int num;
//   FILE *fptr;
//   if((fptr = fopen("C:\\Users\\hp\\Desktop\\TCS IT\\C language\\Day10\\test1.txt", "r")) == NULL){
//     printf("Error! Could not open file \n");
//     // program exits if the file pointer return  NULL
//     exit(1);
//   }

//   fscanf(fptr, "%d", &num);
//   printf("=================== Content of the file is ===============\n");
//   printf("%d\n", num);
//   fclose(fptr);

//   return 0;
// }


//=====================================================
// read mode with multiple values
// #include <stdio.h>
// #include <stdlib.h> // for exit()
// int main(){
//   int num1, num2, num3;
//   FILE *fptr;
//   if((fptr = fopen("C:\\Users\\hp\\Desktop\\TCS IT\\C language\\Day10\\test1.txt", "r")) == NULL){
//     printf("Error! Could not open file \n");
//     // program exits if the file pointer return  NULL
//     exit(1);
//     }
//     fscanf(fptr, "%d %d %d", &num1, &num2,
//     &num3);
//     printf("=================== Content of the file is ===============\n");
//     printf("%d %d %d\n", num1, num2, num3);
//     fclose(fptr);
//     return 0;
// }

// //=========================================================
// // An example program to demonstrate working of enum in C
// #include<stdio.h>

// enum week{Mon, Tue, Wed, Thur, Fri, Sat, sun};

// int main(){
//   enum week day;
//   day = Wed;
//   printf("%d",day);
//   return 0;
// }

//==================================================
// Example 1: #define preprocessor
// #include<stdio.h>
// #define PI 3.1415;

// int main(){
//   float radius, area;
//   printf("Enter the  radius: ");
//   scanf("%f", &radius);

//   // Notice, the use of PI
//   area = PI * radius * radius;

//   printf("Area = %.2f", area);
//   return 0;
// }



  // //====================================================
  // // Example 2: Using #define preprocessor
  // #include<stdio.h>
  // #define PI 3.1415;
  // #define circleArea(r)(PI * r * r);

  // int main(){
  //   float radius, area;

  //   printf("Enter the radius: ");
  //   scanf("%f", &radius);
  //   area = circleArea(radius);
  //   printf("Area = %.2f", area);
  //   return 0;
  // }

  //===================================================
// Difference between unions and structures
#include<stdio.h>

union unionJob {
  // defining a union
  char name[32];
  float salary;
  int workerNo;
} uJob;

struct  structJob
{
  char name[32];
  float salary;
  int workerNo;
} sJob;

int main(){
  printf("size of union = %d bytes", sizeof(uJob));
  printf("\nsize of structure = %d bytes", sizeof(sJob));
  return 0;
}
