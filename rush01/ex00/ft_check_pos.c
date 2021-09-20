/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_pos.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgreenbl <bgreenbl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 14:04:50 by bgreenbl          #+#    #+#             */
/*   Updated: 2021/09/12 19:03:07 by bgreenbl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_down(int x, int size, int **map)
{
	int	max;
	int	check;
	int	i;

	max = 0;
	check = 0;
	i = -1;
	while (++i < size)
	{
		if (map[x][i] > max)
		{
			max = map[x][i];
			check++;
		}
	}
	if (check != map[size][x])
		return (0);
	return (1);
}

int	ft_check_up(int x, int size, int **map)
{
	int	max;
	int	check;
	int	i;

	max = 0;
	check = 0;
	i = -1;
	while (++i < size)
	{
		if (map[x][size - i - 1] > max)
		{
			max = map[x][size - i - 1];
			check++;
		}
	}
	if (check != map[size][size + x])
		return (0);
	return (1);
}

int	ft_check_right(int y, int size, int **map)
{
	int	max;
	int	check;
	int	i;

	max = 0;
	check = 0;
	i = -1;
	while (++i < size)
	{
		if (map[i][y] > max)
		{
			max = map[i][y];
			check++;
		}
	}
	if (check != map[size][2 * size + y])
		return (0);
	return (1);
}

int	ft_check_left(int y, int size, int **map)
{
	int	max;
	int	check;
	int	i;

	max = 0;
	check = 0;
	i = -1;
	while (++i < size)
	{
		if (map[size - 1 - i][y] > max)
		{
			max = map[size - 1 - i][y];
			check++;
		}
	}
	if (check != map[size][3 * size + y])
		return (0);
	return (1);
}

int	ft_check_pos(int x, int y, int size, int **map)
{
	int	i;

	i = -1;
	while (++i < size)
	{
		if (map[i][y] == map[x][y] && x != i)
			return (0);
		if (map[x][i] == map[x][y] && y != i)
			return (0);
	}	
	if (y == size - 1)
		if (!ft_check_up(x, size, map) || !ft_check_down(x, size, map))
			return (0);
	if (x == size - 1)
		if (!ft_check_left(y, size, map) || !ft_check_right(y, size, map))
			return (0);
	return (1);
}
