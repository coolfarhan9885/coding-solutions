/*
Problem: Sum and Difference of Two Numbers 
*/

//Imports
#include <stdio.h>

//main Class
int main()
{
  
//Variables Declartion
int a, b;
float x, y;

//Inputs
scanf("%d %d", &a, &b);
scanf("%f %f", &x, &y);

//Arithmatic operations & output
printf("%d %d\n", a + b, a - b);
printf("%.1f %.1f\n", x + y, x - y);

//Exit main class
return 0;
} 
