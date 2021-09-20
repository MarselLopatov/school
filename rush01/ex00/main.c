/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 19:10:57 by bgreenbl          #+#    #+#             */
/*   Updated: 2021/09/15 16:56:45 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	**ft_split(char *str, char *charset);
void	ft_free(int **map, int size);
int		ft_fill(int x, int y, int size, int **map);
int		ft_map_init_and_pcpy(int ac, char **av, int ***map);

int	main(int argc, char **argv)
{
	int		**map;
	char	**temp;
	int		counter;
	int		i;

	counter = 1;
	i = 0;
	if (argc == 2)
	{
		temp = ft_split(argv[1], " ");
		while (temp[++i] != NULL)
			counter++;
		if (ft_map_init_and_pcpy(counter, temp, &map))
		{
			if (!ft_fill(0, 0, (counter - 1) / 4, map))
				write(1, "No Sollution\n", 13);
			ft_free(map, (counter - 1) / 4);
		}
		else
			write(1, "Error\n", 6);
	}
	else
		write(1, "Error\n", 6);
}
