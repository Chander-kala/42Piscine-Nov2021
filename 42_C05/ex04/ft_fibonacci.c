/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckala <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 20:49:18 by ckala             #+#    #+#             */
/*   Updated: 2021/12/14 11:25:36 by ckala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	result;

	result = 0;
	if (index < 0)
	{
		return (-1);
	}
	else if (index == 0)
	{
		return (0);
	}
	else if (index == 1)
	{
		return (1);
	}
	else
	{
		result = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	}
	return (result);
}
/*
int main(void)
{
	printf("%d",ft_fibonacci(5));
	return 0;
}*/
