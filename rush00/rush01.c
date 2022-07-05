/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaragao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 20:35:40 by jaragao-          #+#    #+#             */
/*   Updated: 2022/07/03 20:35:52 by jaragao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

void	rush(int x, int y)
{
	int	li;
	int	col;

	li = 0;
	while (++li <= y && (x > 0 && y > 0))
	{
		col = 0;
		while (++col <= x)
		{
			if ((col == 1 || col == x) && (li == 1 || li == y))
			{
				if (col == 1 && li == 1)
					ft_putchar('/');
				else if ((col == 1 && li == y) || (col == x && li == 1))
					ft_putchar('\\');
				else if (col == x && li == y)
					ft_putchar('/');
			}
			else if (col == 1 || col == x || li == 1 || li == y)
				ft_putchar('*');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}		