/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroux-fo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 14:06:41 by jroux-fo          #+#    #+#             */
/*   Updated: 2021/07/13 14:28:50 by jroux-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_charset(char chara, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == chara)
			return (1);
		i++;
	}
	return (0);
}

int	ft_size(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!charset)
		return (1);
	while (str[i])
	{
		if (!ft_is_charset(str[i], charset) && str[i])
		{
			while (!ft_is_charset(str[i], charset) && str[i])
				i++;
			count++;
		}
		while (ft_is_charset(str[i], charset) == 1 && str[i])
			i++;
	}
	return (count);
}

char	*ft_strdup(char *src, char *charset)
{
	int		i;
	char	*dest;

	i = 0;
	while (src[i] && ft_is_charset(src[i], charset) == 0)
		i++;
	dest = malloc(sizeof(char) * i + 1);
	i = 0;
	while (src[i] && ft_is_charset(src[i], charset) == 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_alloc(int mot)
{
	char	**dest;

	dest = malloc(sizeof(char *) * mot + 1);
	dest[0] = 0;
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	char	**liste;
	int		i;
	int		mot;
	int		j;

	i = 0;
	j = 0;
	mot = ft_size(str, charset);
	liste = ft_alloc(mot);
	while (j < mot)
	{
		if (str[i])
		{
			while (ft_is_charset(str[i], charset))
				i++;
			liste[j] = ft_strdup(str + i, charset);
			j++;
		}
		while (!ft_is_charset(str[i], charset) && str[i])
			i++;
	}
	liste[j] = 0;
	return (liste);
}
