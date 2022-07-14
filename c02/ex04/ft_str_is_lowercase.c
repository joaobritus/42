/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaragao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 09:31:37 by jaragao-          #+#    #+#             */
/*   Updated: 2022/07/13 10:13:57 by jaragao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		else
			i++;
	}
	return (1);
}

/*int	main(void)
{
	char a[] = "abcde";
	char b[] = "abcdE";
	char c[] = "";
	char d[] = "abc123";

	printf("%d", ft_str_is_lowercase(a));
	printf("%d", ft_str_is_lowercase(b));
	printf("%d", ft_str_is_lowercase(c));
	printf("%d", ft_str_is_lowercase(d));
}*/
