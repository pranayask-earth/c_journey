#include <stdio.h> /*calculating celsius and fahrenheit*/
int main()
{
float celsius, fahrenheit;
int lower, upper, step;

printf ("\ncelsius and fahrenheit table\n\n");

lower = 0; /*lower limit of celsius scale*/
upper = 300; /*upper limit of celsius scale*/
step = 20; /*step size*/

fahrenheit = lower;
while (fahrenheit <= upper)
{
celsius = 5*(fahrenheit - 32)/9;
printf ("%6.2f\t\t%6.2f\n" , fahrenheit, celsius);
fahrenheit = fahrenheit + step;
}
}


