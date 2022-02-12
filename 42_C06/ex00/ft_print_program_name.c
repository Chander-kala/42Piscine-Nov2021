/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckala <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 20:44:03 by ckala             #+#    #+#             */
/*   Updated: 2021/12/15 11:02:57 by ckala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h> 

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc < 1)
	{
		return (0);
	}
	while (argv[0][i])
	{
		write(1, &argv[0][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}