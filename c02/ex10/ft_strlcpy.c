/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaragao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 18:46:08 by jaragao-          #+#    #+#             */
/*   Updated: 2022/07/11 10:55:55 by jaragao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned	int i;
	unsigned	int y;

	y = 0;
	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	if (size == 0)
		return(i);
	while (y < size -1)i
	{
		dest[y] = src[y];
		y++;
	}
	dest[y] = '\0';
	return(i);
}
