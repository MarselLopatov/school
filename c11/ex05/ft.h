/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 19:22:25 by cdoria            #+#    #+#             */
/*   Updated: 2021/09/15 16:46:23 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

int		ft_do_plus(int a, int b);
int		ft_do_minus(int a, int b);
int		ft_do_division(int a, int b);
int		ft_do_multiplication(int a, int b);
void	ft_do_op(int ac, char **av);
int		ft_atoi(char *str);
void	ft_putstr(char *str);
int		ft_calc(int ac, char **av);
void	ft_putnbr(int nb);

#endif