/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaragao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 14:33:30 by jaragao-          #+#    #+#             */
/*   Updated: 2022/07/19 17:43:16 by jaragao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	a;
	int	counter;

	a = 1;
	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	counter = 0;
	if (nb > 1)
	{
		while (nb > 0)
		{
			nb = nb - a;
			a += 2;
			counter++;
		}
		if (nb == 0)
		{
			return (counter);
		}
		return (0);
	}
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_sqrt(16));
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", ft_sqrt(0));
	printf("%d", ft_sqrt(2147483647));
}*/
