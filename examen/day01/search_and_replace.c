/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoolon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 17:36:57 by hoolon            #+#    #+#             */
/*   Updated: 2021/08/09 10:31:35 by hoolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 4)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == argv[2][0])
				argv[1][i] = argv[3][0];
			if (argv[2][1] || argv[3][1])
				exit(write (1, "\n", 1));
			write (1, &argv[1][i], 1);
			i++;
		}
	}	
	write (1, "\n", 1);
	return (0);
}
