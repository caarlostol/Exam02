/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayashi <caarlostol@student.42.rio>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:40:34 by chayashi          #+#    #+#             */
/*   Updated: 2024/02/20 13:11:42 by chayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	letter_count(char c)
{
	int	repeat;

	if (c >= 'A' && c <= 'Z')
		return (c - 'A' + 1);
	else if (c >= 'a' && c <= 'z')
		return (c - 'a' + 1);
	return (1);
}

int	main(int ac, char **av)
{
	int	i;
	int	repeat;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			repeat = letter_count(av[1][i]);
			while (repeat--)
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
}
