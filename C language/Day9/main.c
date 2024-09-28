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

// #include<stdio.h>
// void main(){
//   int n, i, arr1[15];
//   int *pt;
//   printf("Input the number of elements to store in the array (max 15): ");
//   scanf("%d", &n);
//   pt = &arr1[0]; // pt stores the address of base array arr1
//   printf("Input %d number of elements in the array: \n", n);

//   for(i = 0; i < n; i++){
//     printf("element - %d: ", i+1);
//     scanf("%d", pt); // accept the address of the value
//     pt++;
//   }

//   pt = &arr1[n - 1];
//   printf("\nThe elements of array in reverse order are: ");

//   for(i = n; i > 0; i--){
//     printf("\nElement - %d: %d", i, *pt);
//     pt--;
//   }

//   printf("\n\n");
// }

// ==============================================
// Store numbers and calculate average using arrays
// #include<stdio.h>
// int main(){
//   int n, i;
//   float num[100], sum = 0.0, avg;

//   printf("Enter the number of elements: ");
//   scanf("%d", &n);

//   while (n > 100 || n < 1)
//   {
//     printf("Error! number should in range of (1 to 100).\n");
//     printf("Enter the number again: ");
//     scanf("%d", &n);
//   }

//   for(i = 0; i < n; i++){
//     printf("%d. Enter number: ", i + 1);
//     scanf("%f", &num[i]);
//     sum += num[i];
//   }

//   avg = sum / n;
//   printf("Average = %.2f", avg);
//   return 0;

// }

//===========================================
// Example: Population standard Deviation
// SD of a population

// #include<math.h>
// #include <math.h>
// #include <stdio.h>

// /**
//  * Calculates the population standard deviation of a given dataset.
//  *
//  * @param data The input dataset.
//  * @param size The size of the input dataset.
//  * @return The population standard deviation.
//  */
// double calculateSD(double data[], int size) {
//     double sumOfValues = 0.0;
//     double mean;
//     double standardDeviation = 0.0;
//     int i;

//     // Calculate the sum of values
//     for (i = 0; i < size; i++) {
//         sumOfValues += data[i];
//     }

//     // Calculate the mean
//     mean = sumOfValues / size;

//     // Calculate the sum of squared differences
//     for (i = 0; i < size; i++) {
//         standardDeviation += (data[i] - mean) * (data[i] - mean);
//     }

//     // Calculate the standard deviation
//     return sqrt(standardDeviation / size);
// }

// int main() {
//     int i;
//     double data[10];

//     printf("Enter 10 elements: ");
//     for (i = 0; i < 10; i++) {
//         if (scanf("%lf", &data[i]) != 1) {
//             printf("Invalid input. Exiting...\n");
//             return 1;
//         }
//     }

//     printf("\nStandard Deviation = %.6f", calculateSD(data, 10));
//     return 0;
// }

//=================================================
// Program to Add Two Matrices
// #include <stdio.h>
// int main()
// {
//   int r, c, a[100][100], b[100][100], sum[100][100], i, j;

//   printf("Enter the number of rows (between 1 and 100): ");
//   scanf("%d", &r);
//   printf("Enter the number of columns (between 1 and 10): ");
//   scanf("%d", &c);

//   printf("\nEnter elements of 1st matrix:\n");
//   for (i = 0; i < r; i++)
//   {
//     for (j = 0; j < c; j++)
//     {
//       printf("Enter element a%d%d: ", i + 1, j + 1);
//       scanf("%d", &a[i][j]);
//     }
//   }

//   printf("Enter elements of 2nd matrix: \n");
//   for (i = 0; i < r; i++)
//   {
//     for (j = 0; j < c; j++)
//     {
//       printf("Enter element b2%d%d: ", i + 1, j + 1);
//       scanf("%d", &b[i][j]);
//     }
//   }

//   // adding two matrices
//   for (j = 0; i < r; i++)
//   {
//     for (j = 0; j < c; j++)
//     {
//       sum[i][j] = a[i][j] + b[i][j];
//     }
//   }

//   // printing the result
//   printf("\nSum of two matrices: \n");
//   for (i = 0; i < r; i++)
//   {
//     for (j = 0; j < c; j++)
//     {
//       printf("%d ", sum[i][j]);
//       if (j == c - 1)
//       {
//         printf("\n\n");
//       }
//     }
//   }
//   return 0;
// }

