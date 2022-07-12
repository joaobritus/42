/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaragao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 17:00:45 by jaragao-          #+#    #+#             */
/*   Updated: 2022/07/12 18:21:07 by jaragao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	y;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		y = 0;
		while (to_find[y] != '\0')
		{
			if (str[i + y] == to_find[y])
			{
				y++;
			}
			else
				break;/*nunca vai chegar ao fim do loop enquanto tiver o break*/
		}
		if (to_find[y] == '\0')
		{
			return (str + i); //pointer a partir do index i
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	char	a[] = "anderanolomanatanoa";
	char	b[] = "ana";

	printf("%s", ft_strstr(a, b));
}
