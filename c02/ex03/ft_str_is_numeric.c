/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaragao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 19:40:36 by jaragao-          #+#    #+#             */
/*   Updated: 2022/07/18 22:05:04 by jaragao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		else
			i++;
	}
	return (1);
}

/*int	main(void)
{
	char 	a[] = "1234";
	char 	b[] = "1234a";
	char	c[] = "";
	printf("%d", ft_str_is_numeric(a));
	printf("%d", ft_str_is_numeric(b));
	printf("%d", ft_str_is_numeric(c));
