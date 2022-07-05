/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaragao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 18:05:21 by jaragao-          #+#    #+#             */
/*   Updated: 2022/07/05 18:44:35 by jaragao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	zas;

	zas = 'a';
	while (zas <= 'z')
	{
		write(1, &zas, 1);
		zas++;
	}
}

int	main(void)
{
	ft_print_alphabet();
}
