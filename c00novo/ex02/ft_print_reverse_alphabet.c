/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaragao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 18:38:37 by jaragao-          #+#    #+#             */
/*   Updated: 2022/07/05 18:47:18 by jaragao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	zas;

	zas = 'z';
	while (zas >= 'a')
	{
		write(1, &zas, 1);
		zas--;
	}
}

int	main(void)
{
	ft_print_reverse_alphabet();
}
