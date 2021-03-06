/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaragao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 19:20:27 by jaragao-          #+#    #+#             */
/*   Updated: 2022/07/16 18:00:20 by jaragao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <string.h>
#include <stdio.h>*/

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;
	unsigned char	a;
	unsigned char	b;

	i = 0;
	while (s1[i] != '\0')
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
	char zaza[] = "alfabeto";
	char zeze[] = "albabeto";

	printf("%d\n", ft_strcmp(zaza, zeze));

	printf("%d", strcmp(zaza, zeze));
}*/
