//============================================================
// Example: Sum of natural Number using recursion

#include<stdio.h>

int sum(int n);

int main(){
  int number, result; 
  printf("Enter a positive integer: ");
  scanf("%d", &number);

  result = sum(number);

  printf("Sum = %d", result);
  return 0;
}

int sum(int n){
  if(n != 0){
    // sum() function call itself
    return n + sum(n-1);
  } else {
    return n;
  }
}