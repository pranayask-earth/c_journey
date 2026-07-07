#include <stdio.h>
int main()
{
int c;
printf("\ntype a character and hit enter (or press ctrl+d)\n");
while ((c = (getchar() != EOF)) == 1)
{
printf("the value is: %d\n", c);
}
printf("the value is: %d\n" , c);
} 
