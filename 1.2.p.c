#include <stdio.h> /*calculating celsius and fahrenheit*/
int main()
{
int celsius, fahrenheit;
int lower, upper, step;

lower = 0; /*lower limit of celsius scale*/
upper = 300; /*upper limit of celsius scale*/
step = 20; /*step size*/

fahrenheit = lower;
while (fahrenheit <= upper)
{
celsius = (5/9)(fahrenheit - 32);
printf ("%d\t%d\n" , fahrenheit, celsius);
fahrenheit = fahrenheit + step;
}
}
