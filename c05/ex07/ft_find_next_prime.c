/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaragao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 08:20:41 by jaragao-          #+#    #+#             */
/*   Updated: 2022/07/17 20:45:39 by jaragao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int i;
	
	i = nb;
	if (nb <= 1)
		i++;
	if (nb == 2 || nb == 3)
	{
		return (i);
	}
	while (i <= 2147483647)
	{
		if (nb % 3 == 0)
			i += 2;
		if (nb % 2 == 0)
		{
			i++;
		}
		
					



#include <stdio.h>

int	main(void)
{
	printf("%d", ft_find_next_prime(3));
}
