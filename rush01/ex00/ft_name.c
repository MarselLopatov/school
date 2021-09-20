/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_name.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgreenbl <bgreenbl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 12:42:54 by bgreenbl          #+#    #+#             */
/*   Updated: 2021/09/12 19:03:06 by bgreenbl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_check_pos(int x, int y, int size, int **map);
int	ft_atoi(char *str);
int	ft_param_check(int ac, char **av);

int	**ft_mtx_cpy(int **map, int size)
{
	int	i;
	int	j;
	int	**new;

	i = -1;
	new = (int **)malloc((size + 1) * sizeof(int *));
	while (++i < size)
	{
		j = -1;
		new[i] = (int *)malloc(size * sizeof(int));
		while (++j < size)
		{
			new[i][j] = map[i][j];
		}
	}
	new[size] = (int *)malloc(size * 4 * sizeof(int));
	i = -1;
	while (++i < size * 4)
		new[size][i] = map[size][i];
	return (new);
}

int	ft_map_init_and_pcpy(int ac, char **av, int ***map)
{
	int	i;
	int	j;
	int	**temp;

	if ((ac - 1) % 4 == 0 && ac - 1 >= 4 && ft_param_check(ac, av))
	{
		*map = (int **)malloc((ac - 1) * sizeof(int *) / 4 + 1);
		i = -1;
		temp = *map;
		while (++i < (ac - 1) / 4)
		{
			temp[i] = (int *)malloc((ac - 1) * sizeof(int) / 4);
			j = -1;
			while (++j < (ac - 1) / 4)
				temp[i][j] = 0;
		}
		temp[i] = (int *)malloc((ac - 1) * sizeof(int));
		i = -1;
		while (++i < ac - 1)
			temp[(ac - 1) / 4][i] = ft_atoi(av[i + 1]);
	}
	else
		return (0);
	return (1);
}

int	ft_print_map(int **map, int size)
{
	int		i;
	int		j;
	char	temp;

	i = -1;
	while (++i < size)
	{
		j = -1;
		while (++j < size)
		{
			temp = map[j][i] + '0';
			write(1, &temp, 1);
			if (j != size - 1)
				write(1, " ", 1);
		}
		write(1, "\n", 1);
	}
	return (1);
}

void	ft_free(int **map, int size)
{
	int	i;

	i = -1;
	while (++i <= size)
		free(map[i]);
}

int	ft_fill(int x, int y, int size, int **map)
{
	int	i;
	int	**new;

	new = ft_mtx_cpy(map, size);
	i = 0;
	while (++i <= size)
	{
		new[x][y] = i;
		if (ft_check_pos(x, y, size, new))
		{
			if (x == size - 1 && y == size - 1)
				return (ft_print_map(new, size));
			else if (x < size - 1)
			{
				if (ft_fill(x + 1, y, size, new))
					return (1);
			}
			else if (ft_fill(0, y + 1, size, new))
				return (1);
		}
	}
	ft_free(new, size);
	free(new);
	return (0);
}
