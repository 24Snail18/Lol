/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoolon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 12:56:22 by hoolon            #+#    #+#             */
/*   Updated: 2021/08/09 17:19:40 by hoolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*s;
	int		i;

	if (argc < 2)
		write (1, "\n", 1);
	else
	{
		i = argc - 1;
		s = argv[i];
		while (*s != '\0')
		{
			write (1, s, 1);
			s++;
		}
		write (1, "\n", 1);
	}
	return (0);
}
