/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:18:02 by tsurma            #+#    #+#             */
/*   Updated: 2024/05/18 19:24:10 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Finds the last occurrence of char c in the given string. This can be '\0'*/
char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*r;

	i = 0;
	r = NULL;
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
