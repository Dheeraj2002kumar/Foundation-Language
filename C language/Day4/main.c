// C program to check whether the given number is the perfect number
#include<stdio.h>

int main(){

  // declare and initialize the  variables
  int num, rem, sum = 0, i;

  // take an input from the user
  printf("Enter a number: ");
  scanf("%d", &num);

  // find all divisors and then 
  for(i = 1; i < num; i++){
    rem = num % i;
    if(rem == 0){
      sum = sum + i;
    }
  }

  if(sum == num){
    printf("%d is a perfect number", num);
  } else {
    printf("%d is not a perfect number",num);
  }

  return 0;
}