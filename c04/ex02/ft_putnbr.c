/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaragao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 15:08:14 by jaragao-          #+#    #+#             */
/*   Updated: 2022/07/18 16:03:35 by jaragao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	num;
	int	resto;

	if (-2147483648 <= nb && nb <= 2147483647)
	{
		if (nb == -2147483648)
			write(1, "-2147483648", 11);
		else if (nb < 0)
		{
			ft_putchar('-');
			ft_putnbr(-nb);
		}
		else
		{
			num = nb / 10;
			resto = nb % 10;
			if (num != 0)
			{
				ft_putnbr(num);
			}
			ft_putchar(resto + '0');
		}
	}
}

/*int	main(void)
{
	ft_putnbr(6666666);
	ft_putnbr(-2147483648);
	ft_putnbr(2147483647);
	ft_putnbr(-55);
	ft_putnbr(5);
	ft_putnbr(0);
}*/
