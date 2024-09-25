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
#include <stdio.h>
#include<string.h>

// Define a structure for a student
struct Student {
    char name[50];
    int rollNo;
    float marks;
};

int main() {
    // Array of structures to store information of 10 students
    struct Student students[10];

    // Input data for 10 students
    for (int i = 0; i < 10; i++) {
        printf("Enter details for student %d:\n", i + 1);

        // Using fgets to take input for the name
        printf("Enter name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);

        // Remove the newline character if present after fgets()
        if (students[i].name[strlen(students[i].name) - 1] == '\n') {
            students[i].name[strlen(students[i].name) - 1] = '\0';
        }

        // Input roll number and marks
        printf("Enter roll number: ");
        scanf("%d", &students[i].rollNo);

        printf("Enter marks: ");
        scanf("%f", &students[i].marks);

        // Clear the input buffer (to discard the newline character left by scanf)
        getchar();
        
        printf("\n");
    }

    // Display the information of the 10 students
    printf("Displaying information of students:\n");
    for (int i = 0; i < 10; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll No: %d\n", students[i].rollNo);
        printf("Marks: %.2f\n\n", students[i].marks);
    }

    return 0;
}
