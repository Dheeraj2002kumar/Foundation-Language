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


