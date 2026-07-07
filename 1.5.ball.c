#include <stdio.h>
int main()
{
printf("type a character and hit enter (or press ctrl+d/ctrl+z for EOF):\n");
printf("the value of (getchar() != EOF) is : %d\n" , getchar() != EOF);
}
