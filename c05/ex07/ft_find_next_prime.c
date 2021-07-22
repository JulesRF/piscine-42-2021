/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroux-fo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 19:06:26 by jroux-fo          #+#    #+#             */
/*   Updated: 2021/07/06 19:41:49 by jroux-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(long int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int			i;
	long int	nbr;

	nbr = nb;
	i = nbr;
	if (nbr <= 1)
		return (2);
	while (i < nbr * 2)
	{
		if (ft_is_prime(i) == 1)
			return (i);
		i++;
	}
	return (0);
}
