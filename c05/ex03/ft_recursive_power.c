/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaragao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 08:49:53 by jaragao-          #+#    #+#             */
/*   Updated: 2022/07/16 08:58:58 by jaragao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int	nb, int	power)
{
	int result;

	result = nb;
	if (power > 1)
	{
		return(nb * ft_recursive_power(nb, (power - 1)));
	}
	if (power == 0)
	{
		return (1);
	}
	if (power < 0)
	{
		return (0);
	}
	return (result);
}

int	main(void)
{
	printf("%d", ft_recursive_power(3, 3));
}
