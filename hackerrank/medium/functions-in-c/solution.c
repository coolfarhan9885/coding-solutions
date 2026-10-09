/*
Problem: Functions in C
*/


//Imports
#include <stdio.h>

//Defined function to get max value out of 4 integers
int max_of_four(int a, int b, int c, int d)
{
 
 //checking arguments for max value using if statements
 int max = a;
 if (b > max)
  max = b;
 if (c > max)
  max = c;
 if (d > max)
  max = d;
  
 //Function return backs the max value 
 return max;
}

//Main fuction
int main()
{
 //Input Variables
 int a, b, c, d;
 
 //Taking user inputs and priniting output
 scanf("%d %d %d %d", &a, &b, &c, &d);
 printf("%d\n", max_of_four(a, b, c, d));
 
 
 return 0;
}
