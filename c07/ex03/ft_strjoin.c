/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaragao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 16:02:31 by jaragao-          #+#    #+#             */
/*   Updated: 2022/07/20 18:37:48 by jaragao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_length(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}






char	*ft_strjoin(int size, char **strs, char *sep)
{
	int i;
	int y;
	int z;
	int sepl;
	char *final;
	
	///////////////////////bora contar
	while (size <= 1)
	{
		str_length(strs[i]);
		size--;
		i++;
	}
	str_length(sep);


	i = 0;
	while (strs[i] != '\0')
	{
		str_length(strs[i]);
		i++;
	}


	/////////////
	i = 0;
	z = 0;
	while (strs[i][y] != '\0')
	{
		y = 0;
		while (strs[i][y] != '\0')
		{
			final[z] = strs[i][y];
			z++;
			y++;
		}
		sepl = 0;
		while (sep[sepl] != '\0')
		{
			final[z] = sep[sepl];
			sepl++;
			z++;
		}
		i++;
	}
