/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaragao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 11:37:54 by jaragao-          #+#    #+#             */
/*   Updated: 2022/07/14 11:47:29 by jaragao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(int argc, char **argv)
{
	int i;
	char	temp;

	i = 1;
	while (argv[i])
	{
		if (argv[i] > argv[i + 1])
		{
			temp = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = temp;
			i = 1;
		}
		i++;
	}

	i = 1;
	while (argv[i])
	{
		printf("%s\n", argv[i]);
		i++;
	}
}
