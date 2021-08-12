/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoolon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 19:35:51 by hoolon            #+#    #+#             */
/*   Updated: 2021/08/12 14:51:54 by hoolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_last_word(char *str)
{
	char	*c;
	int		i;

	i = 0;
	c = (void *)0;
	while (*str != '\0')
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
			i = 1;
		else
		{
			if (i == 1)
			{
				c = str;
				i = 0;
			}
		}
		str++;
	}
	if (c != (void *)0)
	{
		while (*c != '\0' && *c != ' ' && *c != '\t' && *c != '\n')
		{
			write (1, c, 1);
			c++;
		}
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_last_word(argv[1]);
	write (1, "\n", 1);
	return (0);
}
