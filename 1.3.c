#include <stdio.h> /*calculating celsius and fahrenheit values*/
int main()
{
float fahr;
printf("\ncelsius fahrenheit table\n\n");
for (fahr = 300;fahr >= 0;fahr = fahr - 20)
{
printf("%6.1f\t\t%6.1f\n", fahr, 5*(fahr-32)/9);
}
}
