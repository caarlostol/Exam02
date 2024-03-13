/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayashi <caarlostol@student.42.rio>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:12:53 by chayashi          #+#    #+#             */
/*   Updated: 2024/03/13 15:12:55 by chayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int i = 0;

        // Find the end of the string
        while (av[1][i])
            i++;

        i -= 1;

        // Skip trailing spaces/tabs
        while (av[1][i] == ' ' || av[1][i] == '\t')
            i--;

        // Print the last word
        while (av[1][i] != ' ' && av[1][i] != '\t' && i >= 0)
        {
            i--;
        }

        i += 1; // Move to the beginning of the last word

        // Print the last word
        while (av[1][i] != ' ' && av[1][i] != '\t' && av[1][i])
        {
            write(1, &av[1][i++], 1);
        }

        write(1, "\n", 1);
    }
    else
    {
        write(1, "\n", 1);
    }

    return 0;
}

--------------------------------------------------------------------------------------------- or ----------------------------------------------------------------------------------------

#include <unistd.h>

void	last_word(char *str)
{
	int	j = 0;
	int i = 0;

	while (str[i])
	{
		if (str[i] == ' ' && str[i + 1] >= 33 && str[i + 1] <= 126)
			j = i + 1;
		i++;
	}
	while (str[j] >= 33 && str[j] <= 127)
	{
		write(1, &str[j], 1);
		j++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		last_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}
