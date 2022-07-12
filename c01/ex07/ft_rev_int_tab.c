/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaragao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:33:21 by jaragao-          #+#    #+#             */
/*   Updated: 2022/07/12 12:16:17 by jaragao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	size = size - 1;
	while (i < size)
	{
	temp = tab[i];
	tab[i] = tab[size];
	tab[size] = temp;
	i++;
	size --;
	}
}

/*int	main(void)
{
	int tab[] = {1, 2, 3, 4, 5};

	ft_rev_int_tab(tab, 5);

	int i = 0;
	while (i < 5)
	{
		printf("%d", tab[i]);
		i++;
	}
}*/
