/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicole <nicole@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 00:53:40 by nicole            #+#    #+#             */
/*   Updated: 2023/01/21 22:49:43 by nicole           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

int	main(int nb, char **argv)
{
	t_data	data;
	int		i;
	int		j;

	if (nb != 2)
		nb_arg_error();
	else if (check_file(argv[1]) == 1)
		file_error();
	data.file = get_file(argv[1]);
	if (data.file[0] == NULL)
		file_invalid(&data);//à mettre dans check_map
	get_map(&data);
	i = 0;
	j = 0;
	while (data.file[i] != NULL)
		ft_putstr_fd(data.file[i++], 1);
	ft_free_str(data.file);
}
