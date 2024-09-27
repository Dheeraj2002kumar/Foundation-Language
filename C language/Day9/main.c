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

#include<math.h>
#include <math.h>
#include <stdio.h>

/**
 * Calculates the population standard deviation of a given dataset.
 *
 * @param data The input dataset.
 * @param size The size of the input dataset.
 * @return The population standard deviation.
 */
double calculateSD(double data[], int size) {
    double sumOfValues = 0.0;
    double mean;
    double standardDeviation = 0.0;
    int i;

    // Calculate the sum of values
    for (i = 0; i < size; i++) {
        sumOfValues += data[i];
    }

    // Calculate the mean
    mean = sumOfValues / size;

    // Calculate the sum of squared differences
    for (i = 0; i < size; i++) {
        standardDeviation += (data[i] - mean) * (data[i] - mean);
    }

    // Calculate the standard deviation
    return sqrt(standardDeviation / size);
}

int main() {
    int i;
    double data[10];

    printf("Enter 10 elements: ");
    for (i = 0; i < 10; i++) {
        if (scanf("%lf", &data[i]) != 1) {
            printf("Invalid input. Exiting...\n");
            return 1;
        }
    }

    printf("\nStandard Deviation = %.6f", calculateSD(data, 10));
    return 0;
}