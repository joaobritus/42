/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaragao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 08:16:49 by jaragao-          #+#    #+#             */
/*   Updated: 2022/07/18 19:30:59 by jaragao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb > 0)
	{
		result = nb * ft_recursive_factorial(nb - 1);
		nb = nb - 1;
	}
	return (result);
}

/*int	main(void)
{
	printf("%d", ft_recursive_factorial(4));
}*/
