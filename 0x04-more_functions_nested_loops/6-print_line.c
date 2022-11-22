#include "main.h"

/**
 * print_line - draws straight line
 * @n: number of times the character _ should be printed
 *
 * Return: n
 */

void print_line(int n)
{
    int line;
    
    if (n <= 0)
    {
        _putchar('\n');
    }
    else
    {
        line = 0;
        while(line < n)
        {
            _putchar('_');
            line++;
        }
        _putchar('\n');
    }
}
