/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaragao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 19:43:12 by jaragao-          #+#    #+#             */
/*   Updated: 2022/07/12 15:18:13 by jaragao-         ###   ########.fr       */
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
	while (s1[i] == s2[i] && i < n - 1)
	{
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
