/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaragao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 09:47:01 by jaragao-          #+#    #+#             */
/*   Updated: 2022/07/06 10:10:59 by jaragao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	divisao;
	int	resto;

	divisao = a / b; //divisao
	resto = a % b;
	*div = divisao;
	*mod = resto;
}
