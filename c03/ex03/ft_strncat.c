/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaragao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 16:20:07 by jaragao-          #+#    #+#             */
/*   Updated: 2022/07/12 16:42:13 by jaragao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
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
	return (dest);
}

/*int   main(void)
{
        char a[] = "maca";
        char b[] = "banana";
		unsigned int	n = 3;
        printf("%s", ft_strncat(a, b, n));
}*/
