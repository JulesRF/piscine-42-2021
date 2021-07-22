/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroux-fo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 18:01:01 by jroux-fo          #+#    #+#             */
/*   Updated: 2021/07/12 11:46:26 by jroux-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	size;

	i = 0;
	size = ft_strlen(dest);
	while (src[i])
	{
		dest[size] = src[i];
		i++;
		size++;
	}
	dest[size] = '\0';
	return (dest);
}

int	ft_total_size(int size, char **strs, char *sep)
{
	int	i;
	int	total;

	i = 0;
	total = ft_strlen(sep) * (size - 1);
	while (i < size)
	{
		total = total + ft_strlen(strs[i]);
		i++;
	}
	return (total);
}

char	*ft_total_cat(int size, char *dest, char **strs, char *sep)
{
	int	i;

	i = 0;
	while (i < size)
	{
		dest = ft_strcat(dest, strs[i]);
		if (i < size - 1)
			dest = ft_strcat(dest, sep);
		i++;
	}
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		len;

	dest[0] = 0;
	len = ft_total_size(size, strs, sep);
	if (size <= 0)
		return (dest);
	dest = malloc(sizeof(char) * len + 1);
	if (!dest)
		return (dest);
	dest = ft_total_cat(size, dest, strs, sep);
	dest[len] = '\0';
	return (dest);
}
