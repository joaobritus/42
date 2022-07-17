/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaragao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 11:09:27 by jaragao-          #+#    #+#             */
/*   Updated: 2022/07/17 18:40:33 by jaragao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
			i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (str[0] >= 97 && str[0] <= 122)
			str[0] = str[0] - 32;
		else if (str[i] <= 47
			|| (str[i] >= 58 && str[i] <= 64)
			|| (str[i] >= 91 && str[i] <= 96) || str[i] >= 123)
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
				str[i + 1] = str[i + 1] - 32;
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char a[] = "ola o*MEu-nOME$E^bRI\tto,topas?123tudo.2bEm!";
	printf("%s", ft_strcapitalize(a));
}*/
