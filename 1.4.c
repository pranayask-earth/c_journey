#include <stdio.h> /*calculating celsius and fahrenheit values*/
#define LOWER 0
#define UPPER 300
#define STEP 20
int main()
{
float fahr;
printf ("\nCELSIUS-FAHRENHEIT TABLE\n\n");
for (fahr=LOWER; fahr<=UPPER; fahr=fahr+STEP)
{
printf("%6.1f\t%6.1f\n", fahr, 5*(fahr-32)/9);
}
}
