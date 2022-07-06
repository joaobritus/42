/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaragao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 09:14:39 by jaragao-          #+#    #+#             */
/*   Updated: 2022/07/06 15:11:36 by jaragao-         ###   ########.fr       */
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
				if ((col == 1 && li == 1) || (col == x && li == y))
					ft_putchar('A');
				else
					ft_putchar('C');
			}
			else if (col == 1 || col == x || li == 1 || li == y)
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
