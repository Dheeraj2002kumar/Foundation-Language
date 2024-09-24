// C program to store tempreture of two cities of a week and display it.

#include<stdio.h>

const int CITY = 2;
const int WEEK = 7;

int main(){
  int temperature[CITY][WEEK];
  int i, j;

  // Using nested loop to store values in a 2d array
  for(i = 0; i < CITY; i++){
    for(j = 0; j < WEEK; j++){
      printf("City %d, Day %d ", i+1, j+1);
      scanf("%d", &temperature[i][j]);
    }
    printf("\n");
  }
  printf("\nDisplaying values: \n\n");

  // Using nested toop to display values of a 2d array
  for(i = 0; i < CITY; i++){
    for(j = 0; j<WEEK; j++){
      printf("City %d, Day %d = %d\n", i+1, j+1, temperature[i][j]);
    }
    printf("\n");
  }
  return 0;
}