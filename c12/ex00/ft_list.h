/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 19:38:52 by cdoria            #+#    #+#             */
/*   Updated: 2021/09/16 23:13:32 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <stdlib.h>
typedef struct s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;
t_list	*ft_create_elem(void *data);

#endif