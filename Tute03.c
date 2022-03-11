/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>//declaring hadder file
int main() {//declaration of main function

  int n;//terms 
  int i;//counter
  int count=0;

  //taking the User input
  printf("Enter the n Value You need ? : ");
  scanf("%d",&n);

//looping 
  for(i=1;i<=n;i++){
    count =count +i;
  }

// display output 
  printf("\nThe Sum of n Terms is : %d ",count);

  return 0;

  }
