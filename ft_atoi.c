/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:34:26 by tsurma            #+#    #+#             */
/*   Updated: 2024/05/18 19:35:04 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Converts the content of the given char array to an int if applicable*/
int	ft_atoi(const char *nptr)
{
	int	i;
	int	m;
	int	r;

	i = 0;
	r = 0;
	m = 0;
	while (nptr[i] && (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13)))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			m = 1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		r = (r * 10) + (nptr[i] - 48);
		i++;
	}
	if (m == 1)
		return (-r);
	return (r);
}
