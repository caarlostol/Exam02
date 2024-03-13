/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayashi <caarlostol@student.42.rio>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 13:46:53 by chayashi          #+#    #+#             */
/*   Updated: 2024/02/23 17:34:11 by chayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	char	*str = av[1];
	
	i =0;
	if (ac == 2)
	{	
		while (str[i])
		{
			if (str[i] >= 'A' && str[i] <= 'Z') 
			{	
				str[i] += 32;
				write(1, "_", 1);
			}
			
			write (1, &str[i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	
}
