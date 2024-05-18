/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_matrix.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:48:24 by tsurma            #+#    #+#             */
/*   Updated: 2024/05/18 18:52:26 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Frees all pointers in the matrix, and then the pointer itself*/
void	free_matrix(char **matrix)
{
	int	i;

	i = -1;
	if (matrix == NULL)
		return ;
	while (matrix[++i])
		free(matrix[i]);
	free(matrix);
}
