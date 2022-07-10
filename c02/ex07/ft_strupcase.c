/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaragao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 10:54:13 by jaragao-          #+#    #+#             */
/*   Updated: 2022/07/10 11:01:12 by jaragao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
		else
			i++;
	}
	return(str);
}

int	main(void)
{
	char a[] = "olagoodbye";
	char b[] = "olAgOodbYe";
	printf("%s", ft_strupcase(a));
	printf("%s", ft_strupcase(b));
}
