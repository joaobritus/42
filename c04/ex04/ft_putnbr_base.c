/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaragao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 19:23:41 by jaragao-          #+#    #+#             */
/*   Updated: 2022/07/18 15:58:29 by jaragao-         ###   ########.fr       */
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
	int		i;
	long	nb;

	nb = nbr;
	if (isitvalid(base) == 0)
		return ;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}	
	i = 0;
	while (base[i] != '\0')
	{
		i++;
	}
	if (nb / i > 0)
	{
		ft_putnbr_base((nb / i), base);
	}
	write(1, &base[nb % i], 1);
}

/*int	main(void)
{
	long a = -2147483648;
	char x[] = "01";

	ft_putnbr_base(a, x);
}*/
