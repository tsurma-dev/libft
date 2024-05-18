/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:26:22 by tsurma            #+#    #+#             */
/*   Updated: 2024/05/18 19:45:50 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Sets n bytes in the given memory to unsigned char c*/
void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*t;

	if (!s)
		return (NULL);
	i = -1;
	t = (unsigned char *)s;
	while (++i < n)
		t[i] = (unsigned char)c;
	return (s);
}
