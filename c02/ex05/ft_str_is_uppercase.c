/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaragao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 09:38:04 by jaragao-          #+#    #+#             */
/*   Updated: 2022/07/13 10:15:05 by jaragao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		else
			i++;
	}
	return (1);
}

/*int	main(void)
{
	char a[] = "ABCDE";
	char b[] = "abcde";
	char c[] = "ABCDe";
	char d[] = "";

	printf("%d", ft_str_is_uppercase(a));
	printf("%d", ft_str_is_uppercase(b));
	printf("%d", ft_str_is_uppercase(c));
	printf("%d", ft_str_is_uppercase(d));
}*/
