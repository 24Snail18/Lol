/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoolon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 17:06:47 by hoolon            #+#    #+#             */
/*   Updated: 2021/08/09 19:03:08 by hoolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	char	letter;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			letter = argv[1][i];
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Y')
				letter++;
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'y')
				letter++;
			else if (argv [1][i] == 'z' || argv[1][i] == 'Z')
				letter -= 25;
			write (1, &letter, 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