//=======================================================================
// Multiply Matices by passing it to a function

// #include<stdio.h>

// // fucntion to get mateix elements entered by the user
// void getMatrixElements(int matrix[][10], int row, int column){
//   int i, j;
//   printf("\nEnter elements: \n");

//   for(i = 0; i < row; i++){
//     for(j = 0; j < column; j++){
//       printf("Enter element a%d%d: ", i + 1, j + 1);
//       scanf("%d", &matrix[i][j]);
//     }
//   }
// }

// // function to multiply two matrices
// void multiplyMatrices(int first[][10], int second[][10], int result[][10], int r1, int c1, int r2, int c2){
//   int i, j, k;

//   // initializing elements of matrix
//   for(i = 0; i < r1; i++){
//     for(j = 0; j < c2; j++){
//       result[i][j] = 0;
//     }
//   }

//   // Multiplying first and second mateices and stoing it in result
//   for(i = 0; i < r1; i++){
//     for(j = 0; j < r2; j++){
//       for(k = 0; k < c1; k++){
//         result[i][j] += first[i][k] * second[j][k];
//       }
//     }
//   }
// }

// // function to display the matrix
// void display(int result[][10], int row, int column){
//   int i, j;
//   printf("\nResultant Matrix:\n");

//   for(i = 0; i < row; i++){
//     for(j = 0; j < column; j++){
//       printf("%d ", result[i][j]);
//       if(j == column -1) printf("\n");
//     }
//   }
// }

// int main(){
//   int matrix1[10][10], matrix2[10][10], result[10][10], r1, c1, r2, c2;
//   printf("Enter rows and column for the matrix1: ");
//   scanf("%d %d", &r1, &c1);
//   printf("Enter rows and column for the matrix2: ");
//   scanf("%d %d", &r2, &c2);

//   // Taking input until 
//   // matrix1 columns is not equal to matrix2
//   while(c1 != r2){
//     printf("Matrix1 columns is not equal to Matrix2 rows. Please enter again. \n");
//     printf("Enter rows and columns for the matrix1: ");
//     scanf("%d %d", &r1, &c1);
//     printf("Enter rows and columns for the second matrix: ");
//     scanf("%d %d", &r2, &c2);
//   }

//   // get elements of the first matrix
//   getMatrixElements(matrix1, r1, c1);

//   // get elements of the second matrix
//   getMatrixElements(matrix2, r2, c2);

//   // multiply two mateices
//   multiplyMatrices(matrix1, matrix2, result, r1, c1, r2, c2);

//   // display the result
//   display(result, r1, c2);

//   return 0;
// }


// //=======================================================
// // Program to find the Transpose of a Matrix
// #include<stdio.h>
// int main(){
//   int a[10][10], transpose[10][10], r, c, i, j;
//   printf("Enter the number of rows and columns of the matrix: ");
//   scanf("%d %d", &r, &c);

//   // Assigning elements to the matrix 
//   printf("\nEnter matrix elements:\n");
//   for(i = 0; i < r; i++){
//     for(j = 0; j < c; j++){
//       printf("Enter element a%d%d: ", i+1, j+1);
//       scanf("%d", &a[i][j]);
//     }
//   }

//   // Displaying the matrix a[][]
//   printf("\nEnter matrix: \n");
//   for(i = 0; i < r; i++){
//     for(j = 0; j < c; j++){
//       printf("%d\t", a[i][j]);
//       if(j == c-1) printf("\n");
//     }
//   }

//   // Finding the transpose of matrix a 
//   for(i = 0; i < r; i++){
//     for(j = 0; j < c; j++){
//       transpose[j][i] = a[i][j];
//     }
//   }

//   // Displaying the transpose of matrix a 
//   printf("\nTranspose of the matrix:\n");
//   for(i = 0; i < c; i++){
//     for(j = 0; j < r; j++){
//       printf("%d ", transpose[i][j]);
//       if(j == r-1) printf("\n");
//     }
//   }

//   return 0;
// }


// ==================================================
// Access array elements using pointers
// #include<stdio.h>

// int main(){
//   int data[5];

