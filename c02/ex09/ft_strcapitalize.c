/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroux-fo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 12:00:14 by jroux-fo          #+#    #+#             */
/*   Updated: 2021/07/04 11:58:01 by jroux-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_nouveaumot(char *str, int i)
{
	if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
	{
		return (1);
	}
	if (str[i] >= 48 && str[i] <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_nouveaumot(str, i) == 1)
		{
			if (str[i] >= 97 && str[i] <= 122)
				str[i] = str[i] - 32;
			i++;
			while (ft_nouveaumot(str, i) == 1)
			{
				if (str[i] >= 65 && str[i] <= 90)
					str[i] = str[i] + 32;
				i++;
			}
		}
		else
			i++;
	}
	return (str);
}
