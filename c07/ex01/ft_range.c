/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroux-fo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 13:09:35 by jroux-fo          #+#    #+#             */
/*   Updated: 2021/07/12 14:04:46 by jroux-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	unsigned int	nb;
	int				*tab;
	int				i;

	i = 0;
	if (min >= max)
		return (0);
	nb = (unsigned int)(max - min);
	tab = malloc(sizeof(int) * nb);
	while (i < max - min)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
