/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaragao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 19:43:12 by jaragao-          #+#    #+#             */
/*   Updated: 2022/07/16 18:09:20 by jaragao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <string.h>
#include <stdio.h>*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	a;
	unsigned char	b;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (i < n -1 && s1[i] != '\0' && s2[i] != '\0')
	{
		a = s1[i];
		b = s2[i];
		if (a != b)
		{
			return (a - b);
		}
		i++;
	}
	a = s1[i];
	b = s2[i];
	return (a - b);
}

/*int	main(void)
{
	char	x[] = "rabanete";
	char	y[] = "ramanete";
	unsigned int	n = 4;

	printf("%d\n", ft_strncmp(x, y, n));
	printf("%d", strncmp(x, y, n));
}*/
