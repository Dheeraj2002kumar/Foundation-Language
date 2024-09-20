// Example: User-defined function

#include <stdio.h>

int addNumbers(int a, int b);   // function prototype

int main(){
  int n1, n2, sum;
  printf("Enter first number: ");
  scanf("%d", &n1);

  printf("Enter second number: ");
  scanf("%d", &n2);

  sum = addNumbers(n1, n2);   // function call

  printf("Sum = %d", sum);
  return 0;
}

int addNumbers(int a, int b){     // function definition
  int result;
  result = a + b;
  return result;    // return statement
}