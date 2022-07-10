/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaragao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 09:44:11 by jaragao-          #+#    #+#             */
/*   Updated: 2022/07/10 12:08:54 by jaragao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 127)	
			return(0);
		else
			i++;
	}
	return(1);
}

int	main(void)
{
	char	a[] = "casou!@$%^&";
	char	b[] = "65dgtdgf\t";
	char	c[] = "";
	char	d[] = "\v";

	printf("%d\n", ft_str_is_printable(a));
	printf("%d\n", ft_str_is_printable(b));
	printf("%d\n", ft_str_is_printable(c));
	printf("%d\n", ft_str_is_printable(d));
}
