/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 11:37:41 by tsurma            #+#    #+#             */
/*   Updated: 2024/05/18 19:27:31 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Allocates (with malloc(3)) and returns a new string, which is the result of
the concatenation of ’s1’ and ’s2’.*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	int		l;
	char	*dst;

	l = ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1;
	dst = malloc(l * sizeof(char));
	if (!dst)
		return (NULL);
	ft_strlcpy(dst, (char *)s1, l);
	ft_strlcat(dst, (char *)s2, l);
	return (dst);
}
