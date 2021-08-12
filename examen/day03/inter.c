/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoolon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 19:32:09 by hoolon            #+#    #+#             */
/*   Updated: 2021/08/12 18:38:39 by hoolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	scan(char *str, char c, int nb)
{
	while (nb >= 0)
	{
		if (str[nb] == c)
			return (0);
		nb--;
	}
	return (1);
}

void	inter(char *str1, char *str2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str1[i])
	{
		while (str2[j])
		{
			if (str1[i] == str2[j])
			{
				if (scan(str1, str1[i], i - 1))
					write(1, &str1[i], 1);
				break ;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