//   printf("============= Enter 5 elements =============\n");  // Specify the number of elements to enter
//   for(int i = 0; i < 5; i++){
//     printf("Enter element %d: ", i + 1);  // Prompt for each element
//     scanf("%d", data + i);
//   }

//   printf("You entered: \n");
//   for(int i = 0; i < 5; i++){
//     printf("%d ", *(data + i));
//   }
//   printf("\n");

//   return 0;  
// }


//===================================================
// Program to Swap element using call by Reference

// #include<stdio.h>
// void cyclicSwap(int *a, int *b, int *c);
// int main(){
//   int a, b, c;

//   printf("Enter a, b and c respectvely: ");
//   scanf("%d %d %d", &a, &b, &c);

//   printf("Value before swapping:\n");
//   printf("a = %d\nb = %d\nc = %d\n", a, b, c);

//   cyclicSwap(&a, &b, &c);

//   printf("Value after swapping:\n");
//   printf("a = %d\nb = %d\nc = %d", a, b, c);
//   return 0;
// }

// void cyclicSwap(int *n1, int *n2, int *n3){
//   int temp;
//   // swapping in cyclic order
//   // temp = *n1;
//   // *n1 = *n2;
//   // *n2 = *n3;
//   // *n3 = temp;

// //swapping clock wish direction 
//   temp = *n2;
//   *n2 = *n1;
//   *n1 = *n3;
//   *n3 = temp;
// }

//=========================================================
// Program to find the maximum and minimum element in an array
// #include<stdio.h>
// int main(){
//   int a[10], i, max, min;
//   printf("Enter 10 elements in an array:\n");
//   for(i=0; i<10; i++)
//     scanf("%d", &a[i]);
//   max = a[0];
//   min = a[0];
//   for(i=1; i<10; i++){
//     if(a[i] > max)
//       max = a[i];
//     if(a[i] < min)
//       min = a[i];
//   }
//   printf("Maximum element in the array is: %d\n", max);
//   printf("Minimum element in the array is: %d\n", min);
//   return 0;
// }


//=========================================================
// Find the largest element
// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//   int num;
//   double *data;

//   // Get the total number of elements from the user
//   printf("Enter the total number of elements: ");
//   scanf("%d", &num);

//   // Allcate memory for num elements
//   data = (double *)malloc(num * sizeof(double));
//   if(data == NULL){
//     printf("Error!!! Memorynot allocated.");
//     exit(0);
//   }

//   // store numbers entered by the user
//   for(int i = 0; i < num; i++){
//     printf("Enter element %d: ", i + 1);
//     scanf("%lf", data + i);
//   }

//   // find the largest number
//   double max = data[0]; // Initialize max with the first element
//   for(int i = 1; i < num; i++){
//     if(data[i] > max) max = data[i];
//   }

//   printf("Largest number = %.2lf\n", max);
//   free(data); // Deallocate the memory
//   return 0;
// }


//=====================================================
// Example 1: malloc() and free()
// Program to calulate the sum of n numbers entered by the user
// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//   int num, i, *ptr, sum = 0;
//   printf("Enter the total number of elements: ");
//   scanf("%d", &num);
//   ptr = (int *)malloc(num * sizeof(int));
//   if(ptr == NULL){
//     printf("Errr ! memory not allocated.");
//     exit(0);
//   }

//   printf("Enter elements: ");
//   for(i = 0; i < num; i++){
//     scanf("%d", ptr + i);
//     sum += *(ptr + i);
//   }
//   printf("Sum = %d\n", sum);
//   free(ptr);
//   return 0;
// }


// ===========================================================
// Example 2: calloc() and free()
// program to calclulate the sum of n numbers entered by the user 
#include<stdio.h>
#include<stdlib.h>
int main(){
  int n, i, *ptr, sum = 0;
  printf("Enter number of elements: ");
  scanf("%d", &n);
  ptr = (int*) calloc(n, sizeof(int));

  if(ptr == NULL){
    printf("Error! Memory not allocated.");
    exit(0);
  }

  printf("Enter elements: ");
  for(i = 0; i < n; i++){
    scanf("%d", ptr + i);
    sum += *(ptr + i);
  }

  printf("Sum = %d", sum);
  free(ptr);
  return 0;
}