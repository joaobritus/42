/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaragao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 11:29:00 by jaragao-          #+#    #+#             */
/*   Updated: 2022/07/14 15:34:05 by jaragao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	z;

	i = argc - 1;
	while (i > 0)
	{
		z = 0;
		while (argv[i][z] != '\0')
		{
			write(1, &argv[i][z], 1);
			z++;
		}
		write(1, "\n", 1);
		i--;
	}
}
