/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaragao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 19:55:28 by jaragao-          #+#    #+#             */
/*   Updated: 2022/07/12 15:53:20 by jaragao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <string.h>
#include <stdio.h>*/

char	*ft_strcat(char *dest, char *src)
{
	int	srcl;
	int	destl;

	destl = 0;
	while (dest[destl] != '\0')
	{
		destl++;
	}
	srcl = 0;
	while (src[srcl] != '\0')
	{
		dest[destl] = src[srcl];
		destl++;
		srcl++;
	}
	dest[destl] = '\0';
	return (dest);
}

/*int	main(void)
{
	char a[] = "maca";
	char b[] = "banana";
	printf("%s", ft_strcat(a, b));
}*/
