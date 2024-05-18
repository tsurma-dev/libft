/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:08:20 by tsurma            #+#    #+#             */
/*   Updated: 2024/05/18 18:59:45 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Returns 1/true, if the given int falls into ASCII range
or 0 if not*/
int	ft_isascii(int c)
{
	if (c < 0 || c > 127)
		return (0);
	return (1);
}
