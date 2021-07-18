/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int x,y;
  float av =0,sum=0;

  printf("enter first mark = ");
  scanf("%d",&x);

  printf("enter second marks = ");
  scanf("%d",&y);

  sum= x+y;
  av = sum/2;
  printf("average is = %.2f",av);
  
  return 0;
}

