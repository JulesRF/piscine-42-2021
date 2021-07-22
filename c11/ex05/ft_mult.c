/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mult.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroux-fo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 15:27:54 by jroux-fo          #+#    #+#             */
/*   Updated: 2021/07/18 21:12:46 by jroux-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <unistd.h>
void	ft_mult(char *op1, char *op2)
{
	ft_putnbr(ft_atoi(op1) * ft_atoi(op2));
	write(1, "\n", 1);
}
