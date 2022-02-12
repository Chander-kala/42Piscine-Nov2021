/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckala <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 20:14:47 by ckala             #+#    #+#             */
/*   Updated: 2021/12/08 10:51:27 by ckala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str < 32 || *str > 126)
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*int	main()
{
	int isprint;
	char a[] = "\n";
	isprint = ft_str_is_printable(a);
	printf("%d\n", isprint);
}*/
