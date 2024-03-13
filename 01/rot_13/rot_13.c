/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayashi <caarlostol@student.42.rio>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:45:37 by chayashi          #+#    #+#             */
/*   Updated: 2024/02/20 13:37:14 by chayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 2)
		return (write (1, "\n", 1));
	while(argv[1][i])
	{
		if ((argv[1][i] >= 'a' && argv[1][i] <= 'm')
				|| (argv[1][i] >= 'A' && argv[1][i] <= 'M'))
		{
			argv[1][i] += 13;
			write(1, &argv[1][i], 1);
			i++;
		}
		else if ((argv[1][i] >= 'n' &&  argv[1][i] <= 'z')
					|| (argv[1][i] >= 'N' && argv[1][i] <= 'Z'))
                {
                        argv[1][i] -= 13;
                        write(1, &argv[1][i], 1);
                        i++;
                }
		else
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	
}
