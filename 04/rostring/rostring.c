/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayashi <caarlostol@student.42.rio>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:29:06 by chayashi          #+#    #+#             */
/*   Updated: 2024/02/28 18:20:29 by chayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
					
int main(int argc, char **argv)
{
	int	i;
	int	start;
	int	end;
	int	flag;
	
	flag = 0;
	if (argc > 1 && argv[1][0])
       	{
		i = 0;
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		start = i;
		while (argv[1][i] != '\0' && argv[1][i] != ' ' && argv[1][i] != '\t')
			i++;
		end = i;
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while(argv[1][i])
		{
			while ((argv[1][i] == ' ' && argv[1][i + 1] == ' ')
					|| (argv[1][i] == '\t' && argv[1][i + 1] == '\t') )
				i++;
			if (argv[1][i] == ' ' || argv[1][i] == '\t')
				flag = 1;
			write(1, &argv[1][i], 1);
			i++;
			flag = 0;
		}
		if (flag)
			write(1, " ", 1);
		while (start < end)
		{
			write(1, &argv[1][start], 1);
			start++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
