/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslowpok <sslowpok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 12:47:59 by sslowpok          #+#    #+#             */
/*   Updated: 2022/02/19 16:34:39 by sslowpok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"
#include "../includes/error.h"

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_printf("more params!\n");
		return (0);
	}
	if (ft_strlen(argv[1]) != 5)
	{
		if (ft_strlen(argv[1]) != 10)
		{
			if (ft_strlen(argv[1]) != 4)
			{
				ft_printf("Invalid input.\n");
				exit (INVALID_DATA);
			}
		}
	}
	new_window(argc, argv);
	return (0);
}
