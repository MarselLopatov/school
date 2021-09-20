/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 18:27:44 by cdoria            #+#    #+#             */
/*   Updated: 2021/09/11 23:22:36 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define TRUE 1
# define FALSE 0
# define SUCCESS FALSE
# define EVEN_MSG "I have an even number of arguments."
# define ODD_MSG "I have an odd number of arguments."
# define EVEN(x) (x % 2 == 0)

typedef int	t_bool;
t_bool	ft_is_even(int nbr);
void	ft_putstr(char *str);
#endif
