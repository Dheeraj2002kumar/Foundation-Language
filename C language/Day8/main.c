// Struct Example: 
// #include<stdio.h>

// struct StudentData{
//   int stu_id;
//   int stu_age;
// };

// int main(){
//   struct StudentData student;

//   student.stu_age = 30;
//   student.stu_id = 1234;

//   printf("\nStudent Id is: %d", student.stu_id);
//   printf("\nStudent age is: %d", student.stu_age);
//   return 0;
// }

//======================================================
// Store information of a student unsing structure

// #include<stdio.h>

// struct student
// {
//   char name[50];
//   int roll;
//   float marks;
// };

// int main(){
//   struct student s;

//   printf("\nEnter name: ");
//   fgets(s.name, sizeof(s.name), stdin);

//   printf("\nEnter roll number: ");
//   scanf("%d", &s.roll);

//   printf("\nEnter the marks: ");
//   scanf("%f", &s.marks);

//   printf("\n=========== Information ===============");
//   printf("\nName: %s", s.name);
//   printf("\nRoll No: %d", s.roll);
//   printf("\nMarks: %f", s.marks);

//   return 0;
// }



//======================================================
// Store information  of n students using structures
// #include <stdio.h>
// #include<string.h>

// // Define a structure for a student
// struct Student {
//     char name[50];
//     int rollNo;
//     float marks;
// };

// int main() {
//     // Array of structures to store information of 10 students
//     struct Student students[10];

//     // Input data for 10 students
//     for (int i = 0; i < 10; i++) {
//         printf("Enter details for student %d:\n", i + 1);

//         // Using fgets to take input for the name
//         printf("Enter name: ");
//         fgets(students[i].name, sizeof(students[i].name), stdin);

//         // Remove the newline character if present after fgets()
//         if (students[i].name[strlen(students[i].name) - 1] == '\n') {
//             students[i].name[strlen(students[i].name) - 1] = '\0';
//         }

//         // Input roll number and marks
//         printf("Enter roll number: ");
//         scanf("%d", &students[i].rollNo);

//         printf("Enter marks: ");
//         scanf("%f", &students[i].marks);

//         // Clear the input buffer (to discard the newline character left by scanf)
//         getchar();
        
//         printf("\n");
//     }

//     // Display the information of the 10 students
//     printf("Displaying information of students:\n");
//     for (int i = 0; i < 10; i++) {
//         printf("Student %d:\n", i + 1);
//         printf("Name: %s\n", students[i].name);
//         printf("Roll No: %d\n", students[i].rollNo);
//         printf("Marks: %.2f\n\n", students[i].marks);
//     }

//     return 0;
// }



//============================================
// C Pointers
// address in c

// #include<stdio.h>
// int main(){
//     int var = 5; 
//     printf("var: %d\n", var);

//     printf("address of var: %p", &var);
//     return 0;
// }


//===============================================
// changing value pointed by pointers

// #include<stdio.h>
// int main(){
//     int* pc, c;
//     c = 5;
//     pc = &c;
//     c = 1;

//     printf("%d\n", c); //1
//     printf("%d", *pc); //1  
//     // * hold value of the pointer
//     // & hold address of the pointer
//     return 0;
// }


// //=================================================
// // working of pointers
// #include<stdio.h>
// int main(){
//     int* pc, c;
//     c = 22;

//     printf("Address of c: %p\n", &c);
//     printf("Value of c: %d\n\n", c); // 22

//     pc = &c;

//     printf("Address of pointer pc: %pn", pc);
//     printf("Content of pointer pc: %d\n\n", *pc); // 22

//     c = 11;
//     printf("Address of pointer pc: %p\n", pc);
//     printf("Content of pointer pc: %d\n\n", *pc); // 11

//     *pc = 2;
//     printf("Address of c: %p\n", &c);
//     printf("Value of c: %d\n\n", c); // 2
//     return 0;
// }


//==========================================
// Here's an example of pointer syntax beginners often find confusing

// #include<stdio.h>
// int main(){
//     int c = 5;
//     int *p = &c;

//     // Why didn't we get an error when using int *p = &c; ?
//     // It's because 

//     // int *p = &c;
//     // is equivalent to 

//     // int *p;
//     // p = &c;
//     // In both cases, we are creating a pointer p (not *p) and assigning &c to it.

//     printf("%d", *p); // 5
//     return 0;
// }


// ==============================================
// Relationship between arrays and pointers

// #include<stdio.h>
// int main(){
//     int x[4];
//     int i;

//     for(i = 0; i < 4; i++){
//         printf("&x[%d] = %p\n", i, &x[i]);
//     }
//     printf("Address of array x: %p", x);
//     return 0;
// }


//============================================
// Example: Arrays and pointers
#include<stdio.h>
int main(){
    int x[5] = {1, 2, 3, 4, 5};
    int* ptr;

    // ptr is assigned the address of the third element
    ptr = &x[2];
    printf("*ptr = %d\n", *ptr); // 3
    printf("*(ptr+1) = %d \n", *(ptr + 1)); // 4
    printf("*(ptr - 1) = %d", *(ptr -1)); // 2
    return 0;
}

// when you run the program, the output will be:
// *ptr = 3
// *(ptr + 1) = 4
// *(ptr - 1) = 2
// In this example, &x[2], the address of the third element, is assigned to the ptr pointer.
// Hence, 3 was displayed when we printed *ptr.
// And, printing *(ptr + 1) gives us the fourth element. Similarly, printing *(ptr - 1) gives us  the second element.