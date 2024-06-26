/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:50:58 by tsurma            #+#    #+#             */
/*   Updated: 2024/05/18 19:41:51 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Sets n bytes of the pointed to region to 0*/
void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*t;

	if (!s)
		return ;
	i = -1;
	t = (unsigned char *)s;
	while (++i < n)
		t[i] = '\0';
}
