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

#include<stdio.h>

struct student
{
  char name[50];
  int roll;
  float marks;
};

int main(){
  struct student s;

  printf("\nEnter name: ");
  fgets(s.name, sizeof(s.name), stdin);

  printf("\nEnter roll number: ");
  scanf("%d", &s.roll);

  printf("\nEnter the marks: ");
  scanf("%f", &s.marks);

  printf("\n=========== Information ===============");
  printf("\nName: %s", s.name);
  printf("\nRoll No: %d", s.roll);
  printf("\nMarks: %f", s.marks);

  return 0;
}
