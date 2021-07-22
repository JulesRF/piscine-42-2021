/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroux-fo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 15:39:18 by jroux-fo          #+#    #+#             */
/*   Updated: 2021/07/11 21:01:37 by jroux-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int				i;
	unsigned int	nb;

	i = 0;
	if (min >= max)
		return (0);
	nb = (unsigned int)(max - min);
	(*range) = malloc(sizeof(int) * nb);
	if (!(*range))
		return (-1);
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (nb);
}
