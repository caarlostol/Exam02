/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayashi <caarlostol@student.42.rio>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:24:43 by chayashi          #+#    #+#             */
/*   Updated: 2024/02/20 13:29:52 by chayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	if(ac != 4)
		return(write(1, "\n", 1));
	if(av[2][1] || av[3][1])
		return(write(1, "\n", 1));
	i = 0;
	while(av[1][i])
	{
		if(av[1][i] == av[2][0])
			av[1][i] = av[3][0];
		write(1, &av[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return(0);
}
		
