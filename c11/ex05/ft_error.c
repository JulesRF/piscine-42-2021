/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroux-fo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 15:28:43 by jroux-fo          #+#    #+#             */
/*   Updated: 2021/07/19 09:56:20 by jroux-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_error(int argc, char **argv)
{
	int	i;

	i = 0;
	if ((argc - 1) != 3)
		return ("0\n");
	if ((ft_atoi(argv[3]) == 0 && ft_strcmp(argv[2], "%") == 0))
		return ("Stop : modulo by zero\n");
	if ((ft_atoi(argv[3]) == 0 && ft_strcmp(argv[2], "/") == 0))
		return ("Stop : division by zero\n");
	return ("1");
}
