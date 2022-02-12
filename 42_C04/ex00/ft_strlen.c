/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckala <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 12:59:40 by ckala             #+#    #+#             */
/*   Updated: 2021/12/11 19:53:49 by ckala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char*str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	int	c;
	char	*str;
	str = "asdfg";
	c = ft_strlen(str);
	printf("%d", c);
}*/
