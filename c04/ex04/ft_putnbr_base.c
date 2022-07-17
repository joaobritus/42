/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaragao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 19:23:41 by jaragao-          #+#    #+#             */
/*   Updated: 2022/07/17 22:42:19 by jaragao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	isitvalid(char *base)
{
	int	a;
	int	b;

	a = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[a] != '\0')
	{
		b = a + 1;
		while (base[b] != '\0')
		{
			if (base[a] == base[b])
			   return (0);	
			b++;
		}
		if (base[a] == '+' || base[a] == '-')
			return (0);
		else
			a++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;

	if (isitvalid(base) == 0)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}	
	i = 0;
	while (base[i] != '\0')
	{
		i++;
	}
	if (nbr / i > 0)
	{
		ft_putnbr_base((nbr / i), base);
	}
	write(1, &base[nbr % i], 1);
}

int	main(void)
{
	int a = 10;
	char x[] = "abcdefg";

	ft_putnbr_base(a, x);
}
