/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:20:12 by tsurma            #+#    #+#             */
/*   Updated: 2024/05/18 19:12:04 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Similar to memcpy but takes overlapping memory into account*/
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	if (!dest || !src)
		return (NULL);
	s = (const char *)src;
	d = (char *)dest;
	if (d < s)
		while (n--)
			*d++ = *s++;
	else
	{
		d = d + n;
		s = s + n;
		while (n--)
			*(--d) = *(--s);
	}
	return (dest);
}
