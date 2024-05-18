/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:59:45 by tsurma            #+#    #+#             */
/*   Updated: 2024/05/18 18:59:05 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Returns 1/true, if the given int falls into ASCII alphanumeric ranges
or 0 if not*/
int	ft_isalnum(int c)
{
	if (((c < 'A' || c > 'Z') && (c < 'a' || c > 'z')) && (c < '0' || c > '9'))
		return (0);
	return (1);
}
