/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroux-fo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 09:33:29 by jroux-fo          #+#    #+#             */
/*   Updated: 2021/07/20 09:40:49 by jroux-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int    ft_strlen(char *str)
{
    int    i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int    i;
    unsigned int    j;
    unsigned int    destlen;

    i = 0;
    j = 0;
    destlen = ft_strlen(dest);
    while (i < size && dest[i])
        i++;
    if (i == size)
        return (i + ft_strlen(src));
    while (src[j])
    {
        if (j < size - destlen - 1)
        {
            dest[i] = src[j];
            i++;
        }
        j++;
    }
    dest[i] = '\0';
    return (destlen + j);
}
