/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaragao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 19:23:41 by jaragao-          #+#    #+#             */
/*   Updated: 2022/07/14 10:19:00 by jaragao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	isitvalid(char *base)
{
	int a;
	int b;

	a = 0;
	while (base[a] != '\0')
	{
		b = a + 1;
		while (base[a] != base[b])
		{
			b++;
		}
		if (base[a] == base[b] || base[a] == '+' || base[a] == '-')
			return (0);
		else
			a++;
	}
}



void	ft_putnbr_base(int	nbr, char	*base)
{
	isitvalid(base);
	
	if (nbr < 0)
	{
		write(1, "-", 1);
		ft_putnbr_base(-nbr, base);
	}
	
	int	i;

	if (nbr <= 7)
		write(1, "00", 2);
	else if (nbr <= 15)
		write(1, "0", 1);
	
	i = 0;
	while (base[i] != '\0')
	{
		i++;
	}
	if ((nbr / i) > 0)
	{
		ft_putnbr_base((nbr / i), base);
	}
	write(1, &base[nbr % i], 1);
}

int	main(void)
{
	int a = 123;
	char x[] = "abcdef";

	ft_putnbr_base(a, x);
}
