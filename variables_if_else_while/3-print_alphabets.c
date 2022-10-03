#include <stdio.h>
/**
 * main - Prints alphabet.
(*
* Return: 0
*/
int main(void)
{
char c = 'a';
char d = 'A';

while (c <= 'z')
{
putchar(c);
c++;
}
while (d <= 'Z')
{
putchar(d);
d++;
}
putchar('\n');
return (0);
}
