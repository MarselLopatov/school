/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 18:00:35 by cdoria            #+#    #+#             */
/*   Updated: 2021/09/02 20:13:20 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	char	arr[5];

	arr[0] = '0';
	arr[1] = '0';
	arr[2] = ' ';
	arr[3] = '0';
	func_processing_a(arr);
}

void	func_processing_a(char arr[5])
{
	while (arr[0] <= '9' && arr[1] <= '9')
	{
		if (arr[1] == '9')
		{
			arr[3] = arr[0] + 1;
			arr[4] = '0';
		}
		else
		{
			arr[4] = arr[1] + 1;
			arr[3] = arr[0];
		}
		func_processing_b(arr);
		arr[1]++;
		if (arr[1] > '9')
		{
			arr[1] = '0';
			arr[0]++;
		}
	}
}

void	func_processing_b(char arr[5])
{
	while (arr[3] <= '9' && arr[4] <= '9')
	{
		write(1, arr, 5);
		if (arr[0] != '9' || arr[1] != '8' || arr[3] != '9' || arr[4] != '9')
		{
			write(1, ", ", 2);
		}
		if (arr[4] == '9')
		{
			arr[4] = '0';
			arr[3]++;
			continue ;
		}
		arr[4]++;
	}
}
