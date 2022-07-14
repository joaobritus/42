/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaragao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:33:56 by jaragao-          #+#    #+#             */
/*   Updated: 2022/07/14 09:37:21 by jaragao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	convertohex(int x)
{
	char	*base;

	base = "0123456789abcdef";
	if (x / 16 > 0)
	{
		convertohex(x / 16);
	}
	write(1, &base[x % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	num;
	int	resto;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 31 || str[i] == 127)
		{
			write(1, "\\", 1);
			if (str[i] <= 15)
				write(1, "0", 1);
			convertohex(str[i]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

/*int	main(void)
{
	char a[] = "\nab12%$&^*cd\f";
ft_putstr_non_printable(a);
}*/
