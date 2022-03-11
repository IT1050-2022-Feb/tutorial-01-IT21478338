/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

//This program Shows the average of the two marks
#include <stdio.h>//declaring hadder file
int main (void)//declaration of main function
{
  //declaring and initializing variable's 
  int mark1,mark2,sum=0;
  float Avg=0;
//taking the User input of two numbers 
printf("Enter the mark1: ");
  scanf ("%d",&mark1);
printf("Enter the mark2: ");
  scanf ("%d",&mark2);

  //calculation
sum = mark1+mark2;
 Avg = (float)sum/2.0;

//display the output 
printf("Average marks is %.2f.", Avg);

  return 0;
  }
