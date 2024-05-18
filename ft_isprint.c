/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:12:35 by tsurma            #+#    #+#             */
/*   Updated: 2024/05/18 19:00:28 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Returns 1/true, if the given int falls into ASCII printable range
or 0 if not*/
int	ft_isprint(int c)
{
	if (c < 32 || c > 126)
		return (0);
	return (1);
}
