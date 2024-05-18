/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:03:43 by tsurma            #+#    #+#             */
/*   Updated: 2024/05/18 19:17:30 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Allocates space for a copy of the provided string and creates a copy of it.*/
char	*ft_strdup(const char *s)
{
	size_t	sl;
	char	*dest;

	if (!s)
		return (NULL);
	sl = 0;
	sl = ft_strlen(s) + 1;
	dest = ft_calloc(sizeof(char), sl);
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, s, sl);
	return (dest);
}
