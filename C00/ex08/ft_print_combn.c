#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


void	ft_print_combn(int n)
{



	if (n > 0 && n < 10)
	{
		while (1 <= n)
		{

