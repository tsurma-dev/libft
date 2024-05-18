/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:10:03 by tsurma            #+#    #+#             */
/*   Updated: 2024/05/18 19:08:54 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Finds the first occurence of a byte, given as an int value in the memory 
passed by the pointer. Returns a pointer to the byte or NULL if it isn't found.
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*j;

	i = 0;
	j = (unsigned char *)s;
	while (i < n)
	{
		if (j[i] == (unsigned char)c)
			return ((void *)&j[i]);
		++i;
	}
	return (NULL);
}
