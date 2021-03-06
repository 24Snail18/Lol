/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoolon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 19:05:30 by hoolon            #+#    #+#             */
/*   Updated: 2021/08/09 19:55:07 by hoolon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char const	*str)
{
	int	res;
	int	i;
	int	p;

	res = 0;
	i = 0;
	p = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| str [i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			p++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	if (p % 2 == 1)
		return (-res);
	return (res);
}
