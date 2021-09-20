/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 20:52:43 by cdoria            #+#    #+#             */
/*   Updated: 2021/09/09 21:56:37 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_print_array(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			j++;
		}
		write (1, argv[i], j);
		write (1, "\n", 1);
		i++;
	}
	return ;
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	while (i < argc - 1)
	{
		j = 0;
		while (j < argc - i - 1)
		{
			if (ft_strcmp(argv[j + 1], argv[j]) < 0)
			{
				temp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
	ft_print_array(argc, argv);
}
