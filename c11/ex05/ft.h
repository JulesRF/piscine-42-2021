/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroux-fo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 16:18:21 by jroux-fo          #+#    #+#             */
/*   Updated: 2021/07/19 09:49:46 by jroux-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_white(char *str);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);
char	*ft_error(int argc, char **argv);
void	ft_plus(char *op1, char	*op2);
void	ft_moins(char *op1, char *op2);
void	ft_division(char *op1, char *op2);
void	ft_modulo(char *op1, char *op2);
void	ft_mult(char *op1, char *op2);
int		main(int argc, char **argv);

#endif
