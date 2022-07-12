/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaragao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:33:56 by jaragao-          #+#    #+#             */
/*   Updated: 2022/07/11 18:21:15 by jaragao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	convertohex(char a)
{
	char num;
	char resto;
	
		num = a / 16;
		resto = a % 16;
	  if (num != 0)
	  {	  
		convertohex(num);
	  }
	  if (resto > 9)
		{
			if (resto == 10)
				write(1, "a", 1);
			else if (resto == 11)
				write(1, "b", 1);
			else if (resto == 12)
				write(1, "c", 1);
			else if (resto == 13)
				write(1, "d", 1);
			else if (resto == 14)
				write(1, "e", 1);
			else if (resto == 15)
				write(1, "f", 1);
		}
		else
			write(1, &resto, 1);
}
	  
		 


void	ft_putstr_non_printable(char *str)
{
	int i;
	int num;
	int resto;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 31 || str[i] == 127)
		{
			write(1, "\\", 1);
			if (str[i] <= 15)
				write(1, "0", 1);
			convertohex(str[i]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

int	main(void)
{
	char a[] = "\nab12%$&^*cd\f";
ft_putstr_non_printable(a);
}
