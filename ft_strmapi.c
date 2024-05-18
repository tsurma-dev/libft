/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:06:37 by tsurma            #+#    #+#             */
/*   Updated: 2024/05/18 19:29:39 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Applies the function f to each character of the string s, passing its index as
the first argument and the character itself as the second. A new string is
created (using malloc(3)) to collect the results from the successive
applications of f.*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*array;
	int		i;

	array = ft_calloc((ft_strlen((char *)s) + 1), sizeof(char));
	if (!array)
		return (NULL);
	i = 0;
	while (s[i])
	{
		array[i] = f(i, s[i]);
		i++;
	}
	return (array);
}
