/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:18:02 by tsurma            #+#    #+#             */
/*   Updated: 2023/11/27 17:47:25 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*r;

	i = 0;
	r = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			r = (char *)s + i;
		i++;
	}
	if (s[i] == (char)c)
		r = (char *)s + i;
	return (r);
}

