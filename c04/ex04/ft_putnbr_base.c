/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroux-fo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 10:35:11 by jroux-fo          #+#    #+#             */
/*   Updated: 2021/07/08 10:37:20 by jroux-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_secu(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(str) < 2)
		return (0);
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j] || str[i] == '+' || str[i] == '-'
				|| str[i] == ' ' || str[i] <= 32)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base_real(long int nbr, char *base)
{
	int	size;

	size = ft_strlen(base);
	if (ft_secu(base) == 0)
		return ;
	if (nbr == -2147483648 && size  == 2)
	{
		ft_putchar('-');
		ft_putchar(base[size - 1]);
		ft_putnbr_base_real(-1 * nbr, base);
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = nbr * -1;
	}
	if (nbr <= size)
		ft_putchar(base[nbr % size]);
	else
	{
		ft_putnbr_base_real(nbr / size, base);
		ft_putchar(base[nbr % size]);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	nbr2;

	nbr2 = nbr;
	ft_putnbr_base_real(nbr2, base);
}

int	main(void)
{
	ft_putnbr_base(42, "\t0123456789abcdef");
}
