/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroux-fo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 10:25:41 by jroux-fo          #+#    #+#             */
/*   Updated: 2021/07/19 16:50:59 by jroux-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;
	int	way;

	way = 0;
	i = 0;
	while (way == 0 && i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) > 0)
			way = 1;
		else if ((*f)(tab[i], tab[i + 1]) < 0)
			way = -1;
		i++;
	}
	i = 0;
	while (i < length - 1)
	{
		if (way == -1 && ((*f)(tab[i], tab[i + 1]) > 0))
			return (0);
		if (way == 1 && ((*f)(tab[i], tab[i + 1]) < 0))
			return (0);
		i++;
	}
	return (1);
}
