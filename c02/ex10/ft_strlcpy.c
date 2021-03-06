/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaragao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 18:46:08 by jaragao-          #+#    #+#             */
/*   Updated: 2022/07/13 11:22:21 by jaragao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	y;

	y = 0;
	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	if (size == 0)
		return (i);
	while (y < size -1)
	{
		dest[y] = src[y];
		y++;
	}
	dest[y] = '\0';
	return (i);
}

/*int	main(void)
{
	char	a[] = "banana";
	char	b[] = "maca";
	unsigned int	x = 3;

	printf("%d", ft_strlcpy(a, b, x));
}*/
