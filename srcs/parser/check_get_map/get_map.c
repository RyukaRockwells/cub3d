/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicole <nicole@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 22:51:21 by nicole            #+#    #+#             */
/*   Updated: 2023/01/21 23:06:51 by nicole           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/cub3d.h"

static int	get_first_line_map(char **file)
{
	int	i;
	int	j;

	i = 0;
	while (file[i] != NULL)
	{
		j = 0;
		while (file[i][j] != '\0')
		{
			if (file[i][j] == '1')
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

static int	get_nb_line_map(char **file)
{
	int	nb;
	int	i;
	int	j;

	nb = 0;
	i = get_first_line_map(file);
	while (file[i] != NULL)
	{
		j = 0;
		while (file[i][j] != '\0')
		{
			if (file[i][j] == '1')
			{
				fprintf(stderr, "i = %d\nfile[%d] = %s\n", i, i, file[i]);
				i++;
				nb++;
				break ;
			}
			j++;
		}
		i++;
	}
	return (nb);
}

void	get_map(t_data *data)
{
	int		i;
	int		j;
	int		nb_line_map;
	char	**map;

	i = get_first_line_map(data->file);
	j = 0;
	nb_line_map = get_nb_line_map(data->file);
	fprintf(stderr, "i = %d\ndata->file[%d] = %s\n", i, i, data->file[i]);
	fprintf(stderr, "nb = %d\n", nb_line_map);
}

