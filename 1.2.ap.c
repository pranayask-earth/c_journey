#include <stdio.h> /*calculating celsius and fahrenheit*/
int main()
{
int celsius, fahrenheit;
int lower, upper, step;

int lower = 0; /*lower limit of celsius scale*/
int upper = 300; /*upper limit of celsius scale*/
int step = 20; /*step size*/

fahrenheit = lower;
while (fahrenheit <= upper)
{
celsius = 5*(fahrenheit - 32)/9;
printf ("%d\t%d\n" , celsius, fahrenheit);
fahrenheit = fahrenheit + step;
}
}

