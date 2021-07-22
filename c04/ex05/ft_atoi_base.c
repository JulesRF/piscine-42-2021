/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroux-fo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 21:35:48 by jroux-fo          #+#    #+#             */
/*   Updated: 2021/07/08 10:35:54 by jroux-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_white(char *str)
{
	int i;

	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	return (i);
}

int	ft_secu(char *base)
{
	int i;
	int j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i] || base[i] == '+' || base[i] == '-'
				|| base[i] <= 32)
				return (0);
			j++;
		}
		i++;
	}
}

int	ft_convert(char *str, char *base)
{
	int	i;

	i = 0;
	
}

int	ft_atoi_base(char *str, char *base)
{
	int i;
	int moins;
	int res;

	i = ft_white(str);
	moins = 0;
	res = 0;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			moins++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= base)
	{
		res = res * 10;
		res = res + 
	}
}

int	main()
{

}
