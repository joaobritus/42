/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaragao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 11:02:09 by jaragao-          #+#    #+#             */
/*   Updated: 2022/07/13 10:42:57 by jaragao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		else
			i++;
	}
	return (str);
}

/*int	main(void)
{
	char a[] = "era uma vez um pato";
	char b[] = "ERA UMA VEZ UM PATO";
	char c[] = "perauvatangerinaANANAS";
	char d[] = "PERAUVATANGERInaananas";
	
	printf("%s\n", ft_strlowcase(a));
	printf("%s\n", ft_strlowcase(b));
	printf("%s\n", ft_strlowcase(c));
	printf("%s\n", ft_strlowcase(d));
}*/
