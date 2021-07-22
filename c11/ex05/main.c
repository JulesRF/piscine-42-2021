/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroux-fo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 15:24:50 by jroux-fo          #+#    #+#             */
/*   Updated: 2021/07/19 10:00:01 by jroux-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
int	main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	else if (ft_strcmp(ft_error(argc, argv), "1") != 0)
		ft_putstr(ft_error(argc, argv));
	else if (ft_strcmp(argv[2], "+") == 0)
		ft_plus(argv[1], argv[3]);
	else if (ft_strcmp(argv[2], "-") == 0)
		ft_moins(argv[1], argv[3]);
	else if (ft_strcmp(argv[2], "/") == 0)
		ft_division(argv[1], argv[3]);
	else if (ft_strcmp(argv[2], "%") == 0)
		ft_modulo(argv[1], argv[3]);
	else if (ft_strcmp(argv[2], "*") == 0)
		ft_mult(argv[1], argv[3]);
	else
	{
		ft_putchar('0');
		ft_putchar('\n');
	}
	return (0);
}
