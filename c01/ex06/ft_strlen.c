/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaragao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 12:45:53 by jaragao-          #+#    #+#             */
/*   Updated: 2022/07/09 12:32:43 by jaragao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	return (i);
}

int main(void)
{
	char zas[] = "ananas";
	ft_strlen(zas);
	printf("%s\n", zas);
	printf("%d", ft_strlen(zas));
}
