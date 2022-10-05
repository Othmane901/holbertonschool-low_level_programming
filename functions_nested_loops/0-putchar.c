#include "main.h"
/**
* main - prints "putchar"
*
* Return: 0
*/

int main(void)
{
chat*message = "_putchar";
int i = 0;
do{
_ptchat(message[i++]);
} while (message[i] != '\0');
_putchar('\n');
return (0);
}
