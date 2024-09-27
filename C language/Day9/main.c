// #include<stdio.h>

// void addOne(int* ptr){
//   (*ptr)++; // adding 1 to ptr
// }

// int main(){
//   int* p, i = 10;
//   p = &i;
//   addOne(p);
//   printf("%d", *p);  // 11
//   printf("\n%d", p);  // address value of c
//   return 0;
// }


// //==============================================
// // Write a program in C to add two numbers using pointers.
// #include<stdio.h>
// int main(){
//   int fno, sno, *ptr, *qtr, sum;

//   printf("\n\nPointer: Add two numbers: \n");
//   printf("-------------------------------\n");

//   printf("Input the first number: ");
//   scanf("%d", &fno);
//   printf("Input the second number: ");
//   scanf("%d", &sno);

//   ptr = &fno;
//   qtr = &sno;

//   sum = *ptr + *qtr;

//   printf("The sum of the  entered numbers is: %d\n\n", sum);

//   return 0;
// }


//===============================================
// Write a program in C to print the elements of an array in reverse order.

#include<stdio.h>
void main(){
  int n, i, arr1[15];
  int *pt;
  printf("Input the number of elements to store in the array (max 15): ");
  scanf("%d", &n);
  pt = &arr1[0]; // pt stores the address of base array arr1
  printf("Input %d number of elements in the array: \n", n);

  for(i = 0; i < n; i++){
    printf("element - %d: ", i+1);
    scanf("%d", pt); // accept the address of the value
    pt++;
  }

  pt = &arr1[n - 1];
  printf("\nThe elements of array in reverse order are: ");

  for(i = n; i > 0; i--){
    printf("\nElement - %d: %d", i, *pt);
    pt--;
  }

  printf("\n\n");
}
