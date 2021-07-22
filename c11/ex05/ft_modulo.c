/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_modulo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroux-fo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 15:28:28 by jroux-fo          #+#    #+#             */
/*   Updated: 2021/07/18 21:12:31 by jroux-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <unistd.h>

void	ft_modulo(char *op1, char *op2)
{
	ft_putnbr(ft_atoi(op1) % ft_atoi(op2));
	write(1, "\n", 1);
}