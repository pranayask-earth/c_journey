#include <stdio.h>
int main()
{
int c;
printf("type a character (or press ctrl+d for EOF):\n");
if (c = (getchar() != EOF) ==1)
{
printf("the value is: %d\n",c);
}
else
{
printf("the value doesn't exist ;)\n");
}
}

