/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaragao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 18:36:06 by jaragao-          #+#    #+#             */
/*   Updated: 2022/07/16 18:11:02 by jaragao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int nb)
{
	unsigned int	srcl;
	unsigned int	destl;

	destl = 0;
	while (dest[destl])
	{
		destl++;
	}
	srcl = 0;
	while (src[srcl] != '\0' && srcl < nb)
	{
		dest[destl] = src[srcl];
		destl++;
		srcl++;
	}
	dest[destl] = '\0';
	return (destl);
}

int   main(void)
{
        char a[] = "maca";
        char b[] = "banana";
                unsigned int    n = 3;
        printf("%d", ft_strlcat(a, b, n));
}
